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
#include "migitepad.h"

led_config_t g_led_config = { {
  // Key Matrix to LED Index
  { 0, 1, 2, NO_LED, NO_LED, NO_LED, NO_LED },
  { 9, 8, 7, 6, 5, 4, 3 },
  { 10, 11, 12, 13, 14, 15, 16 },
  { NO_LED, NO_LED, NO_LED, 19, 18, 17, NO_LED },
  { NO_LED, 20, NO_LED, 21, 22, 23, NO_LED },
  { 29, 28, 27, 26, NO_LED, 25, 24 },
}, {
  // LED Index to Physical Position
  { 0,  0 }, { 37,  0 }, { 75,  0 }, 
  { 224,  13 }, { 187,  13 }, { 149,  13 }, { 112,  13 }, { 75,  13 }, { 37,  13 }, { 0,  13 },
  { 0,  26 }, { 37,  26 }, { 75,  26 }, { 112,  26 }, { 149,  26 }, { 187,  26 }, { 224,  32 },
										{ 187,  38 }, { 149,  38 }, { 112,  38 },
			  { 37,  51 }, 				{ 112,  51 }, { 149,  51 }, { 187,  51 }, { 224,  58 },
  { 187,  64 }, { 130,  64 }, { 75,  64 }, { 37,  64 }, { 0,  64 },
}, {
  // LED Index to Flag
  1, 4, 1, 1, 4, 4, 4, 4, 4, 1,1, 4, 4, 4, 4, 4, 1, 1, 4, 1, 1, 4, 4, 1, 1, 4, 4, 4, 4, 1,
} };
