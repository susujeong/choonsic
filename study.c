// #include <stdio.h>

// int main(void)
// {
//     int ch1, ch2;

//     ch1 = getchar(); //문자 입력
//     ch2 = fgetc(stdin); // 엔터 키 입력

//     putchar(ch1); // 문자 출력
//     fputc(ch2, stdout); // 엔터 키 출력
//     return 0;
// }

// int main(void)
// {
//     int ch;

//     while(1)
//     {
//         ch=getchar();
//         if(ch==EOF)
//         {
//             break;
//         }
//         putchar(ch);
//     }
//     return 0;
// }

// int main(void)
// {
//     char str[7];
//     int i;

//     for(i=0; i<3; i++)
//     {
//         fgets(str,sizeof(str), stdin);
//         printf("Read %d: %s \n", i+1, str);
//     }
//     return 0;
// }

// int main(void)
// {
//     char perID[7];
//     char name[10];

//     fputs("주민번호 앞 6자리 입력: ", stdout);
//     fgets(perID, sizeof(perID), stdin);

//     fputs("이름 입력: ", stdout);
//     fgets(name, sizeof(name), stdin);

//     printf("주민번호: %s \n", perID);
//     printf("이름: %s \n", name);
//     return 0;
// }

// void ClearLineFromReadBuffer(void)
// {
//     while(getchar()!='\n');
// }

// int main(void)
// {
//     char perID[7];
//     char name[10];

//     fputs("주민번호 앞 6자리 입력: ", stdout);
//     fgets(perID, sizeof(perID), stdin);
//     ClearLineFromReadBuffer();

//     fputs("이름 입력: ", stdout);
//     fgets(name,sizeof(name),stdin);

//     printf("주민번호: %s\n", perID);
//     printf("이름: %s\n", name);
//     return 0;

// }

// #include <stdlib.h>
// int main(void)
// {
//     char str[20];
//     printf("정수 입력: ");
//     scanf("%s", str);
//     printf("%d \n", atoi(str));

//     printf("실수 입력: ");
//     scanf("%s", str);
//     printf("%g \n", atof(str));
//     return 0;
// }

// #include <math.h>

// struct point
// {
//     int xpos;
//     int ypos;
// };

// int main(void)
// {
//     struct point pos1, pos2;
//     double distance;
//     fputs("point pos: ", stdout);
//     scanf("%d %d", &pos1.xpos, &pos1.ypos);

//     fputs("point2 pos: ", stdout);
//     scanf("%d %d", &pos2.xpos, &pos2.ypos);

//     /*두 점간의 거리 계산 공식*/
//     distance=sqrt((double)((pos1.xpos-pos2.xpos)*(pos1.xpos-pos2.xpos)+(pos1.ypos-pos2.ypos)*(pos1.ypos-pos2.ypos)));

//     printf("두 점의 거리는 %g 입니다. \n", distance);
//     return 0;
// }

// #include <string.h>

// struct person
// {
//     char name[20];
//     char phoneNum[20];
//     int age;
// };

// int main(void)
// {
//     struct person man1, man2;
//     strcpy(man1.name, "안성준");
//     strcpy(man1.phoneNum, "010-1122-3344");
//     man1.age=23;

//     printf("이름 입력: "); scanf("%s", man2.name);
//     printf("번호 입력: "); scanf("%s", man2.phoneNum);
//     printf("나이 입력: "); scanf("%d", man2.age);

//     printf("이름: %s \n", man1.name);
//     printf("번호: %s \n", man1.phoneNum);
//     printf("나이: %d \n", man1.age);

//     printf("이름: %s \n", man2.name);
//     printf("번호: %s \n", man2.phoneNum);
//     printf("나이: %d \n", man2.age);
//     return 0;

// }

// struct point
// {
//     int xpos;
//     int ypos;
// };

// struct person
// {
//     char name[20];
//     char phoneNum[20];
//     int age;
// };

// int main(void)
// {
//     struct point pos={10,20};
//     struct person man={"이승기", "010-1212-0001", 21};
//     printf("%d %d \n", pos.xpos, pos.ypos);
//     printf("%s %s %d \n", man.name, man.phoneNum, man.age);
//     return 0;
// }

// struct person
// {
//     char name[20];
//     char phoneNum[20];
//     int age;
// };

// int main(void)
// {
//     struct person arr[3]={
//         {"이승기","010-1212-0001", 21},
//         {"정지영","010-1313-0002", 22},
//         {"한지수","010-1717-0003", 19}
//     };

//     int i;
//     for(i=0; i<3; i++)
//     {
//         printf("%s %s %d \n", arr[i].name, arr[i].phoneNum, arr[i].age);
//     }
//     return 0;
// }

