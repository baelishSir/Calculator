#include <stdio.h>
#include <stdlib.h>

int addition(int a, int b){
    return a+b;
}
int subtraction(int a, int b){
    return a-b;
}
int main(){
    printf("La soustraction de a et de b vaut %d\n", addition(1,4));
    return 0;
}
