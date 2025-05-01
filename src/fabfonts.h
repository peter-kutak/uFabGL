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



#pragma once


#include "fabutils.h"
#include "fabglconf.h"


// Embedded fonts

// fixed width
#include "fonts/font_8x8.h"
//#include "fonts/font_8x14.h"
#include "fonts/font_8x16.h"



// variable width
#include "fonts/font_std_12.h"
#include "fonts/font_std_14.h"


namespace ufabgl {



/**
 * @brief Gets the font info that best fits the specified number of columns and rows.
 *
 * This method returns only fixed width fonts.
 *
 * @param viewPortWidth Viewport width where to fit specified columns
 * @param viewPortHeight Viewport height where to fit specified rows
 * @param columns Minimum number of required columns.
 * @param rows Minimum number of required rows.
 *
 * @return The font info found.
 */
FontInfo const * getPresetFontInfo(int viewPortWidth, int viewPortHeight, int columns, int rows);


/**
 * @brief Gets the font info that best fits the specified height.
 *
 * @param height Required font height in pixels.
 * @param fixedWidth If True returns only fixed width fonts, if False returns only variable width fonts.
 *
 * @return The font info found.
 */
FontInfo const * getPresetFontInfoFromHeight(int height, bool fixedWidth);


/**
 * @brief Gets the fixed width font info with the specified sizes
 *
 * @param width Font width
 * @param height Font height
 *
 * @return The font info found.
 */
FontInfo const * getPresetFixedFont(int width, int height);


};
