#include<stdio.h>
typedef struct point
{ 
    int x;
    int y;
} point;
int main() {
    point p1;
    p1.x = 1;
    p1.y = 3;
    printf("x = %d\n", p1.x);
    printf("y = %d\n", p1.y);
    return 0;
}
