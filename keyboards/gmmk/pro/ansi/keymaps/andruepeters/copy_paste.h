/// This enables copying and pasting data from the keyboard's internal mictrocontroller

#pragma once

// The easiest method to do this, would be to custom record a macro
void start_copy_record();
void end_copy_record();
void paste_send_buffer();