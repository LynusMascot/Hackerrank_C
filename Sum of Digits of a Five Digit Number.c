// Author : Rohit Goswami
// email: lynus.mascot@gmail.com

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;
    int sum=0;
    int r;
    scanf("%d", &n);
    while(n!=0){
    r=n%10;
    sum=sum+r;
    n=n/10;}
    printf("%d",sum);
    
    return 0;
}
