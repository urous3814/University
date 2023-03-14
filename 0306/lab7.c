#include <stdio.h>
int main(void)
{
	double wData, hData, area, perimeter;
	printf("Width 데이터를 입력하세요: ");
	scanf("%lf", &wData);
	printf("Height 데이터를 입력하세요: ");
	scanf("%lf", &hData);

	area = wData * hData;
	perimeter = 2 * (wData + hData);
	printf("사각형의 넓이: %lf\n사각형의 둘레: %lf\n", area, perimeter);
	return 0;
}