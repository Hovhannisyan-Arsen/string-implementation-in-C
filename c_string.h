#include <stdio.h>
struct c_string
{
    char* data;
    unsigned int length;
};

typedef struct c_string str_t;
typedef unsigned int uint;

/* Helper functions begin*/
static str_t* create_c_string(unsigned int length);
static uint char_length(char* str);
/* Helper functions begin*/

str_t* c_string_construct(char* str);
void c_string_destruct(str_t* str);
void c_string_print(str_t* str, FILE* f);
uint c_string_length(str_t* str);
str_t* c_string_concat(str_t* first, str_t* second);
str_t* c_string_clone(str_t* str);
uint c_string_index_of(str_t* str, char c);