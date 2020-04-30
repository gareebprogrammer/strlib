#ifndef STR_LIB_H
#define STR_LIB_H

#include<malloc.h>
#include<string.h>

struct String{
    char *data;
    int size;
}Str;

//Retuns NULL if allocation failed else pointer to a String 
struct String *create_string(char *str) {
    struct String *tempstr = (struct String *)malloc(sizeof(struct String));
    if(tempstr == NULL){
        return NULL;
    }
    int buflen = strlen(str);
    tempstr->data = (char *)malloc(buflen * sizeof(char));
    tempstr->size = buflen;
    strcpy(tempstr->data,str);
    return tempstr;
}

//Retuns String data pointer
char *get_string_pointer(struct String *str){
    return str->data;
}

int get_string_size(struct String *str){
    return str->size;
}




#endif
