// Accept a lowercase character from the user and check whether the character 
//is a vowel or consonant. (Hint: a,e,i,o,u are vowels)
#include<stdio.h>
int main(){
{
    char ch;
    printf("enter lower case character :");
    scanf(" %c",&ch);
    if(ch == 'a'|| ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
        printf("charcter is vowel",ch);
    }else printf("character is consonent",ch);
    return 0;
}

}