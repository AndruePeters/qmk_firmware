/// This is to setup the kvm key handler
/// The idea is that upon press of the kvm button, 
/// this should send Ctrl -> Ctrl -> 1 or Ctrl -> Ctrl -> 2
#pragma once

#include QMK_KEYBOARD_H

/// this is specifically for a startech kvm with two modes -- 1 or 2
enum kvm_state {
  kvm_1,
  kvm_2
};

typedef enum kvm_state kvm_state;

/// This function will be called by process_record_user() when the kvm key is pressed
void kvm_key_handler(uint16_t keycode, keyrecord_t* record);
