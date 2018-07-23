// Author: Rohit Goswami 
// Email: lynus.mascot@gmail.com
#include <stdio.h>
#include <math.h>

void update(int *a,int *b) {
    int d=*a; // to avoid lost of original value of a
    *(a)=(*a)+(*b);
    *(b)=abs((*b)-(d));   
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
