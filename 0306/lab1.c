#include <stdio.h>
int main(void)
{
	int xData; // ù ��° ������ ������ ����
	int yData; // �� ��° ������ ������ ����
	int sum, diff, mul, div; // �� ���� ���� ������ ����� �����ϴ� ����
	xData = 20; // ���� x�� 2�� ����
	yData = 10; // ���� y�� 10�� ����
	sum = xData + yData; // ���� sum�� (x+y)�� ����� ����
	diff = xData - yData; // ���� diff�� (x-y)�� ����� ����
	mul = xData * yData; // ���� mul�� (x*y)�� ����� ����
	div = xData / yData; // ���� div�� (x/y)�� ����� ����

	printf("�μ��� ��: %i\n", sum); // ���� sum�� ���� ȭ�鿡 ���
	printf("�μ��� ��: %i\n", diff);// ���� diff�� ���� ȭ�鿡 ���
	printf("�μ��� ��: %i\n", mul); // ���� mul�� ���� ȭ�鿡 ���
	printf("�μ��� ��: %i\n", div); // ���� div�� ���� ȭ�鿡 ���
	return 0;
}