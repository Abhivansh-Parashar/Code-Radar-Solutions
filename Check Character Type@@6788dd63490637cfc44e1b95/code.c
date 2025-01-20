#include <stdio.h>
#include <ctype.h>

int type(char a){
    if(isalpha(a)){
        if (a == 'a' || a=='e' || a='i' || a='o' || a='u'){
            printf("Vowel");
        }
        else{
            printf("Consonant");
        }
    }
    else if(isdigit(a)){
        printf("Digit");
    }
    else{
        printf("Special Character");
    }
    return 0;
}
int main() {
    char a;
    scanf("%c", &a);
    type(a);
    return 0;
}