#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#include<string.h>

void palindrome(char s[]){
    int ispalindrome = 1;
    int length =strlen(s);
    for(int i=0;i<=(int)length/2;i++){
        if(s[i]!=s[length-i-1]){
            ispalindrome=0;
            break;
        }
    }
    if(ispalindrome){
        printf("%s is palindrome",s);
    }
    else{
        printf("%s is not a palimdrome",s);
    }
}

int main(){
    char s[100];
    printf("Enter a word: ");
    scanf("%s",s);
    palindrome(s);
    
    return 0;
}