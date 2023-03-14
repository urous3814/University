// 사용자로부터 입력받은 2개의 정수의 합을 계산하여 출력
#include <stdio.h>
int main(void)
{
	int xData; // 첫번째 정수를 저장할 변수
	int yData; // 두번째 정수를 저장할 변수
	int sum; // 2개의 정수의 합을 저장할 변수
	printf("첫번째 숫자를 입력하시오:");// 입력 안내 메시지 출력
	scanf("%i", &xData); // 하나의 정수를 받아서 x에 저장
	printf("두번째 숫자를 입력하시오:");// 입력 안내 메시지 출력
	scanf("%i", &yData); // 하나의 정수를 받아서 x에 저장
	sum = xData + yData; // 변수 2개를 더한다.
	printf("두수의 합: %i", sum); // sum의 값을 10진수 형태로 출력
	return 0; // 0을 외부로 반환
}