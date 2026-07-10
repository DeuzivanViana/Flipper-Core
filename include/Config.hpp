#ifndef CONFIG_HPP
#define CONFIG_HPP

#include <Arduino.h>
#include <U8g2lib.h> 

namespace Config {
    constexpr const char* FIRMWARE_NAME = "Flipper-Core";
    constexpr const char* FIRMWARE_MODEL = "00A";
    constexpr uint16_t FIRMWARE_VERSION = 0x001;

    #define DISPLAY_INSTANCE U8G2_SSD1306_128X64_NONAME_1_HW_I2C 
    
    constexpr uint8_t DISPLAY_WIDTH = 128;
    constexpr uint8_t DISPLAY_HEIGHT = 64;
    constexpr uint8_t FPS = 30;

    namespace Style {
        constexpr uint8_t TEXT_MARGIN_TOP = 4;
        constexpr uint8_t TEXT_MARGIN_LEFT = 8;
        constexpr uint8_t FONT_HEIGHT = 10;
        
        constexpr uint8_t ICON_SIZE = 10;
        constexpr uint8_t ICON_PADDING_BOTTOM = 8;
        constexpr uint8_t ICON_PADDING = 14;
        
        constexpr uint8_t MENU_MARGIN_TOP = 0;
        constexpr uint8_t OPTIONS_GAP = 1;
        constexpr uint8_t CURSOR_MARGIN_BOTTOM = 3;
    }

    namespace Limits {
        constexpr uint8_t MAX_OPTIONS_BY_PAGE = 5;
        constexpr uint8_t MAX_OPTIONS_BY_MENU = 7;
    }
}

constexpr const uint8_t* FONT_INSTANCE = u8g2_font_6x10_tf;

#endif