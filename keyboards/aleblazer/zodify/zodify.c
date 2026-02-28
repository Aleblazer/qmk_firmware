/*
Copyright 2023 Spencer Deven <splitlogicdesign@gmail.com>
This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.
This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.
You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
#include "quantum.h"

#ifdef QUANTUM_PAINTER_ENABLE
#include "print.h"
#include "images/ZodifyBlue.qgf.c"

static painter_device_t display;
static painter_image_handle_t image;


painter_device_t qp_st7789_make_spi_device(uint16_t panel_width, uint16_t panel_height, pin_t chip_select_pin, pin_t dc_pin, pin_t reset_pin, uint16_t spi_divisor, int spi_mode);
// painter_device_t qp_gc9a01_make_spi_device(uint16_t panel_width, uint16_t panel_height, pin_t chip_select_pin, pin_t dc_pin, pin_t reset_pin, uint16_t spi_divisor, int spi_mode);
void qp_set_viewport_offsets(painter_device_t device, uint16_t offset_x, uint16_t offset_y);
void keyboard_post_init_user(void) {
  // Customise these values to desired behaviour
  debug_enable=true;
  debug_matrix=true;
  debug_keyboard=true;
  debug_mouse=true;
}


uint32_t deferred_init(uint32_t trigger_time, void *cb_arg) {

    print("doing stuff\n");

    // ##ST7789 screen support
    display = qp_st7789_make_spi_device(240, 320, LCD_CS_PIN, LCD_DC_PIN, LCD_RST_PIN, LCD_SPI_DIVISOR, 3);
    qp_set_viewport_offsets(display, 0, 20);
    if (is_keyboard_left()) {
        qp_power(display, true);
        } 
    if (is_keyboard_left()) {
        qp_init(display, QP_ROTATION_180);
        } 
// If using pointing device on right side, comment out following 3 lines
    //     else {
    //     qp_init(display, QP_ROTATION_0);
    //     }
    if (is_keyboard_left()) {
        image = qp_load_image_mem(gfx_ZodifyBlue);
    } 
// If using pointing device on right side, comment out following 3 lines
    // else {
    //     image = qp_load_image_mem(gfx_ZodifyBlue);
    // }
    // ##end ST7789 screen support

    // ##GC9A01 screeen support
    // display = qp_gc9a01_make_spi_device(240, 240, LCD_CS_PIN, LCD_DC_PIN, LCD_RST_PIN, LCD_SPI_DIVISOR, 0);
    // qp_power(display, true);
    // if (is_keyboard_left()) {
    //     qp_init(display, QP_ROTATION_0);
    //     } else {
    //     qp_init(display, QP_ROTATION_0);
    //     }

    //     if (is_keyboard_left()) {
    //     image = qp_load_image_mem(gfx_ZodiarkPiLogoGC);
    // } else {
    //     image = qp_load_image_mem(gfx_ZodiarkPiLogoGC);
    // }
    // ##end GC9A01 screeen support

    if (image != NULL) {
        print("image was not null\n");
        if (is_keyboard_left()) {
            qp_drawimage(display, 0, 0, image);
        } 
    // If using pointing device on right side, comment out following 3 lines
        // else {
        //     qp_drawimage(display, 0, 0, image);
        // }
    }


    return(0);
}

void keyboard_post_init_kb(void)
{
    debug_enable=true;
    defer_exec(3000, deferred_init, NULL);
}
#endif
