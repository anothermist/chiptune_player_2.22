#include "ayplayer_lcd_driver.h"

#include <stdint.h>
#include <stdlib.h>
#include <string.h>

const mono_lcd_lib_st7565_cfg_t st7565_cfg {
    .a0     = &lcd_dc_obj,
    .res    = &lcd_res_obj,
    .cs     = &lcd_cs_obj,
    .p_spi  = &spi1,
    .mode   = ST7565_MODE::IVERT_X_AMD_Y
};

extern "C" {

uint8_t lcd_buffer[1024] = { 0 };

}

mono_lcd_lib_st7565 ayplayer_lcd( &st7565_cfg, lcd_buffer );
