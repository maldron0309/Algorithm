#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    int a = num / 10000; 
    int b = (num % 10000) / 1000;  
    int c = (num % 1000) / 100;    
    int d = (num % 100) / 10;    
    int e = num % 10;    

    printf("[%d]\n", a * 10000);
    printf("[%d]\n", b * 1000);
    printf("[%d]\n", c * 100);
    printf("[%d]\n", d * 10);
    printf("[%d]\n", e);

    return 0;
}
