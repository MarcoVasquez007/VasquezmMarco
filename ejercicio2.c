#include <stdio.h>
int main(){
    char vocales[]={'a','e','i','o','u'};
   
    char *ptr, *aux;
    ptr=&vocales[0];
    aux=&vocales[4];
    *aux='x';
   
    for (int i=0;i<5;i++){
        printf("vocales[%d]%c ",i,vocales[i]);
        printf("%c\n",*(ptr++));
    }
}