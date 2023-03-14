#include <stdio.h>
int main(void)
{
	double radius; // 원의 반지름
	double area; // 면적
	printf("반지름을 입력하시오 : ");
	scanf("%lf", &radius);
	area = 3.14 * radius * radius;
	printf("원의 면적 : %lf\n", area);
	return 0;
}