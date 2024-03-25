/* Write a program that determines whether a word is a palindrome or
not .A palindrome is a word that reads the same backwards as forwards.*/
#include<stdio.h>
int main(){

    char word[100];
    int length_count=0,palindrome=0;
    char word_rev[100];
    printf("\n===================================================\n");
    printf("|| Enter a Word To Check It Is Palindrome Or Not || ");
    printf("\n===================================================\n");
    printf("\n Enter a Word : ");
    gets(word);
    for(int i=0;word[i];i++)
    {
        ++length_count;
    }
    for(int i=0;i<length_count;i++)
    {
    if(word[i]!=word[length_count-i-1])
    {
    palindrome=1;
    break;
    }
    }
    if(palindrome)
    {
    printf("\n=====================================\n");
    printf(" It is Not a Palindrome word : False");
    printf("\n=====================================\n");
    }else
    {
    printf("\n===============================\n");
    printf(" It is a Palindrome Word :True");
    printf("\n===============================\n");
    }
    return 0;
    }
