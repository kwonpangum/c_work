#include <stdio.h>

int main (void)
{
	int wgt;  
	double hgt;
	
	printf("몸무게(kg)와 키(cm) 입력 : ");
	scanf("%d %lf", &wgt, &hgt);
	
	// BMI = wgt * (hgt * 0.01)^2
	double bmi = (double)wgt * (hgt* 0.01) * (hgt*0.01);
	
	// 출력
	printf("%s\n", (20.0 <= bmi && bmi <= 25.0  ) ? "표준입니다." : "체중관리가 필요합니다."); 
	
	return 0;
}
