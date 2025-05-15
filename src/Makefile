TARGET = update_app.bin
CC = arm-none-eabi-gcc
CFLAGS = -mcpu=cortex-m3 -mthumb -Os

all: $(TARGET)

$(TARGET): main.c
	$(CC) $(CFLAGS) -o update_app.elf main.c
	arm-none-eabi-objcopy -O binary update_app.elf $(TARGET)

clean:
	rm -f *.o *.elf *.bin
