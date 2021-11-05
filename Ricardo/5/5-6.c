#include <stdio.h>

int main(void)
{
    int people, test;
    scanf("%d %d", &people, &test);
    int test_2, test_3, test_4;
    for(test_2 = 0; test_2 <= test - people; test_2++){
        for(test_3 = 0; test_3 <= (test - people) / 2 ; test_3++){
            for(test_4 = 0; test_4 <= (test - people) / 3; test_4++){
                if((test_2 + test_3 * 2 + test_4 * 3 == test - people) && (test_2 + test_3 + test_4 <= people)){
                    printf("%d %d %d\n", test_2, test_3, test_4);
                }
            }
        }
    }
    return 0;
}