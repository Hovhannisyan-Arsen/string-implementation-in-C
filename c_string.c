#include "c_string.h"
#include <stdlib.h>
#include <string.h>

str_t* create_c_string(const uint length) {
    str_t* string = (str_t*)malloc(sizeof(str_t));
    string->data = (char*)malloc(length);
    string->length = length;
    return string;
}

static uint char_length(char* str)
{
    uint counter = 0;
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

void c_string_destruct(str_t* str)
{
    free(str->data);
    free(str);
}

void c_string_print(str_t *str, FILE* f)
{
    fprintf(f, "%s", str->data);
}

uint c_string_length(str_t* str)
{
    return str->length;
}

str_t* c_string_concat(str_t* first, str_t* second)
{
    str_t* concat_string = create_c_string(first->length + second->length);
    memcpy(concat_string->data, first->data, c_string_length(first));
    memcpy(concat_string->data + first->length, second->data, c_string_length(second));
    return concat_string;
}

str_t* c_string_clone(str_t* str)
{
    str_t* clone_string = c_string_construct(str->data);
    return clone_string;
}

uint c_string_index_of(str_t* str, char c)
{
    uint length = c_string_length(str);
    for (uint i = 0; i < length; ++i) {
        if (*(str->data + i) == c) {
            return i;
        }
    }
    return -1;
}
