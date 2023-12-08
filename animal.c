//키워봐요 동물의숲(다마고치 게임)

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void SlowPrint(unsigned long speed, const char* s)
{
    int i = 0;

    while (s[i] != '\0') // '\0'로 문자열의 끝을 확인합니다.
    {
        printf("%c", s[i++]);
        fflush(stdout);
        usleep(speed * 1000); // usleep를 사용하여 밀리초 단위로 대기
    }
}

void Print(char ment)
{
    
}

int main(void)
{
    //변수 선언//
    char key;
    char name[20];

    SlowPrint(100, "시작하려면 A키를 누르세요... \n"); //게임 처음 화면
    scanf("%c", &key);

    if(key == 'A' || key == 'a') //게임 처음 시작 if문
    {
        SlowPrint(100,"이름이 뭐야? \n");
        scanf("%s", name);
    }
    else // A안누르면 꿀밤 날림
    {
        printf("A를 누르라고옥!!!!!!");
    }
    return 0;

}