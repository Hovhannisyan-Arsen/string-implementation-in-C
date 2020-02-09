#include <stdio.h>
struct c_string
{
    char* data;
    unsigned int length;
};

typedef struct c_string str_t;

/* Helper functions begin*/
static str_t* create_c_string(unsigned int length);
static unsigned int char_length(char* str);
/* Helper functions begin*/

str_t* c_string_construct(char* str);

void c_string_print(str_t* str, FILE* f);
