#include<stdio.h>
void option1(int n)  {

    for (int i =1 ;i<=n ;i++){
        if (i %2 == 0 ){
            printf("even\n") ; 
        }else {
            printf("odd\n")  ; 
        }
    }
}
void option2(int n) {

    int a[n] ; 
    for (int i =1 ; i<=n ; i++){
        printf("list of element - %d : " , i) ; 
        scanf("%d" , &a[i]) ; 
    }
    for (int i =1 ;i<=n ; i++){
        if (a[i]  %2  == 0 ){
            printf("Even -> %d\n" , a[i]) ; 
        }else {
            printf("odd -> %d\n" , a[i]) ;
        }
    }
}
int main() {
    int n; 
    printf("Input n : ") ;
    scanf("%d" , &n) ; 
    option1(n) ; 
    option2(n) ; 
return  0 ;
}