#include <stdio.h>
int main(void)
{
	double num1, num2, num3;
	double sum, avg;
	printf("3���� �Ǽ��� �Է��Ͻÿ�: ");
	scanf("%lf %lf %lf", &num1, &num2, &num3); // 3���� �Ǽ� �Է�
	sum = num1 + num2 + num3;
	avg = sum / 3.0;
	printf("�հ�=%.2lf\n", sum); // �Ҽ��� ���ϸ� 2�ڸ��� ǥ��
	printf("���=%.2lf\n", avg);
	return 0;
}