/*
Copyright 2021 Spencer Deven <splitlogicdesign@gmail.com>

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
#pragma once

#ifdef OLED_DRIVER_ENABLE
  #define OLED_IC OLED_IC_SH1106
  #define OLED_DISPLAY_128X64
  #define OLED_TIMEOUT 400000
  #define OLED_COLUMN_OFFSET 2
  
#endif

#ifdef RGB_MATRIX_ENABLE
	#define DISABLE_RGB_MATRIX_SOLID_COLOR
	#define DISABLE_RGB_MATRIX_ALPHAS_MODS
	#define DISABLE_RGB_MATRIX_BREATHING
	#define DISABLE_RGB_MATRIX_BAND_SAT
	#define DISABLE_RGB_MATRIX_BAND_VAL
	#define DISABLE_RGB_MATRIX_GRADIENT_LEFT_RIGHT
	#define DISABLE_RGB_MATRIX_RAINDROPS
	#define SPLIT_TRANSPORT_MIRROR
	#define DISABLE_RGB_MATRIX_CYCLE_ALL
#endif