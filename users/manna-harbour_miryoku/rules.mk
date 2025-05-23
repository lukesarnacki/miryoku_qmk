# Copyright 2019 Manna Harbour
# https://github.com/manna-harbour/miryoku

SRC += features/achordion.c
EXTRAFLAGS += -flto

COMBO_ENABLE = yes
MOUSEKEY_ENABLE = no
EXTRAKEY_ENABLE = yes
AUTO_SHIFT_ENABLE = no
TAP_DANCE_ENABLE = yes
CAPS_WORD_ENABLE = yes
KEY_OVERRIDE_ENABLE = yes
RGBLIGHT_ENABLE = yes

INTROSPECTION_KEYMAP_C = manna-harbour_miryoku.c # keymaps

include users/manna-harbour_miryoku/custom_rules.mk

include users/manna-harbour_miryoku/post_rules.mk
