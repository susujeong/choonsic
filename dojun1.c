// 2
// void Gugu(int i, int j)
// {
//     int num1, num2;
//     int temp;
    
//     printf("정수 두개를 입력해주세요: ");
//     scanf("%d %d", &num1, &num2);
//     if(num1>num2)
//     {
//         temp = num1;
//         num1 = num2;
//         num2 = temp;
//     }
//     for(int i=num1; i<num2+1; i++)
//     {
//         for(int j=1; j<10; j++)
//         {
//             printf("%dx%d=%d \n", i, j, i*j);
//         }
//     }
// }

// int main(void)
// {
//     int i, j;
//     Gugu(i,j);
// }

//3
// int main(void)
// {
//     int num1, num2;
//     int max = 1;
//     printf("두개의 정수 입력: ");
//     scanf("%d %d", &num1, &num2);
//     for(int i=1; i<num2; i++)
//     {
//         if(num1%i==0&&num2%i==0)
//         {
//             if(max<i)
//             {
//                 max = i;
//             }
//         }
//     }
//     printf("%d \n", max);
// }


//5
// int main(void)
// {
//     int count = 0;
//     for(int i=1; i<30; i++)
//     {
//         for(int j=1;j<i+1;j++)
//         {
//             if(i%j==0)
//             {
//                 count++;
//             }
//         }
//         if(count == 2)
//         {
//             printf("%d \n", i);
//         }
//         count = 0;
//     }
// }

//2
//달팽이 배열
#include <stdio.h>
int main(void)
{
  int len;
  int arr[50][50];
  printf("정수를 입력하세요: ");
  scanf("%d", &len);
//초기화하기
    for(int i=0; i<len; i++)
    {
        for(int j=0; j<len; j++)
        {
            arr[i][j]=0;
        }
    }

  int i=0, j=0;
  arr[i][j] = 1;
  int num = 2;
  while(num<=len*len)
    {
      //왼쪽에서 오른쪽으로 움직일때
      while(j+1<len && arr[i][j+1]==0)
        {
          arr[i][j+1]=num;
          j++;
          num++;
        }
      //위에서 아래로 움직일때
      while(i+1<len && arr[i+1][j]==0)
        {
          arr[i+1][j]=num;
          i++;
          num++;
        }
      //오른쪽에서 왼쪽으로 움직일때
      while(j-1>=0 && arr[i][j-1]==0)
        {
          arr[i][j-1] = num;
          j--;
          num++;
        }
      //아래에서 위로 움직일때
      while(i-1>=0 && arr[i-1][j]==0)
        {
          arr[i-1][j] = num;
          i--;
          num++;
        }
    }

  for(int i=0; i<len; i++)
    {
      for(int j=0; j<len; j++)
        {
          printf("%5d", arr[i][j]);
        }
      printf("\n");
    }
    return 0;
}