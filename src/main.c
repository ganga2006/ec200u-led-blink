#include "ql_type.h"
#include "ql_gpio.h"
#include "ql_timer.h"
#include "ql_trace.h"

#define LED_GPIO PINNAME_GPIO1

static u32 timer_id = 0;
static bool led_state = FALSE;

void TimerCallback(u32 timerId, void* param) {
    led_state = !led_state;
    Ql_GPIO_SetLevel(LED_GPIO, led_state ? PINLEVEL_HIGH : PINLEVEL_LOW);
}

void ql_entry(void) {
    Ql_GPIO_Init(LED_GPIO, PINDIRECTION_OUT, PINLEVEL_LOW, PINPULLSEL_DISABLE);
    Ql_Timer_Register(timer_id, TimerCallback, NULL);
    Ql_Timer_Start(timer_id, 500, TRUE);
    Ql_Debug_Trace(">> LED blinking started\\r\\n");
}
