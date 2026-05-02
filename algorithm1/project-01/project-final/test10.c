#include<stdio.h>
#include<math.h>
#include<stdlib.h>

void calculator() {
//    formual  1+11+111+……..+n times
    int n ; 
    printf("Input n : ") ; 
    scanf("%d" , &n) ; 
    int sum = 0 ; 
    for (int i =0 ; i<=n ; i++){
        int num = 0 ; 
        for (int j =1 ; j<=i ; j++){
            num = num*10 + 1 ; 
        }
        sum+= num ; 
    }
    printf("sum = %d\n" , sum) ;
}
void test2_ofdata(int n )  {
    int t = 0 ; 
    for (int i = 0 ;i<=n ; i++){
        t =  t*10 +1 ; 
    }
    printf("t = %d\n" , t) ; 
}

int main() {
    calculator() ; 
    int n ;
    printf("Input n : ") ; 
    scanf("%d" , &n) ;
    test2_ofdata(n) ; 

    
    return 0 ; 


}