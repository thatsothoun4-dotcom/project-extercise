#include<stdio.h>
#include<string.h>
#include<stdlib.h>
// void string_reverse() {
//     char string_reverse[100]  ; 
//     printf("Input string :  ") ; 
//     scanf("%s" , &string_reverse[100]) ; 
    
// }
int main() {
    // string_reverse() ; 
    char str[20] = "hello" ; 
    int len =  strlen(str) ; 
    for (int i = len -1 ;i>=0 ;i--){
        printf("%c" , str[i]) ; 
    }
    
    return 0 ;


}