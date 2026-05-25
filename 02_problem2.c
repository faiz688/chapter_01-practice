#include <stdio.h>
int main(){
    int r = 6;
    int height = 10;
    printf("the area of the circle with radius %d is %f", r, 3.14 * r * r);
    printf("\nthe volume of the cylinder with radius %d and height %d is %f", r, height, 3.14 * r * r * height);
    return 0;
}