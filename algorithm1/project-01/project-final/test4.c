#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int calculator1(int a, int b) {

    return a+b ; 
}
int calculator2(int a, int b) {

    return a-b ; 
}int calculator3(int a, int b) {

    return a*b ; 
}int calculator4(int a, int b) {

    return a/b ; 
}


int main() {
    int a  , b ; 
    printf("Input a  ") ; 
    scanf("%d" , &a) ; 
    printf("Inptu b :")  ;
    scanf("%d" , &b)  ; 

   int sum1=   calculator1(a,b) ; 
   int sum2=   calculator2(a,b) ; 
    int sum3= calculator3(a,b) ; 
   int sum4=   calculator4(a,b) ; 
   printf("sum1 = %d\n" , sum1) ; 
   printf("sum2 = %d\n" , sum2) ; 
   printf("sum3 = %d\n" , sum3) ; 
   printf("sum4 = %d\n" , sum4) ; 



}