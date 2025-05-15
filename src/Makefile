TARGET = update_app
CC = arm-none-eabi-gcc
OBJCOPY = arm-none-eabi-objcopy
CFLAGS = -mcpu=cortex-a7 -mthumb -O2 -std=c99

all: $(TARGET).bin

$(TARGET).elf: src/main.c
	$(CC) $(CFLAGS) -o $@ $^

$(TARGET).bin: $(TARGET).elf
	$(OBJCOPY) -O binary $< $@

clean:
	rm -f *.elf *.bin
