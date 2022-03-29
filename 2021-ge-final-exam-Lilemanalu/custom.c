// 12S20017 - Lile Asima Manalu
// 12S20024 - Sandro Sinaga

#include "custom.h"
#include "transaction.h"
#include <stdio.h>

void get_string(char *_buffer, unsigned int _size){
    get_line(stdin, _buffer, _size);
}

void get_line(FILE *_stream, char *_buffer, unsigned int _size){
    char ch = '\0';
    unsigned int i = 0;
    _buffer[i] = '\0';

    while (i < _size && (ch = fgetc(_stream)) != EOF){
        if (ch == '\r'){
            continue;
        }

        if (ch == '\n'){
            break;
        }

        _buffer[i++] = ch;
        _buffer[i] = '\0';
    }
}
