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


#include "terminfo.h"



namespace ufabgl {



const TermInfoKbdConv kbdConv_Generic[] = {
  // Cursor Up => CTRL-E, WordStar Up
  { VK_UP, "\x05" },

  // Cursor Down => CTRL-X, WordStar Down
  { VK_DOWN, "\x18" },

  // Cursor Left => CTRL-S, WordStar Left
  { VK_LEFT, "\x13" },

  // Cursor Right => CTRL-D, WordStar right
  { VK_RIGHT, "\x04" },

  // Home => CTRL-Q S, WordStar Home
  { VK_HOME, "\x11" "S" },

  // End => CTRL-Q D, WordStar End
  { VK_END, "\x11" "D" },

  // PageUp => CTRL-C, WordStar PageUp
  { VK_PAGEUP, "\x12" },

  // PageDown => CTRL-R, WordStar PageDown
  { VK_PAGEDOWN, "\x03" },

  // Backspace => CTRL-H, CP/M delete char left (but WordStar just moves cursor left)
  { VK_BACKSPACE, "\x08" },

  // Delete => CTRL-G, WordStar delete char right
  { VK_DELETE, "\x07" },

  // Last item marker
  { VK_NONE, nullptr },
};


}
