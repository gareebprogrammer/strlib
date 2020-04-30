#ifndef STR_LIB_H
#define STR_LIB_H

#include<stdlib.h>
#include<string.h>

typedef struct String{
    char *data;
    int size;
}Str;

/*Retuns NULL if allocation failed else pointer to a String */ 
struct String *create_string_from(char *str) {
    struct String *tempstr = (struct String *)malloc(sizeof(struct String));
    if(tempstr == NULL){
        return NULL;
    }
    int buflen = strlen(str);
    tempstr->data = (char *)malloc(buflen+1 * sizeof(char));
    tempstr->size = buflen;
    strcpy(tempstr->data,str);
    return tempstr;
}

/*Clone a string and return a pointer to  a String struct retuns NULL on allocation fail */
struct String *string_clone(struct String *_src) { 
    struct String *tempstr = (struct String *)malloc(sizeof(struct String));
    if(tempstr == NULL){
	return NULL;
    }
    tempstr->data = (char *)malloc(_src->size+1*sizeof(char));
    tempstr->size = _src->size;
    strcpy(tempstr->data,_src->data);
    return tempstr;
}

/*Retuns 1 if both strings are equal else */
int string_equals(struct String *strone,struct String *strtwo){
    if(strone->size != strtwo->size){
	return 0;
    }
    int equals = strcmp(strone->data,strtwo->data);

    if(equals == 0){
	return 1;
    }
    return 0;
}

/* Returns pointer to a char with String struct data */
char *string_char_ptr(struct String *_src){
    char *tempstr = (char *)malloc(_src->size+1 * sizeof(char));
    strcpy(tempstr,_src->data);
    return tempstr;
}

/*Search and replace of a string
Returns 0 if not found else returns occurence number */
int string_replace(struct String *_src,char *_search_string,char *repalce_string){
    
    //char *tempstr = strstr(_src->data,_search_string);    

    return 0;
}

/*Retuns String data pointer*/
char *get_string_pointer(struct String *str){
    return str->data;
}

/* Get string size without NULL termination */
int get_string_size(struct String *str){
    return str->size;
}

/*Free String*/
void free_string(struct String *str){
    free(str->data);
    free(str);
}

#endif
