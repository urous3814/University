#include <stdio.h>
int main(void)
{
	double wData, hData, area, perimeter;
	printf("Width �����͸� �Է��ϼ���: ");
	scanf("%lf", &wData);
	printf("Height �����͸� �Է��ϼ���: ");
	scanf("%lf", &hData);

	area = wData * hData;
	perimeter = 2 * (wData + hData);
	printf("�簢���� ����: %lf\n�簢���� �ѷ�: %lf\n", area, perimeter);
	return 0;
}