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
	printf("�簢���� ����: %lf\n", area);
	printf("�簢���� �ѷ�: %lf\n", perimeter);
	return 0;
}