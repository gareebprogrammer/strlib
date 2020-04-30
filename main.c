#include "strlib.h"
#include<stdio.h>

int main(){
    
    struct String **str_arr = (struct String **)malloc(100000000 * sizeof(struct String));
    
    for(int i=0;i<100000000;i++){
        str_arr[i] = create_string_from("HI");
    }

    // for(int i=0;i<100;i++){
        // printf("%s\n",get_string_pointer(str_arr[i]));
    // }

    for(int i=0;i<100000000;i++){
        free_string(str_arr[i]);
    }

    free(str_arr);

    return 0;
}
