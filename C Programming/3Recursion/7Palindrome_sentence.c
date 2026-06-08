#include <stdio.h>
#include<stdbool.h>
#include<string.h>
bool isPalindrome(char* s) {
    int len=strlen(s);
    
    
    if(len<=1)
        return true;
    if(s[0]!=s[len-1])
        return false;
    
    s[len-1]='\0';
    return isPalindrome(s+1);
}

int main()
{
    char s[] = "ok madam ko";
    if(isPalindrome(s))
        printf("Palindrome");
    else
        printf("Not a Palindrome");
}