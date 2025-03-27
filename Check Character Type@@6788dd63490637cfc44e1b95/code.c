#include <stdio.h>
#include <ctype.h>
void main(){
    char c;
    scanf("%c", &c);
    if(isdigit(c)){printf("Digit");}
    else if(isalpha(c)){
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){printf("Vowel");}
        else{printf("Consonant");}
    }
    else{printf("Special Character");}
}