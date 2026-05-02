#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void list_of_data(int n )  {
    int a[n] ; 
    int s =0  ;
    for (int i =0 ;i<n  ; i++){
      printf("list of element - %d : " , i+1) ;
      scanf("%d" , &a[i]) ; 
    }
     //  display 
     for (int i =0 ; i< n; i++){
        s += a[i] ; 
     }
     printf("sum of data : %d\n" , s) ; 


}
int main() {
    int n ; 
    printf("Input n : " ) ; 
    scanf("%d" , &n) ; 
    list_of_data(n) ;
    return 0 ; 

}