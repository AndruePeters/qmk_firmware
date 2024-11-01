#include "kvm_key_handler.h"
#include "custom_keycodes.h"
#include "keycode.h"

static kvm_state kvmState = kvm_1;

void toggle(kvm_state* state)
{
    if (kvmState == kvm_1) {
        kvmState = kvm_2;
    } else {
        kvmState = kvm_1;
    }
}

/// For the time, we will keep the same signature as process_record_user()
/// I'm thinking about adding more features in the future; 
/// for example, long pressing the kvm key will go to kvm_1
void kvm_key_handler(uint16_t keycode, keyrecord_t* record)
{
    toggle(&kvmState);

    uint16_t numCode = (kvmState == kvm_1) ? KC_1 : KC_2;

    tap_code(KC_LCTL);
    //wait_ms(20);
    tap_code(KC_LCTL);
    //wait_ms(20);
    tap_code(numCode);
}