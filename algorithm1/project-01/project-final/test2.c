#include<stdio.h>
#include<math.h>
#include<stdlib.h>

void S_Geometry(int a ) {

    // s = a*a 
    int s = pow(a, 2) ; 
    printf("S of data = %d\n" , s) ; 



}
void P_Geometry(int a)  {
    int  p = 4*a ; 
    // int res =  p  ; 
    printf("P = %d\n" , p)  ; 

}
void d_geometry(int a )  {
    float formaul = a * sqrt(2) ; 
    // int res = formaul   ;
    printf("d = %.2f\n" , formaul) ; 

}

int main() {

     int a ; 
     printf("Input a : ");
     scanf("%d" , &a) ; 
     S_Geometry(a) ; 
     P_Geometry(a) ; 
     d_geometry(a) ; 


    return 0 ; 
}