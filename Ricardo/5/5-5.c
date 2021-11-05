#include <stdio.h>

int main(void)
{
    int head, leg;
    scanf("%d %d", &head, &leg);
    int chichen, rabbit, dragonfly;
    for(chichen = 0; chichen <= head; chichen++){
        for(rabbit = 0; rabbit <= head; rabbit++){
            for(dragonfly = 0; dragonfly <= head; dragonfly++){
                if((chichen + rabbit + dragonfly == head) && (chichen * 2 + rabbit * 4 + dragonfly * 6 == leg)){
                    printf("%d %d %d\n", chichen, rabbit, dragonfly);
                }
            }
        }
    }
    return 0;
}