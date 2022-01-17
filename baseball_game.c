#include <stdlib.h>  //rand(), srand()
#include <stdio.h>
#include <time.h>   //time(NULL)

// 숫자 야구 게임
    /*
    * 첫 번째로 입력받은 수(firstGuess)와 첫 번째 정답 숫자(firstAnswer)가 같으면 Strike
    * 다른 경우, 첫 번째로 입력받은 수(firstGuess)가 두 번째 정답 숫자(secondAnswer) 혹은 세 번째 정답 숫자(thirdAnswer)와 같으면 Ball
    * 두 번째, 세 번째 입력받은 수도 위 규칙을 동일하게 적용
    *   strikeCount가 3보다 작을 시, strikeCount와 ballCount를 표시
    *   strikeCount가 3이면, out를 표시
    */

int main()
{
    // 1부터 3까지의 숫자를 랜덤으로 배정
    srand(time(NULL));
    int firstAnswer = 0;
    int secondAnswer = 0;
    int thirdAnswer = 0;

    firstAnswer = (rand() % 3) + 1;
    secondAnswer = (rand() % 3) + 1;
    thirdAnswer = (rand() % 3) + 1;

    // 플레이어에게 1부터 3까지 숫자를 입력받는다.
    int firstGuess = 0;
    printf("1부터 3까지, 첫 번째 숫자 입력: ");
    scanf_s("%d", &firstGuess);
    int secondGuess = 0;
    printf("1부터 3까지, 두 번째 숫자 입력: ");
    scanf_s("%d", &secondGuess);
    int thirdGuess = 0;
    printf("1부터 3까지, 세 번째 숫자 입력: ");
    scanf_s("%d", &thirdGuess);

    int strikeCount = 0;
    int ballCount = 0;

    // 첫 번째 숫자 검증
    if (firstGuess == firstAnswer)   // firstGuess와 firstAnswer이 같으면 strike 횟수를 하나 증가
    {
        strikeCount++;
    }
    else (firstGuess == secondAnswer || firstGuess == thirdAnswer);  // firstGuess와 secondAnswer 혹은 thirdAnswer가 같으면 ball 횟수를 하나 증가
    {
        ballCount++;
    }

    // 두 번째 숫자 검증
    if (secondGuess == secondAnswer)   // secondGuess와 secondAnswer이 같으면 strike 횟수를 하나 증가 
    {
        strikeCount++;
    }
    else (secondGuess == firstAnswer || secondGuess == thirdAnswer);  // secondGuess와 firstAnswer 혹은 thirdAnswer가 같으면 ball 횟수를 하나 증가
    {
        ballCount++;
    }

    // 세 번째 숫자 검증
    if (thirdGuess == thirdAnswer) // thirdGuess와 thirdAnswer이 같으면 strike 횟수를 하나 증가
    {
        strikeCount++;
    }
    else (thirdGuess == firstAnswer || thirdGuess == secondAnswer);  // thirdGuess와 firstAnswer 혹은 secondAnswer가 같으면 ball 횟수를 하나 증가
    {
        ballCount++;
    }

    // 결과 출력
    if (strikeCount < 3)
    {
        printf("\n%d Strike %d Ball\n", strikeCount, ballCount);
    }
    else
    {
        printf("\nOut!\n");
    }
}
