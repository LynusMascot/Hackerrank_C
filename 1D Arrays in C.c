#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
   
    int i;
   int n;
    int sum=0;
   int *a= (int *)malloc(n* sizeof (int));
    scanf("%d",&n);
    
  for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++){
        sum=sum+a[i];
    }
 printf("%d",sum) ;  
}
