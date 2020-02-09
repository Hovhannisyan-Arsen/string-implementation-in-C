#include "c_string.h"
#include <stdlib.h>

str_t* create_c_string(const unsigned int length) {
    str_t* string = (str_t*)malloc(sizeof(str_t));
    string->data = (char*)malloc(length);
    string->length = length;
    return string;
}
#include <assert.h>
static unsigned int char_length(char* str)
{
    unsigned int counter = 0;
    while(*(str + counter) != '\0') {
        ++counter;
    }
    return counter;
}

str_t* c_string_construct(char* str)
{
    str_t* string = create_c_string(char_length(str));
    string->data = str;
    return string;
}

void c_string_print(str_t *str, FILE* f) {
    fprintf(f, "%s", str->data);
}
