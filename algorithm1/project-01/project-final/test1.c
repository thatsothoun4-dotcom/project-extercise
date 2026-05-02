#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

void function1(int n ) {
    // a. 1+2+3+……..+n
   int sum = 0;
   for (int i= 1 ;i<= n; i++){
      sum+=  i ; 
   }
   printf("sum = %d\n" , sum) ; 
}
void function2(int n) {
    // b. 1!+2!+3!+……..+n!
    int sum = 0 ; 
    for (int i =1 ; i<=n ; i++){
        int f =1 ; 
        for (int j = 1 ;j<=i;j++){
            f = f* j ; 
        }
        sum+= f ; 
    }
    printf("sum = %d\n" , sum) ; 
}



int main() {

    int n;
    printf("Input n : ") ; 
    scanf("%d" , &n) ; 
    function1(n) ; 
    function2(n) ; 
  


}