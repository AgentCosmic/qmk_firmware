
#include QMK_KEYBOARD_H
#include <stdio.h>
#include "lily58.h"

#define L_BASE 0
#define L_1 (1 << 1)
#define L_2 (1 << 2)
#define L_3 (1 << 3)

char layer_state_str[24];

const char *read_layer_state(void) {
  switch (layer_state)
  {
  case L_BASE:
    snprintf(layer_state_str, sizeof(layer_state_str), "Layer: Engram");
    break;
  case L_1:
    snprintf(layer_state_str, sizeof(layer_state_str), "Layer: QWERTY");
    break;
  case L_2:
    snprintf(layer_state_str, sizeof(layer_state_str), "Layer: COH 2");
    break;
  case L_3:
    snprintf(layer_state_str, sizeof(layer_state_str), "Layer: Function");
    break;
  default:
    snprintf(layer_state_str, sizeof(layer_state_str), "Layer: Undef-%u", layer_state);
  }

  return layer_state_str;
}
