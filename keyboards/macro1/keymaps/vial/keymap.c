 /* Copyright 2021 Laneware Peripherals
  * 
  * This program is free software: you can redistribute it and/or modify 
  * it under the terms of the GNU General Public License as published by 
  * the Free Software Foundation, either version 2 of the License, or 
  * (at your option) any later version. 
  * 
  * This program is distributed in the hope that it will be useful, 
  * but WITHOUT ANY WARRANTY; without even the implied warranty of 
  * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the 
  * GNU General Public License for more details. 
  * 
  * You should have received a copy of the GNU General Public License 
  * along with this program.  If not, see <http://www.gnu.org/licenses/>. 
  */ 

#include QMK_KEYBOARD_H

/* 
 * ┌───┐   ┌───┬───┐ 
 * │K00│   │K02│K03│
 * └───┘   └───┴───┘ 
 * ┌───┬───┬───┬───┐
 * │K10│K11│K12│K13│
 * ├───┼───┼───┼───┤ 
 * │K20│K21│K22│K23│
 * ├───┼───┼───┤   │ 
 * │K30│K31│K32│   │
 * ├───┼───┼───┼───┤ 
 * │K40│K41│K42│K43│
 * ├───┴───┼───┤   │ 
 * │K50    │K52│   │
 * └───────┴───┴───┘
 */

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

		[0] = LAYOUT_ortho_5x4(
		KC_1, KC_2, KC_3, KC_4,
		KC_5, KC_6, KC_7, KC_8,
		KC_9, KC_0, KC_A, KC_B,
		KC_C, KC_D, KC_E, KC_F,
		KC_G, KC_H, KC_I, KC_J),
 };



led_config_t g_led_config = {
    {
        {  16,  17,  18,  19},
        {  15,  14,  13,  12},
        {  8,  9,  10,  11},
        {  7,  6,  5,  4},
        {  0,  1,  2,  3}
    },
    {
        { 0,   64 }, { 75,   64 }, { 150,   64 }, { 224,   64 },
        { 224,   48 }, { 150,   48 }, { 75,   48 }, { 0,   49 },
        { 0,   32 }, { 75,   32 }, { 150,   32 }, { 224,   32 },
        { 224,   16 }, { 150,   16 }, { 75,   16 }, { 0,   16 },
        { 0,   0 }, { 75,   0 }, { 150,   0 }, { 224,   0 },
    },
    {
        4,4,4,4,
        4,4,4,4,
        4,4,4,4,
        4,4,4,4,
        4,4,4,4
    }
};