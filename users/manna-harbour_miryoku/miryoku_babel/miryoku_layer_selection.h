// Copyright 2019 Manna Harbour
// https://github.com/manna-harbour/miryoku
// generated -*- buffer-read-only: t -*-

// This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 2 of the License, or (at your option) any later version. This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with this program. If not, see <http://www.gnu.org/licenses/>.

#pragma once

#include "miryoku_layer_alternatives.h"

#define MIRYOKU_LAYER_BASE LAYER_BASE_NIX
#define MIRYOKU_LAYER_TAP LAYER_TAP
#define MIRYOKU_LAYER_NAV LAYER_NAV_NIX
#define MIRYOKU_LAYER_MOUSE LAYER_MOUSE_NIX
#define MIRYOKU_LAYER_MEDIA LAYER_MEDIA_NIX
#define MIRYOKU_LAYER_NUM LAYER_NUM_NIX
#define MIRYOKU_LAYER_SYM LAYER_SYM_NIX
#define MIRYOKU_LAYER_SYM2 LAYER_SYM2_NIX
#define MIRYOKU_LAYER_FUN LAYER_FUN_NIX
#define MIRYOKU_LAYER_EXTRA MIRYOKU_ALTERNATIVES_BASE_AZERTY_FLIP

#if !defined(MIRYOKU_LAYERMAPPING_BASE)
  #define MIRYOKU_LAYERMAPPING_BASE MIRYOKU_MAPPING
#endif

#if !defined(MIRYOKU_LAYERMAPPING_EXTRA)
  #define MIRYOKU_LAYERMAPPING_EXTRA MIRYOKU_MAPPING
#endif

#if !defined(MIRYOKU_LAYERMAPPING_TAP)
  #define MIRYOKU_LAYERMAPPING_TAP MIRYOKU_MAPPING
#endif

#if !defined(MIRYOKU_LAYER_BUTTON)
  #define MIRYOKU_LAYER_BUTTON MIRYOKU_ALTERNATIVES_BUTTON
#endif
#if !defined(MIRYOKU_LAYERMAPPING_BUTTON)
  #define MIRYOKU_LAYERMAPPING_BUTTON MIRYOKU_MAPPING
#endif

#if !defined(MIRYOKU_LAYERMAPPING_NAV)
  #define MIRYOKU_LAYERMAPPING_NAV MIRYOKU_MAPPING
#endif

#if !defined(MIRYOKU_LAYERMAPPING_MOUSE)
  #define MIRYOKU_LAYERMAPPING_MOUSE MIRYOKU_MAPPING
#endif

#if !defined(MIRYOKU_LAYERMAPPING_MEDIA)
  #define MIRYOKU_LAYERMAPPING_MEDIA MIRYOKU_MAPPING
#endif

#if !defined(MIRYOKU_LAYERMAPPING_NUM)
  #define MIRYOKU_LAYERMAPPING_NUM MIRYOKU_MAPPING
#endif

#if !defined(MIRYOKU_LAYERMAPPING_SYM)
  #define MIRYOKU_LAYERMAPPING_SYM MIRYOKU_MAPPING
#endif

#if !defined(MIRYOKU_LAYERMAPPING_SYM2)
  #define MIRYOKU_LAYERMAPPING_SYM2 MIRYOKU_MAPPING
#endif

#if !defined(MIRYOKU_LAYERMAPPING_FUN)
  #define MIRYOKU_LAYERMAPPING_FUN MIRYOKU_MAPPING
#endif
