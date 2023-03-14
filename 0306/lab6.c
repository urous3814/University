#include <stdio.h>
int main(void)
{
	double wData;
	double hData;
	double area;
	double perimeter;
	wData = 10.0;
	hData = 5.0;
	area = wData * hData;
	perimeter = 2 * (wData + hData);
	printf("사각형의 넓이: %lf\n", area);
	printf("사각형의 둘레: %lf\n", perimeter);
	return 0;
}