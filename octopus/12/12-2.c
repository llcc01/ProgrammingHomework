
#include<stdio.h>

#define        MAXLEN        110

int isPrime(int n);//判断一个整数是否是质数，是则返回1，否则返回0
int getResult(char word[]);

int main() {
    char word[MAXLEN];

    scanf("%s", word);
    printf("%d\n", getResult(word));

    return 0;
}

/* 请在这里填写答案 */
int a[26];

int getResult(char word[]) {
    for (int i = 0; word[i]; ++i) {
        a[word[i] - 'a']++;
    }
    int min = 101, max = 0;
    for (int i = 0; i < 26; ++i) {
        if (a[i]) {
            min = a[i] > min ? min : a[i];
            max = a[i] > max ? a[i] : max;
        }
    }
    return isPrime(max-min)?max-min:-1;
}