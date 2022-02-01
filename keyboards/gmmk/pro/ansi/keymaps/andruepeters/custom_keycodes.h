/// This file defines custom keycodes for qmk
#pragma once

/// This enumeration is for custom keycodes themselves
enum custom_keycodes {
  KVM_SW = SAFE_RANGE
};

/// the following define stands for quantum caps
/// It makes the caps button operate as a caps if it is tapped; otherwise it acts as a function key to layer 1
#define QT_CAP LT(1,KC_CAPS)