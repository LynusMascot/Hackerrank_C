// Author : Rohit Goswami
// Email : lynus.mascot@gmail.com

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char *s;
    int c=0;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    int i;
    for(i=0;i<strlen(s);i++){
        if(s[i]==' '){
            printf("\n");
            continue;
        }
        else printf("%c",s[i]);
    }
   
    return 0;
}
