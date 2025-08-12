#include <stdio.h>

int add(int x, int y){
    return x + y;
}

int subtraction(int x, int y){
    return x - y;
}

int main(){

    int result = subtraction(10, 5);

    printf("%d", result);

    return 0;
}