// struct point
// {
//     int xpos;
//     int ypos;
// };

// int main(void)
// {
//     struct point pos1={1,2};
//     struct point pos2={100,200};
//     struct point * pptr=&pos1;

//     (*pptr).xpos += 4;
//     (*pptr).ypos += 5;
//     printf("[%d %d] \n", pptr -> xpos, pptr -> ypos);

//     pptr=&pos2;
//     pptr->xpos+=1;
//     pptr->ypos+=2;
//     printf("[%d %d] \n", (*pptr).xpos, (*pptr).ypos);
//     return 0;
// }

// struct point
// {
//     int xpos;
//     int ypos;
// };

// struct circle
// {
//     double radius;
//     struct point*center;
// };

// int main(void)
// {
//     struct point cen={2,7};
//     double rad = 5.5;

//     struct circle ring={rad,&cen};
//     printf("원의 반지름: %g \n", ring.radius);
//     printf("원의 중심 [%d %d] \n",(ring.center)->xpos, (ring.center)->ypos);
//     return 0;
// }


// #include <stdio.h>

// typedef int INT;
// typedef int * PTR_INT;

// typedef unsigned int UINT;
// typedef unsigned int * PTR_UINT;
// typedef unsigned char UCHAR;
// typedef unsigned char * PTR_UCHAR;

// int main(void)
// {
//     INT num1 = 120;
//     PTR_INT pnum1 = &num1;

//     UINT num2 = 190;
//     PTR_UINT pnum2 = &num2;

//     UCHAR ch = 'Z';
//     PTR_UCHAR pch = &ch;

//     printf("%d, %u, %c \n", *pnum1, *pnum2, *pch);
//     return 0;
// }

// #include <stdio.h>

// typedef struct point // 구조체
// {
//     int xpos;
//     int ypos;
// }Point;

// void ShowPosition(Point pos)
// {
//     printf("[%d, %d] \n", pos.xpos, pos.ypos);
// }

// Point GetCurrentPosition(void)
// {
//     Point cen;
//     printf("Input current pos: ");
//     scanf("%d %d", &cen.xpos, &cen.ypos);
//     return cen;
// }

// int main(void)
// {
//     Point curPos=GetCurrentPosition();
//     ShowPosition(curPos);
//     return 0;
// }

// #include <stdio.h>

// typedef struct point //구조체
// {
//     int xpos;
//     int ypos;
// } Point;

// Point AddPoint(Point pos1, Point pos2)
// {
//     Point pos={pos1.xpos+pos2.xpos, pos1.ypos+pos2.ypos};
//     return pos;
// }

// Point MinPoint(Point pos1, Point pos2)
// {
//     Point pos={pos1.xpos-pos2.xpos, pos1.ypos-pos2.ypos};
//     return pos;
// }

// int main(void)
// {
//     Point pos1={5,6};
//     Point pos2={2,9};
//     Point result;

//     result = AddPoint(pos1, pos2);
//     printf("[%d, %d] \n", result.xpos, result.ypos);
//     result = MinPoint(pos1, pos2);
//     printf("[%d, %d] \n", result.xpos, result.ypos);
//     return 0;
// }

// #include <stdio.h>

// typedef enum syllable
// {
//     Do=1, Re=2, Mi=3, Fa=4, So=5, La=6, Ti=7
// }Syllable;

// void Sound(Syllable sy)
// {
//     switch(sy)
//     {
//     case Do:
//         puts("도는 하얀 도라지"); return;
//     case Re:
//         puts("레는 둥근 레코드"); return;
//     case Mi:
//         puts("미는 파란 미나리"); return;
//     case Fa:
//         puts("파는 예쁜 파랑새"); return;
//     case So:
//         puts("솔은 작은 솔방울"); return;
//     case La:
//         puts("라는 라디오고요~"); return;
//     case Ti:
//         puts("시는 졸졸 시냇물"); return;
//     }
//     puts("다 함께 부르세~ 도레미파 솔라시도 솔 도~ 짠~");
// }

// int main(void)
// {
//     Syllable tone;
//     for(tone=Do;tone<=Ti; tone++)
//     {
//         Sound(tone);
//     }
//     return 0;
// }

// #include <stdio.h>

// int main(void)
// {
//     FILE*fp=fopen("data.txt", "wt");
//     if(fp==NULL){
//         puts("파일 오픈 실패!");
//         return -1;
//     }

//     fputc('A', fp);
//     fputc('B', fp);
//     fputc('C', fp);
//     fclose(fp);
//     return 0;
// }

// #include <stdio.h>

// int main(void)
// {
//     int ch, i;
//     FILE * fp=fopen("data.txt", "rt");
//     if(fp==NULL){
//         puts("파일 오픈 실패!");
//         return -1;
//     }

