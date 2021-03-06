/*

  osccontrol-light - An audio plugin that speaks OSC.
  Copyright (C) 2020 Patric Schmitz

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

struct LayoutHints
{
public:
    static const int heightRow = 32;
    static const int heightTextBox = 24;
    static const int widthTextPort = 48;

    static const int sizeGap = 4;
    static const int sizeIcons = 28;
    static const int sizeKnob = 42;
    static const int sizeButton = 22;

    static int getTextBoxInset();
};
