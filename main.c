#include <stdio.h>
#include "c_string.h"

int main()
{

    struct c_string* string_one = c_string_construct("Arsen");
    struct c_string* string_two = c_string_construct("Hovhannisyan");
    struct c_string* concat = c_string_concat(string_one, string_two);
    c_string_print(concat, stdout);
    printf("length = %d\n", c_string_length(concat));

    return 0;
}
