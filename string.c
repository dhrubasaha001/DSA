//
// Created by dhruba developer on 05-07-2025.
//
#include<stdio.h>
#include<string.h>
int main() {
    char str[100];
    int length,vowel,consonant;
    vowel=consonant=length=0;
    printf("Enter the string:");
    gets(str);
    length=strlen(str);
    for(int i=0;i<length;i++) {
        char ch=str[i];
        if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u') {
            vowel++;
        }else {
            consonant++;
        }
    }
    printf("\nThe number of consonents are: %d",consonant);
    printf("\nThe number of vowels are: %d",vowel);
    printf("\nThe length of the string are: %d",length);
    printf("\nThe reverse String is: ");
    for (int i=length-1;i>=0;i--) {
        printf("%c",str[i]);
    }
    printf("\n");
    int ispalindrome=1;
    for (int i=0;i<length;i++) {
        if(str[i] != str[length-i-1]) {
            ispalindrome = 0;
            break;
        }
    }
    if (ispalindrome) {
        printf("\nThe string is palindrome");
    }else {
        printf("\nThe string is not palindrome");
    }
    return 0;
}