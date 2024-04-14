#include "stdio.h"
#include "stdlib.h"
#include "time.h"

int main(){
    srand(time(NULL)); //초단위로 갱신되는 값을 시드로 사용
    int prob1, prob2, prob3, prob4, prob5, prob6, prob7, prob8, prob9 = 0; //각 아이템별 등장 확률
    int runtime; //실행 횟수
    char hidden; //히든 등장여부를 텍스트로 저장
    printf("가챠 시뮬레이터 v0.01\n주의사항 : 확률의 합은 반드시 10000(100%%)가 되어야 합니다. 넘거나 부족하면 실행불가\n확률 입력 예시 0.25%% > 25 / 10%% 1000");
    printf("각 등급별로 등장할 확률을 지정해주세요. (기본 : 0)\n");
    printf("C : ");
    scanf("%d",&prob1);
    printf("UC : ");
    scanf("%d",&prob2);
    printf("R : ");
    scanf("%d",&prob3);
    printf("SR : ");
    scanf("%d",&prob4);
    printf("SSR : ");
    scanf("%d",&prob5);
    printf("UR : ");
    scanf("%d",&prob6);
    printf("LR : ");
    scanf("%d",&prob7);
    printf("P : ");
    scanf("%d",&prob8);
    printf("히든 등장 여부(1/0) : ");
    scanf("%d",&hidden);
    if (hidden == 1){
        printf("ANOTHER : ");
        scanf("%d",&prob9);
    }
    printf("본 시뮬레이션을 몇번 실행하시겠습니까? : ___번\b\b\b\b\b");
    scanf("%d",&runtime);
    if(prob1+prob2+prob3+prob4+prob5+prob6+prob7+prob8+prob9 == 10000)
    {
        for (int i = 0; i < runtime; i++)
        {
            int random = rand()%10000;
            if((0 <= random) && (random < prob1)) printf("%.2f%%의 확률로 C 등급이 등장했습니다.\n",(double)prob1/100);
            else if((prob1 <= random) && (random < prob1+prob2)) printf("%.2f%%의 확률로 UC 등급이 등장했습니다.\n",(double)prob2/100);
            else if((prob1+prob2 <= random) && (random < prob1+prob2+prob3)) printf("%.2f%%의 확률로 R 등급이 등장했습니다.\n",(double)prob3/100);
            else if((prob1+prob2+prob3 <= random) && (random < prob1+prob2+prob3+prob4)) printf("%.2f%%의 확률로 SR 등급이 등장했습니다.\n",(double)prob4/100);
            else if((prob1+prob2+prob3+prob4 <= random) && (random < prob1+prob2+prob3+prob4+prob5)) printf("%.2f%%의 확률로 SSR 등급이 등장했습니다.\n",(double)prob5/100);
            else if((prob1+prob2+prob3+prob4+prob5 <= random) && (random < prob1+prob2+prob3+prob4+prob5+prob6)) printf("%.2f%%의 확률로 UR 등급이 등장했습니다.\n",(double)prob6/100);
            else if((prob1+prob2+prob3+prob4+prob5+prob6 <= random) && (random < prob1+prob2+prob3+prob4+prob5+prob6+prob7)) printf("%.2f%%의 확률로 LR 등급이 등장했습니다.\n",(double)prob7/100);
            else if((prob1+prob2+prob3+prob4+prob5+prob6+prob7 <= random) && (random < prob1+prob2+prob3+prob4+prob5+prob6+prob7+prob8)) printf("%.2f%%의 확률로 P 등급이 등장했습니다.\n",(double)prob8/100);
            else if(hidden == 1 && (prob1+prob2+prob3+prob4+prob5+prob6+prob7+prob8 <= random) && (random < prob1+prob2+prob3+prob4+prob5+prob6+prob7+prob8+prob9)) printf("%.2f%%의 확률로 ANOTHER 등급이 등장했습니다.\n",(double)prob9/100);
        }
    }
    else
    {
        printf("오류 : 확률 수치가 10000을 넘어가거나 10000보다 작습니다.");
    }

}