/**
 * editor.c
 * 
 * You must implement the functions in editor.h in this file.
 * Consult the assignment handout for the detailed specifications of each of the functions.
 * 
 * Student ID: 300413248
 * Name: Anja Petersen-Hardy
 */

/** **/

#include <stdio.h>
#include "editor.h"
#include <string.h>

int editor_insert_char(char *editing_buffer, char to_insert, int pos){

    for(int i = EDITING_BUFLEN; i > pos; i--){
        editing_buffer[i] = editing_buffer[i - 1];
    }
    editing_buffer[pos] = to_insert;
    return 1;
    //printf("%s", editing_buffer);
}

int editor_delete_char(char *editing_buffer, char to_delete, int offset){
    for(int i = offset; i < EDITING_BUFLEN; i++){
        if(editing_buffer[i] == to_delete){
            for(int j = i; j < EDITING_BUFLEN; j++){
                editing_buffer[j] = editing_buffer[j+1];
            }
            return 1;
        }
     return 0;
   }
    //printf("%s", editing_buffer);
}

/**Worked with Josh Richards for q3 300402562**/

int editor_replace_str(char *editing_buffer, const char *str, const char *replacement, int offset){

    char *startPtr = strstr(editing_buffer, str);
    int index = (int)(startPtr - editing_buffer);
    startPtr == &editing_buffer[index];
    int slen = strlen(str);
    int rlen = strlen(replacement);
    
    for(int i = 0; i < slen; i++){
        editor_delete_char(editing_buffer, str[i], index);
    }
    
    for(int j = rlen-1; j >= 0; j--){
        editor_insert_char(editing_buffer, replacement[j], index);
    }
    
    printf("%s", editing_buffer);
}
    
    /** I tried to do it this way as well but it gets segmentation error :(
    
    
    char temp[EDITING_BUFLEN];
    memcpy(temp, &editing_buffer, offset);
    
    char temp2[EDITING_BUFLEN];
    memcpy(temp2, &editing_buffer[offset], EsDITING_BUFLEN);
    
    char *ptr = strstr(temp2, str);
    
    int index = (int)(ptr - temp2);
    
    int len = strlen(str);
    
    int endindex = index + len;
    
    char temp3[EDITING_BUFLEN];
    memcpy(temp3, editing_buffer[endindex+1], EDITING_BUFLEN);
    
    char temp4[EDITING_BUFLEN];
    memcpy(temp4, editing_buffer, endindex+1);
    
    strcat(temp4, replacement);
    strcat(temp4, temp3);**/
    

/**int main(){
    char test[EDITING_BUFLEN] = {"hello how are you"};
    //editor_insert_char(test, 'k', 5);
    //editor_delete_char(test, 'o', 2);
    editor_replace_str(test, "how", "", 2);
}**/
