# TFT Display Tutorial with TFT_eSPI Library

Tutorial to understand how the TFT_eSPI library works and to get experience with the breadboard connections and ESP32.  

TFT_eSPI() library: https://github.com/Bodmer/TFT_eSPI 

## Table of Contents
- [Software Requirements](#software-requirements)
- [Pin Connections](#pin-connections)
- [Getting Started](#getting-started)
- [Understanding the Configuration](#understanding-the-configuration)
- [Implementing Display Functions](#implementing-display-functions)

## Software Requirements
- [PlatformIO IDE](https://platformio.org/) (VS Code extension recommended)  
- [ESP 32 Virtual COM PORT driver](https://www.silabs.com/software-and-tools/usb-to-uart-bridge-vcp-drivers)
- USB cable for ESP32 programming

## Pin Connections

Connect the display to the ESP32 as follows:

| Display Pin | ESP32 Pin | Description |
|-------------|-----------|-------------|
| VCC         | 3.3V      | Power supply |
| GND         | GND       | Ground |
| CS          | GPIO 15   | Chip Select |
| RST         | GPIO 4    | Reset |
| A0/DC       | GPIO 2    | Data/Command |
| SDA         | GPIO 23   | MOSI (Data) |
| SCK         | GPIO 18   | Clock |
| LED         | 3.3V      | Backlight |

## Getting Started

### 1. Clone the Project and create a new branch to work on
Download this tutorial project to your local machine. Use git checkout -b ___________ where ___________ is the branch name

### 2. Open in PlatformIO
- Open VS Code
- Install the PlatformIO IDE extension if not already installed
- Open the project folder in PlatformIO

## Understanding the Configuration

### Display Driver Configuration
The project is configured for an ST7735 display using build flags in `platformio.ini`:

```ini
-D ST7735_DRIVER           # Specify ST7735 driver
-D ST7735_GREENTAB2        # Display variant
-D TFT_MISO=19            # SPI MISO (optional for display)
-D TFT_MOSI=23            # SPI MOSI (data line)
-D TFT_SCLK=18            # SPI Clock
-D TFT_CS=15              # Chip Select
-D TFT_DC=2               # Data/Command pin
-D TFT_RST=4              # Reset pin
```

### Key Build Flags Explained
- `USER_SETUP_LOADED`: Tells TFT_eSPI to use custom configuration
- `LOAD_GLCD`: Enables built-in fonts
- `SMOOTH_FONT`: Enables smooth font rendering
- `SPI_FREQUENCY=27000000`: Sets SPI speed to 27MHz

## Implementing Display Functions

### Your Task: Complete the Functions

You need to implement three functions in `src/display.cpp`:

#### 1. `initDisplay()`
**Objective**: Initialize the display with horizontal orientation and orange background

**Steps to implement**:
- Initialize the TFT object
- Set display rotation for horizontal orientation
- Fill the screen with orange color

#### 2. `setDisplayColor(uint16_t color)`
**Objective**: Change the entire display to a specified color

**Steps to implement**:
- Use the provided color parameter to fill the entire screen

#### 3. `cycleDisplayColor()`
**Objective**: Cycle through different colors automatically


### Useful TFT_eSPI Functions

Go through TFT_eSPI.h in the library's github repo to learn about all the methods

### Common Colors (16-bit RGB565 format)
```cpp
TFT_BLACK       // 0x0000
TFT_NAVY        // 0x000F
TFT_DARKGREEN   // 0x03E0
TFT_DARKCYAN    // 0x03EF
TFT_MAROON      // 0x7800
TFT_PURPLE      // 0x780F
TFT_OLIVE       // 0x7BE0
TFT_LIGHTGREY   // 0xC618
TFT_DARKGREY    // 0x7BEF
TFT_BLUE        // 0x001F
TFT_GREEN       // 0x07E0
TFT_CYAN        // 0x07FF
TFT_RED         // 0xF800
TFT_MAGENTA     // 0xF81F
TFT_YELLOW      // 0xFFE0
TFT_WHITE       // 0xFFFF
TFT_ORANGE      // 0xFD20
```