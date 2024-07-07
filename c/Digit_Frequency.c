//https://www.hackerrank.com/challenges/frequency-of-digits-1/problem?isFullScreen=true
#include<stdio.h>
#include<string.h>
int main()
{
    char s[1001];
    scanf("%s", s);
    int freq[10] = {0};

    for(int i=0; s[i] != '\0'; i++){
        if(s[i]>='0' && s[i]<='9'){
            int val = s[i]-'0';
            freq[val]++;
        }
    }
    for(int i=0; i<10; i++){
        printf("%d ",freq[i]);
    }
    return 0;
}