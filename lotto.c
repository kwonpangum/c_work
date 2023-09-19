#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    // 7개의 숫자를 저장할 배열 생성
    int nums[7];

    // 현재 시간을 기반으로 시드값 설정
    srand(time(NULL));

    // 중복을 피하면서 1부터 45까지의 숫자를 무작위로 선택하여 배열에 저장
    for (int i = 0; i < 7; ++i) {
        int num = rand() % 45 + 1;
        
        // 중복된 숫자인 경우 다시 선택
        for (int j = 0; j < i; ++j) {
            if (num == nums[j]) {
                num = rand() % 45 + 1;
                j = -1; // 다시 처음부터 검사하기 위해 j를 -1로 설정
            }
        }

        nums[i] = num;
    }

    // 생성된 로또 번호 출력
    printf("로또 번호: ");
    for (int i = 0; i < 7; ++i) {
        printf("%d ", nums[i]);
    }
    printf("\n");

    return 0;
}

