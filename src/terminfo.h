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


/**
 * @file
 *
 * @brief This file contains terminal emulation definitions.
 */


#include "devdrivers/keyboard.h"


namespace ufabgl {




constexpr int EmuTerminalMaxChars = 8;


/** \ingroup Enumerations
 * @brief
 */
enum class ConvCtrl {
  END,                      /**<    */
  CarriageReturn,           /**<    */
  LineFeed,                 /**<    */
  CursorLeft,               /**<    */
  CursorUp,                 /**<    */
  CursorRight,              /**<    */
  EraseToEndOfScreen,       /**<    */
  EraseToEndOfLine,         /**<    */
  CursorHome,               /**<    */
  AttrNormal,               /**<    */
  AttrBlank,                /**<    */
  AttrBlink,                /**<    */
  AttrBlinkOff,             /**<    */
  AttrReverse,              /**<    */
  AttrReverseOff,           /**<    */
  AttrUnderline,            /**<    */
  AttrUnderlineOff,         /**<    */
  AttrReduce,               /**<    */
  AttrReduceOff,            /**<    */
  CursorPos,                /**<    */
  CursorPos2,               /**<    */
  InsertLine,               /**<    */
  InsertChar,               /**<    */
  DeleteLine,               /**<    */
  DeleteCharacter,          /**<    */
  CursorOn,                 /**<    */
  CursorOff,                /**<    */
  SaveCursor,               /**<    */
  RestoreCursor,            /**<    */
};


// converts from emulated terminal video control code to ANSI/VT control codes
struct TermInfoVideoConv {
  const char * termSeq;        // input terminal control code to match. 0xFF matches any char
  int          termSeqLen;     // length of termSeq string
  ConvCtrl     convCtrl[5];    // output video action (will be converted to ANSI control code). Last ctrl must be ConvCtrl::End
};


// converts from emulated terminal keyboard virtual key to ANSI/VT control codes
struct TermInfoKbdConv {
  VirtualKey   vk;             // input virtual key
  const char * ANSICtrlCode;   // output ANSI control code
};


struct TermInfo {
  char const *              initString;
  TermInfoVideoConv const * videoCtrlSet;
  TermInfoKbdConv const *   kbdCtrlSet;
};



/** \ingroup Enumerations
 * @brief This enum defines supported terminals
 */
enum TermType {
  ANSI_VT        /**< Native ANSI/VT terminal */
};


struct SupportedTerminals {
  static int count()            { return (int)ANSI_VT - (int)ANSI_VT + 1; }
  static char const * * names() {
    static char const * TERMS[] = { "ANSI" };
    return TERMS;
  }
  static TermType * types() {
    static TermType TYPES[]     = { ANSI_VT };
    return TYPES;
  }
};


}
