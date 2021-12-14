#include <stdio.h>
char b[350];
int main() {
    int n;
    scanf("%d\n",&n);
    char * ptr[n];
    for (int i = 0; i < n; ++i) {
        scanf("%[^\n]%*c",b+11*i);
    }
    int rank;
    for (int i = 0; i < n; ++i) {
        scanf("%d",&rank);
        ptr[i]=b+rank*11;
    }
    for (int i = 0; i < n; ++i) {
        puts(ptr[i]);
    }

    return 0;
}
