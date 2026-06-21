#include <stdio.h>
#include <string.h>


stack* s = createStack();
char str[] = "HELLO";

printf("Original: %s \n",str);

for(int i = 0; i < strlen(str); i++){
    push(s,str[i]);
}

printf("Reversed: ");

while(!isEmpty(s)){
        char c;
        pop(s,(int*)&c);
        printf("%c",c);
}

printf("\n");

destroyStack(s);

return 0;


