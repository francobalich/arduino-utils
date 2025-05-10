# Wemos D1 R32 Pinout

![Wemos D1 R32 Pinout](https://draeger-it.blog/wp-content/uploads/2024/06/Pinout_ESP32_D1_R32.jpg)

## Pin Description

| Pin | Function | Description |
|-----|----------|-------------|
| 3V3 | Power    | 3.3V power supply |
| GND | Ground   | Ground connection |
| D0  | GPIO26   | General purpose I/O |
| D1  | GPIO22   | General purpose I/O, I2C SCL |
| D2  | GPIO21   | General purpose I/O, I2C SDA |
| D3  | GPIO17   | General purpose I/O |
| D4  | GPIO16   | General purpose I/O |
| D5  | GPIO18   | General purpose I/O, SPI SCK |
| D6  | GPIO19   | General purpose I/O, SPI MISO |
| D7  | GPIO23   | General purpose I/O, SPI MOSI |
| D8  | GPIO5    | General purpose I/O, SPI SS |
| RX  | GPIO3    | UART RX |
| TX  | GPIO1    | UART TX |
| A0  | ADC1_CH0 | Analog input (0-3.3V) |

## Special Features

- Built-in WiFi (802.11 b/g/n)
- Built-in Bluetooth 4.2
- Dual-core 32-bit processor
- Operating Voltage: 3.3V
- Input Voltage: 7-12V (via USB)
- Flash Memory: 4MB
- SRAM: 520KB
- Clock Speed: 240MHz

## Common Uses

- WiFi projects
- Bluetooth applications
- IoT applications
- Web servers
- Sensor networks
- Home automation
- Audio projects
- Camera projects

## Notes

- The board is based on the ESP32 chip
- All GPIO pins are 3.3V logic level
- Built-in LED is connected to GPIO2
- I2C pins are fixed to D1 (SCL) and D2 (SDA)
- SPI pins are fixed to D5 (SCK), D6 (MISO), D7 (MOSI), and D8 (SS)
- Supports capacitive touch input
- Has built-in Hall effect sensor
- Supports deep sleep modes
- Can be powered via USB or external power supply 