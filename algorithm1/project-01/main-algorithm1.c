#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

void dataforInput(int n  , int a[n])  {
     
    // element input 
      for (int i = 0; i< n; i++){
        printf("list of element - %d : " , i+1) ; 
        scanf("%d" , &a[i]) ; 
       }
       // display element 
       for (int i = 0 ;i< n ;i++){
        printf("%d\t" , a[i]) ;; 
       }
       printf("\n") ; 


}
void dataforoutput(int n , int a[n])  {

    //  output data 
    // concept reverse string small to big 
    // concept reverse string big to small 
    // note if a[j] < a[j+1] it big to small 
    // note if a[j] > a[j+1] it small to big
    for (int i = 0 ;i< n -1 ;i++){
        for (int j = 0 ;j< n-1-i ;j++){
            if ( a[j] < a[j+1]) {
                int ts = a[j]  ;  
                a[j]  = a[j+1] ; 
                a[j+1] = ts ; 

            }
        }
        printf("\n") ; 
    }
    // display data 
    printf("Display data : \n") ; 
    for (int i = 0 ;i< n; i++){
        printf("%d" , a[i]) ; 
    }
    printf("\n") ; 
}

int main() {
    
    int n; 
    printf("Input n : ") ; 
    scanf("%d" , &n)  ; 
    int a[n]  ; 
    dataforInput(n , a) ;
    dataforoutput(n , a) ;  
    return 0 ; 
 

}