#include "strlib.h"

int main(){
    struct String *l = create_string("Make");
    printf("%s\n", get_string_pointer(l));
    printf("Sizeof string : %d\n", get_string_size(l));
}
