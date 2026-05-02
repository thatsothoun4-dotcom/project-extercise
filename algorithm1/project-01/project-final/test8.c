#include<stdio.h>
#include<math.h>
#include<stdlib.h>

void data_of_list(int n ) {
    int a[n] ; 
    for (int i = 0  ;i< n; i++){
        printf("list of element - %d : " , i) ; 
        scanf("%d" , &a[i]) ; 
    }
    // duplicate
    for (int i = 0; i < n; i++){
        for (int j = i+1 ; j < n; j++){
            if (a[i] == a[j]) {
                printf("duplicate = %d\n", a[i]);
                break;
            }
        }
    }
}
// void oddAndEven(int n )  {
//    for (int i = 0 ; i<)
// }

int main() {
    int n; 
    printf("Input n : ") ; 
    scanf("%d" , &n) ; 
    data_of_list(n) ; 
    return 0 ;


}