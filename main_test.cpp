#include "strlib.h"
#include<stdio.h>

int main(){
    String *l = create_string_from((char *)"Is this works with string_clone");
    printf("%s\n", get_string_pointer(l));
    printf("Sizeof string : %d\n", get_string_size(l));
    String *cpy = string_clone(l);
  
    printf("%s\n", get_string_pointer(cpy));
    printf("Sizeof string : %d\n", get_string_size(cpy));
    
    String *o = create_string_from((char *)"OK");

    int eq = string_equals(l,o);
    
    if(eq){
	printf("Same Strings\n");
    }else{
	printf("Different strings\n");
    }
    
    free_string(o);
    free_string(l);
    free_string(cpy);

    return 0;
}
