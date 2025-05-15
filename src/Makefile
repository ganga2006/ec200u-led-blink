TARGET = update_app.bin
CC = arm-none-eabi-gcc
CFLAGS = -mcpu=cortex-m3 -mthumb -Os

SRC = src/main.c

all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o update_app.elf $(SRC)
	arm-none-eabi-objcopy -O binary update_app.elf $(TARGET)

clean:
	rm -f *.o *.elf *.bin