//     for(i=0; i<3; i++)
//     {
//         ch=fgetc(fp);
//         printf("%c \n", ch);
//     }
//     fclose(fp);
//     return 0;
// }

// #include <stdio.h>
// #include <math.h>

// struct point
// {
//     int xpos;
//     int ypos;
// };

// int main(void)
// {
//     struct point pos1, pos2; //구조체 변수 선언
//     double distance;

//     fputs("point1 pos: ", stdout);
//     scanf("%d %d", &pos1.xpos, &pos1.ypos);

//     fputs("point2 pos: ", stdout);
//     scanf("%d %d", &pos2.xpos, &pos2.ypos);

//     /*두 점간의 거리 계산 공식*/
//     distance=sqrt((double)((pos1.xpos-pos2.xpos)*(pos1.xpos-pos2.xpos)+(pos1.ypos-pos2.ypos)*(pos1.ypos-pos2.ypos)));

//     printf("두 점의 거리는 %g입니다. \n", distance);
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>

// struct person //구조체 정의
// {
//     char name[20];
//     char phoneNum[20];
//     int age;
// };

// int main(void)
// {
//     struct person man1, man2; // 구조체 선언해줌
//     strcpy(man1.name, "안성준");
//     strcpy(man1.phoneNum, "010-1122-3344");
//     man1.age=23;

//     printf("이름: ");
//     scanf("%s", man2.name);
//     printf("번호: ");
//     scanf("%s", man2.phoneNum);
//     printf("나이: ");
//     scanf("%d", &(man2.age)); //나이는 주소값으로 받네?

//     printf("이름: %s \n", man1.name);
//     printf("번호: %s \n", man1.phoneNum);
//     printf("나이: %d \n", man1.age);

//     printf("이름: %s \n", man2.name);
//     printf("번호: %s \n", man2.phoneNum);
//     printf("나이: %d \n", man2.age);
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
//     char str1[20] = "1234567890";
//     char str2[20];
//     char str3[5];

//     /*** case 1 ***/
//     strcpy(str2, str1);
//     puts(str2);
    
//     /*** case 2 ***/
//     strncpy(str3, str1, sizeof(str3));
//     puts(str3);

//     /*** case 3 ***/
//     strncpy(str3, str1, sizeof(str3)-1);
//     str3[sizeof(str3)-1] = 0;
//     puts(str3);
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>

// struct  employee
// {
//     char name[20];
//     double money;
// };

// int main(void)
// {
//     struct employee man1, man2;

//     printf("이름: ");
//     scanf("%s", man1.name);
//     printf("급여: ");
//     scanf("%lf", &(man1.money));

//     printf("==========출력결과========== \n");
//     printf("이름: %s ", man1.name);
//     printf("급여: %f", man1.money);
//     return 0;
// }

// #include <stdio.h>

// struct point
// {
//     int xpos;
//     int ypos;
// };

// int main(void)
// {
//     struct point arr[3];
//     int i;

//     for(int i=0; i<3; i++)
//     {
//         printf("점의 좌표 입력: ");
//         scanf("%d %d", &arr[i].xpos, &arr[i].ypos);
//     }

//     for(i=0;i<3;i++)
//     {
//         printf("[%d %d] ", arr[i].xpos, arr[i].ypos);
//     }

//     return 0;
// }

// #include <stdio.h>

// struct employee
// {
//     char name[20];
//     double money;
// };

// int main(void)
// {

//     struct employee arr[3]; //배열의 요소 초기화
//     for(int i=0; i<3; i++)
//     {
//         printf("이름: ");
//         scanf("%s", &arr[i].name);
//         printf("급여: ");
//         scanf("%lf", &(arr[i].money));
//     }


//     for(int i=0; i<3; i++)
//     {
//         printf("이름: %s, 급여: %f \n", arr[i].name, arr[i].money);
//     }
// }

// #include <stdio.h>

// struct point
// {
//     int xpos;
//     int ypos;
// };

// int main(void)
// {
//     struct point pos1={1,2};
//     struct point pos2={100,200};
//     struct point * pptr =& pos1;

//     (*pptr).xpos += 4;
//     (*pptr).ypos += 5;
//     printf("[%d %d] \n", pptr->xpos, pptr->ypos);

//     pptr=&pos2;
//     pptr->xpos+=1;
//     pptr->ypos+=2;
//     printf("[%d %d] \n", (*pptr).xpos, (*pptr).ypos);
//     return 0;
// }

// #include <stdio.h>

// struct point
// {
//     int xpos;
//     int ypos;
// };

// struct circle
// {
//     double radius;
//     struct point * center;
// };

