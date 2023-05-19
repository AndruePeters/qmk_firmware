#include "copy_paste.h"

/// this buffer size might be too large
#define COPY_PASTE_BUFFER_SIZE 1000

typedef struct {
    int readInSize;
    char buffer [COPY_PASTE_BUFFER_SIZE];
} CopyPasteState;

static CopyPasteState copyPasteState;

void start_copy_record()
{

}

void end_copy_record()
{

}

void paste_send_buffer()
{

}