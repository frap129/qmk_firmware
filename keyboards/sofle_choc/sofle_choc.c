/* Copyright 2022 Brian Low
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

#include "sofle_choc.h"

#ifdef RGB_MATRIX_ENABLE

led_config_t g_led_config = {
    {
        // Key Matrix to LED Index
        // Left
        { 28, 21, 20, 11, 10,      0 },
        { 27, 22, 19, 12,  9,      1 },
        { 26, 23, 18, 13,  8,      2 },
        { 25, 24, 17, 14,  7,      3 },
        { 16, 15,  6,  5,  4, NO_LED },

        // Right
        { 57, 50, 49, 40, 39,     29 },
        { 56, 51, 48, 41, 38,     30 },
        { 55, 52, 47, 42, 37,     31 },
        { 54, 53, 46, 43, 36,     32 },
        { 45, 44, 35, 34, 33, NO_LED }
    }, {
        // LED Index to Physical Position
        // Left
        {  95,   7 }, {  95,  21 }, {  95,  36 }, {  95,  50 }, { 115,  64 },
        {  95,  64 }, {  76,  62 }, {  76,  48 }, {  76,  33 }, {  76,  19 },
        {  76,   5 }, {  57,   3 }, {  57,  17 }, {  57,  31 }, {  57,  46 },
        {  57,  62 }, {  38,  64 }, {  38,  48 }, {  38,  33 }, {  38,  19 },
        {  38,   5 }, {  19,   7 }, {  19,  21 }, {  19,  36 }, {  19,  50 },
        {   0,  50 }, {   0,  36 }, {   0,  21 }, {   0,   7 },

        // Right
        { 129,   7 }, { 129,  21 }, { 129,  36 }, { 129,  50 }, { 119, 64 },
        { 129,  64 }, { 148,  62 }, { 148,  48 }, { 148,  33 }, { 148, 19 },
        { 148,   5 }, { 167,   3 }, { 167,  17 }, { 167,  31 }, { 167, 46 },
        { 167,  62 }, { 186,  64 }, { 186,  48 }, { 186,  33 }, { 186, 19 },
        { 186,   5 }, { 209,   7 }, { 209,  21 }, { 209,  36 }, { 209, 50 },
        { 224,  50 }, { 224,  36 }, { 224,  21 }, { 224,   7 }
    }, {
        // LED Index to Flag
        // Left
        1, 1, 1, 1, 1,
        1, 1, 1, 1, 1,
        1, 1, 1, 1, 1,
        1, 1, 1, 1, 1,
        1, 1, 1, 1, 1,
        1, 1, 1, 1,

        // Right
        1, 1, 1, 1, 1,
        1, 1, 1, 1, 1,
        1, 1, 1, 1, 1,
        1, 1, 1, 1, 1,
        1, 1, 1, 1, 1,
        1, 1, 1, 1
    }
};

#endif