// int main(void)
// {
//     struct point cen={2, 7};
//     double rad=5.5;

//     struct circle ring={rad, &cen};
//     printf("원의 반지름: %g \n", ring.radius);
//     printf("원의 중심 [%d, %d] \n", (ring.center)->xpos, (ring.center)->ypos);
//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>

// char * ReadUserName(void)
// {
//     char * name = (char *)malloc(sizeof(char)*30);
//     printf("What's your name? ");
//     gets(name);
//     return name;
// }

// int main(void)
// {
//     char * name1;
//     char * name2;
//     name1=ReadUserName();
//     printf("name1: %s \n", name1);
//     name2=ReadUserName();
//     printf("name2: %s \n", name2);

//     printf("again name1: %s \n", name1);
//     printf("again name2: %s \n", name2);
//     free(name1);
//     free(name2);
//     return 0;
// }

// #include <stdio.h>

// void func2(int n)
// {
//     int num3=n+1;
// }
// void func1(int n)
// {
//     int num2=n+1;
//     func2(num2);
// }
// int main(void)
// {
//     int num1=20;
//     func1(num1);
//     return 0;
// }

// #include <stdio.h>

// char name[30];
// char * ReadUserName(void)
// {
//     printf("What's your name? ");
//     gets(name);
//     return name;
// }

// int main(void)
// {
//     char * name1;
//     char * name2;
//     name1=ReadUserName();
//     printf("name1: %s \n", name1);
//     name2=ReadUserName();
//     printf("name2: %s \n", name2);

//     printf("name1: %s \n", name1);
//     printf("name2: %s \n", name2);
//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>

// char * ReadUserName(void)
// {
//     char * name = (char *)malloc(sizeof(char)*30);
//     printf("What's your name? ");
//     gets(name);
//     return name;
// }

// int main(void)
// {
//     char * name1;
//     char * name2;
//     name1 = ReadUserName(); //함수 호출
//     printf("name1: %s \n", name1);
//     name2 = ReadUserName();
//     printf("name2: %s \n", name2);

//     printf("again name1: %s \n", name1);
//     printf("again name2: %s \n", name2);
//     free(name1);
//     free(name2);
//     return 0;
// }

/*문제 25-2*/ //25장 더 공부하자....
//1 문자열 역으로 출력하기
// #include <stdio.h>
// #include <stdlib.h>

// int main(void)
// {
//     int maxlen;
//     printf("문자열 길이 입력: ");
//     scanf("%d", &maxlen);
//     getchar();

//     char * str = (char *)malloc(sizeof(char)*(maxlen-1));
    
//     printf("문자열 입력: ");
//     fgets(str, (maxlen-1), stdin);
// }


//==============================================================================================================================================

// #include <stdio.h>
// int main()
// {
//     int a=13, b; //같이 선언되는게 되는구나
//     int* pi = &a;
//     // pi = &a;
//     b = *pi;
//     printf("a = %d, b = %d \n", a, b);
// }

// #include <stdio.h>

// typedef int INT;
// typedef int * PTR_INT;

// typedef unsigned int UINT;
// typedef unsigned int * PTR_UINT;

// typedef unsigned char UCHAR;
// typedef unsigned char * PTR_UCHAR;

// int main(void)
// {
//     INT num1 = 120;
//     PTR_INT pnum1 = &num1;

//     UINT num2 = 190;
//     PTR_UINT pnum2 = &num2;

//     UCHAR ch = 'Z';
//     PTR_UCHAR pch = &ch;

//     printf("%d %u %c \n", *pnum1, *pnum2, *pch);
//     return 0;
// }

// #include <stdio.h>

// struct point
// {
//     int xpos;
//     int ypos;
// };

// typedef struct point Point;

// typedef struct person
// {
//     char name[20];
//     char phoneNum[20];
//     int age;
// } Person;

// int main(void)
// {
//     Point pos={10, 20};
//     Person man={"이승기", "010-1212-0001", 21};
//     printf("%d %d \n", pos.xpos, pos.ypos);
//     printf("%s %s %d \n", man.name, man.phoneNum, man.age);
//     return 0;
// }

// #include <stdio.h>

// typedef struct point
// {
//     int xpos;
//     int ypos;
// }Point;

// void ShowPosition(Point pos)
// {
//     printf("[%d, %d] \n", pos.xpos, pos.ypos);
// }

// Point GetCurrentPosition(void)
// {
//     Point cen;
//     printf("Input current pos: ");
//     scanf("%d %d", &cen.xpos, &cen.ypos);
//     return cen;
// }

// int main(void)
// {
//     Point curPos = GetCurrentPosition();
//     ShowPosition(curPos);
//     return 0;
// }

