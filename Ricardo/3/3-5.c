#include <stdio.h>
	
int main(void)
{
	int num_sum =0;
	int three_num = 0;
	int five_num = 0;
	int seven_num = 0;
	while(1){
		int num;
		scanf("%d", &num);
		if(num == 0){
			break;
		}
		num_sum++;
		if(num % 3 == 0 && num % 5 != 0 && num % 7 != 0){
			three_num++;
		}
		if(num % 3 != 0 && num % 5 == 0 && num % 7 != 0){
			five_num++;
		}
		if(num % 3 != 0 && num % 5 != 0 && num % 7 == 0){
			seven_num++;
		}
    }
	float three_percent = (float)three_num / num_sum * 100;
	float five_percent = (float)five_num / num_sum * 100;
	float seven_percent = (float)seven_num / num_sum * 100;
	printf("%.2f%%\n", three_percent);
	printf("%.2f%%\n", five_percent);
	printf("%.2f%%\n", seven_percent);
	return 0;
}