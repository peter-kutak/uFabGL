/*
  Created by Fabrizio Di Vittorio (fdivitto2013@gmail.com) - <http://www.fabgl.com>
  Copyright (c) 2019-2022 Fabrizio Di Vittorio.
  All rights reserved.


* Please contact fdivitto2013@gmail.com if you need a commercial license.


* This library and related software is available under GPL v3.

  FabGL is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  FabGL is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with FabGL.  If not, see <http://www.gnu.org/licenses/>.
 */


#include "codepages.h"


#pragma GCC optimize ("O2")



namespace ufabgl {



///////////////////////////////////////////////////////////////////////////////////
// Codepage 437

const VirtualKeyToUnicode convTable[] = {


  { VK_EXCLAIM_INV,  0x00a1 },    // ¡
  { VK_POUND,        0x00a3 },    // £
  { VK_SECTION,      0x00a7 },    // §
  { VK_DIAERESIS,    0x00a8 },    // ¨
  { VK_NEGATION,     0x00ac },    // ¬
  { VK_UPPER_a,      0x00aa },    // ª
  { VK_DEGREE,       0x00b0 },    // °
  { VK_SQUARE,       0x00b2 },    // ²
  { VK_ACUTEACCENT,  0x00b4 },    // ´
  { VK_MU,           0x00b5 },    // µ
  { VK_INTERPUNCT,   0x00b7 },    // ·
  { VK_QUESTION_INV, 0x00bf },    // ¿
  { VK_GRAVE_A,      0x00c0 },    // À
  { VK_ACUTE_A,      0x00c1 },    // Á
  { VK_CARET_A,      0x00c2 },    // Â
  { VK_TILDE_A,      0x00c3 },    // Ã
  { VK_UMLAUT_A,     0x00c4 },    // Ä
  { VK_ARING,        0x00c5 },    // 
  { VK_AELIG,        0x00c6 },    // 
  { VK_CEDILLA_C,    0x00c7 },    // Ç
  { VK_GRAVE_E,      0x00c8 },    // È
  { VK_ACUTE_E,      0x00c9 },    // É
  { VK_CARET_E,      0x00ca },    // Ê
  { VK_UMLAUT_E,     0x00cb },    // Ë
  { VK_GRAVE_I,      0x00cc },    // Ì
  { VK_ACUTE_I,      0x00cd },    // Í
  { VK_CARET_I,      0x00ce },    // Î
  { VK_UMLAUT_I,     0x00cf },    // Ï
  { VK_ETH,          0x00d0 },    // Đ 
  { VK_TILDE_N,      0x00d1 },    // Ñ
  { VK_GRAVE_O,      0x00d2 },    // Ò
  { VK_ACUTE_O,      0x00d3 },    // Ó
  { VK_CARET_O,      0x00d4 },    // Ô
  { VK_TILDE_O,      0x00d5 },    // Õ
  { VK_UMLAUT_O,     0x00d6 },    // Ö
  { VK_GRAVE_U,      0x00d9 },    // Ù
  { VK_ACUTE_U,      0x00da },    // Ú
  { VK_CARET_U,      0x00db },    // Û
  { VK_UMLAUT_U,     0x00dc },    // Ü
  { VK_ACUTE_Y,      0x00dd },    // Ý
  { VK_ESZETT,       0x00df },    // ß
  { VK_GRAVE_a,      0x00e0 },    // à
  { VK_ACUTE_a,      0x00e1 },    // á
  { VK_CARET_a,      0x00e2 },    // â
  { VK_TILDE_a,      0x00e3 },    // ã
  { VK_UMLAUT_a,     0x00e4 },    // ä
  { VK_CEDILLA_c,    0x00e7 },    // ç
  { VK_GRAVE_e,      0x00e8 },    // è
  { VK_ACUTE_e,      0x00e9 },    // é
  { VK_CARET_e,      0x00ea },    // ê
  { VK_UMLAUT_e,     0x00eb },    // ë
  { VK_GRAVE_i,      0x00ec },    // ì
  { VK_ACUTE_i,      0x00ed },    // í
  { VK_CARET_i,      0x00ee },    // î
  { VK_UMLAUT_i,     0x00ef },    // ï
  { VK_eth,          0x00f0 },    // đ
  { VK_TILDE_n,      0x00f1 },    // ñ
  { VK_GRAVE_o,      0x00f2 },    // ò
  { VK_ACUTE_o,      0x00f3 },    // ó
  { VK_CARET_o,      0x00f4 },    // ô
  { VK_TILDE_o,      0x00f5 },    // õ
  { VK_UMLAUT_o,     0x00f6 },    // ö
  { VK_DIV,          0x00f7 },    // 
  { VK_oslash,       0x00f8 },    // 
  { VK_GRAVE_u,      0x00f9 },    // ù
  { VK_ACUTE_u,      0x00fa },    // ú
  { VK_CARET_u,      0x00fb },    // û
  { VK_UMLAUT_u,     0x00fc },    // ü
  { VK_ACUTE_y,      0x00fd },    // ý
  { VK_UMLAUT_y,     0x00ff },    // ÿ

//  { VK_GRAVE_Y,      0x59 },    // Ỳ -> Y  (not in cp437)
//  { VK_CARET_Y,      0x59 },    // Ŷ -> Y  (not in cp437)
//  { VK_GRAVE_y,      0x79 },    // ỳ -> y  (not in cp437)
//  { VK_CARET_y,      0x79 },    // ŷ -> y  (not in cp437)

  { VK_CARON_C,      0x010c },    // Č
  { VK_CARON_c,      0x010d },    // č
  { VK_CARON_D,      0x010e },    // Ď
  { VK_CARON_d,      0x010f },    // ď
  { VK_CARON_E,      0x011a },    // Ě
  { VK_CARON_e,      0x011b },    // ě
  { VK_CARON_L,      0x013d },    // Ľ
  { VK_CARON_l,      0x013e },    // ľ
  { VK_LSTROK,       0x0141 },    // Ł
  { VK_lstrok,       0x0142 },    // ł
  { VK_ACUTE_N,      0x0143 },    // Ń
  { VK_ACUTE_n,      0x0144 },    // ń
  { VK_CARON_N,      0x0147 },    // Ň
  { VK_CARON_n,      0x0148 },    // ň
  { VK_ACUTE_R,      0x0154 },    // Ŕ
  { VK_ACUTE_r,      0x0155 },    // ŕ
  { VK_CARON_R,      0x0158 },    // Ř
  { VK_CARON_r,      0x0159 },    // ř
  { VK_ACUTE_S,      0x015a },    // Ś
  { VK_ACUTE_s,      0x015b },    // ś
  { VK_CARON_S,      0x0160 },    // Š
  { VK_CARON_s,      0x0161 },    // š
  { VK_CARON_T,      0x0164 },    // Ť
  { VK_CARON_t,      0x0165 },    // ť
  { VK_UMLAUT_Y,     0x0178 },    // Ÿ
  { VK_ACUTE_Z,      0x0179 },    // 
  { VK_ACUTE_z,      0x017a },    // 
  { VK_CARON_Z,      0x017d },    // 
  { VK_CARON_z,      0x017e },    // 
  { VK_BREVEACCENT,  0x02d8 },    // 
  { VK_EURO,         0x20ac },    // €
  { VK_TM,           0x2122 },    // 

  { VK_NONE,         0x00 },    // end of table
};



///////////////////////////////////////////////////////////////////////////////////
// virtualKeyToASCII


// -1 = virtual key cannot be translated to ASCII
// of VirtualKeyItem uses:
//    - .vk
//    - .CTRL
//    - .SHIFT
//    - .SCROLLLOCK
char32_t virtualKeyToUnicode(VirtualKeyItem const & item)
{
  //char32_t r = -1; //FIXME chce to nieaky iny priznak lebo nemam rozsah do zapornych
  char32_t r = 0; //FIXME skusim 0 co som nasiel tak pri -1 nastavim 0

  if (item.CTRL) {

      // CTRL + ....

      switch (item.vk) {

        case VK_SPACE:
          r = ASCII_NUL;                    // CTRL SPACE = NUL
          break;

        case VK_BACKSPACE:
          r = ASCII_DEL;                    // CTRL BACKSPACE = DEL
          break;

        case VK_DELETE:
        case VK_KP_DELETE:
          r = ASCII_DEL;                    // DELETE = dEL
          break;

        case VK_RETURN:
        case VK_KP_ENTER:
          r = ASCII_LF;                     // CTRL ENTER = LF
          break;

        case VK_ESCAPE:
          r = ASCII_ESC;                    // CTRL ESCAPE = ESC
          break;

        case VK_2:
          r = ASCII_NUL;                    // CTRL 2 = NUL
          break;

        case VK_6:
          r = ASCII_RS;                     // CTRL 6 = RS
          break;

        case VK_a ... VK_z:
          r = item.vk - VK_a + ASCII_SOH ;  // CTRL alpha = SOH (a) ...SUB (z)
          break;

        case VK_A ... VK_Z:
          r = item.vk - VK_A + ASCII_SOH;   // CTRL alpha = SOH (A) ...SUB (Z)
          break;

        case VK_MINUS:
          r = ASCII_US;                     // CTRL - = US
          break;

        case VK_BACKSLASH:
          r = ASCII_FS;                     // CTRL \ = FS
          break;

        case VK_QUESTION:
          r = ASCII_US;                     // CTRL ? = US
          break;

        case VK_LEFTBRACKET:
          r = ASCII_ESC;                    // CTRL [ = ESC
          break;

        case VK_RIGHTBRACKET:
          r = ASCII_GS;                     // CTRL ] = GS
          break;

        case VK_TILDE:
          r = ASCII_RS;                     // CTRL ~ = RS
          break;

        default:
          break;

      }

  } else {

      switch (item.vk) {

        case VK_BACKSPACE:
          r = ASCII_BS;                     // BACKSPACE = BS
          break;

        case VK_RETURN:
        case VK_KP_ENTER:
          r = ASCII_CR;                     // ENTER = CR
          break;

        case VK_TAB:
          if (!item.SHIFT)
            r = ASCII_HT;                   // TAB = HT
          break;

        case VK_ESCAPE:
          r = ASCII_ESC;                    // ESCAPE = ESC
          break;

        case VK_SCROLLLOCK:
          r = item.SCROLLLOCK ? ASCII_XOFF : ASCII_XON; // SCROLLLOCK = switch XOFF / XON
          break;

        case VK_0 ... VK_9:
          r = item.vk - VK_0 + '0';         // digits
          break;

        case VK_KP_0 ... VK_KP_9:
          r = item.vk - VK_KP_0 + '0';      // keypad digits
          break;

        case VK_a ... VK_z:
          r = item.vk - VK_a + 'a';         // lowercase alpha
          break;

        case VK_A ... VK_Z:
          r = item.vk - VK_A + 'A';         // uppercase alpha
          break;

        case VK_SPACE:
          r = ASCII_SPC;                    // SPACE
          break;

        case VK_QUOTE:
          r = '\'';                         // '
          break;

        case VK_QUOTEDBL:
          r = '"';                          // "
          break;

        case VK_EQUALS:
          r = '=';                          // =
          break;

        case VK_MINUS:
        case VK_KP_MINUS:
          r = '-';                          // -
          break;

        case VK_PLUS:
        case VK_KP_PLUS:
          r = '+';                          // +
          break;

        case VK_KP_MULTIPLY:
        case VK_ASTERISK:
          r = '*';                          // *
          break;

        case VK_KP_DIVIDE:
        case VK_SLASH:
          r = '/';                          // /
          break;

        case VK_KP_PERIOD:
        case VK_PERIOD:
          r = '.';                          // .
          break;

        case VK_COLON:
          r = ':';                          // :
          break;

        case VK_COMMA:
          r = ',';                          // ,
          break;

        case VK_SEMICOLON:
          r = ';';                          // ;
          break;

        case VK_AMPERSAND:
          r = '&';                          // &
          break;

        case VK_VERTICALBAR:
          r = '|';                          // |
          break;

        case VK_HASH:
          r = '#';                          // #
          break;

        case VK_AT:
          r = '@';                          // @
          break;

        case VK_CARET:
          r = '^';                          // ^
          break;

        case VK_DOLLAR:
          r = '$';                          // $
          break;

        case VK_GRAVEACCENT:
          r = 0x60;                         // `
          break;

        case VK_PERCENT:
          r = '%';                          // %
          break;

        case VK_EXCLAIM:
          r = '!';                          // !
          break;

        case VK_LEFTBRACE:
          r = '{';                          // {
          break;

        case VK_RIGHTBRACE:
          r = '}';                          // }
          break;

        case VK_LEFTPAREN:
          r = '(';                          // (
          break;

        case VK_RIGHTPAREN:
          r = ')';                          // )
          break;

        case VK_LESS:
          r = '<';                          // <
          break;

        case VK_GREATER:
          r = '>';                          // >
          break;

        case VK_UNDERSCORE:
          r = '_';                          // _
          break;

        case VK_BACKSLASH:
          r = '\\';                         // backslash
          break;

        case VK_QUESTION:
          r = '?';                          // ?
          break;

        case VK_LEFTBRACKET:
          r = '[';                          // [
          break;

        case VK_RIGHTBRACKET:
          r = ']';                          // ]
          break;

        case VK_TILDE:
          r = '~';                          // ~
          break;

        default:
          // look into codepage table
          if (convTable) {
            for (auto cpitem = convTable; cpitem->vk != VK_NONE; ++cpitem) {
              if (item.vk == cpitem->vk) {
                r = cpitem->unicode;
                break;
              }
            }
          }
          break;

      }

  }

  return r;
}




} // fabgl namespace
