#pragma once
#ifndef _INC_UTILS
#define _INC_UTILS

typedef struct {
    bool error;
    int value;
} Result;

Result is_numeric(const char* s);
void clear_buffer();
bool read(char* s, int lenght);

#endif