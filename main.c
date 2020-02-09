#include <stdio.h>
#include "c_string.h"

int main()
{

    struct c_string* string = c_string_construct("Hello World");
    c_string_print(string, stdout);

    return 0;
}
