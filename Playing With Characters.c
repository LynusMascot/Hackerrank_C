#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char c;
    char a[30];
    char str[20];
    scanf("%c",&c);
    scanf("%s",a); 
    scanf("\n"); // there is "\n" in buffer therfor use this to avoid stop of string input for next variable
    scanf("%[^\n]%*c", &str);
    printf("%c\n%s\n%s",c,a,str); 
    
    
    return 0;
}
