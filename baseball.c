#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int question[3];

    // 질문 : 중복되지 않는 숫자 3개 형성
    srand(time(NULL)); // 시간을 기반으로 난수 생성기 초기화

    question[0] = rand() % 9 + 1;
    question[1] = rand() % 9 + 1;
    
    while (question[0] == question[1]) {
    	question[1] = rand() % 9 + 1;
    }
    
    question[2] = rand() % 9 + 1;
    
    while (question[2] == question[0] || question[2] == question[1]) {
    	question[2] = rand() % 9 + 1;
    }
    
    printf("%d %d %d\n", question[0], question[1], question[2]);

    // 카운트
    int count = 0;
    int strike = 0;
    int ball = 0;
    
	while (strike != 3) {
		++count;
		strike = ball = 0;
		
		int answer[3];
		printf("Input number : ");
		scanf("%d %d %d", &answer[0], &answer[1], &answer[2]);
		
		for (int i = 0; i < 3; ++i) {
			for (int j = 0; j < 3; ++j) {
				if (question[i] == answer[j]) {
					if (i == j) {
						++strike;
					} else {
						++ball;
					}
				}
			} 
		}
		printf("#strike: %d, #ball: %d\n", strike, ball);
	}
	printf("Your count : %d\n", count);	
    return 0;
}
