#include<stdio.h>
int main()
{
    int N,a;
    scanf("%d",&N);
    int A1 = 0, A2 = 0, A3 = 0, A5 = 0;
    double A4 = 0;
    int cnt1 = 0, cnt2 = 0, cnt3 = 0, cnt4 = 0, cnt5 = 0;
    for(int i = 0; i < N; i++){
        scanf("%d",&a);
        if(a % 5 == 0 && a % 2 ==0){
            cnt1 = cnt1 + 1; //    bug  5 :计数器申明了记得都在算法里运算   声明和定义的区别? cnt++ ?
            A1 = A1 + a;
        }
        if(a % 5 == 1){
            cnt2 = cnt2 + 1;
            if(cnt2 % 2 == 0){
                A2 = A2 - a;
            }
            else{
                A2 = A2 + a;
            }
        }
        if(a % 5 == 2){
            cnt3 = cnt3 + 1;
            A3 = A3 + 1;
        }
        if(a % 5 == 3){
            A4 = A4 + a;
            cnt4 = cnt4 + 1;
            //A4 = A4 / cnt4;       // bug1   : 平均值求值放循环外，可以直接表达式放在打印行里
        }//13 1 2 3 4 5 6 7 8 9 10 20 16 18
        if(a % 5 == 4){
            cnt5 = cnt5 + 1;
            if(a > A5){
                A5 = a;
            }
        }
    }//30 11 2 9.7 9    T
    //N 11 N 0 N     F
    //printf("%d",A5);
    //printf("A4 = %.1f\n",A4 / cnt4);
    //printf("%d %d %d %.1f %d",A1,A2,A3,A4 / cnt4,A5);
    //printf("%d",cnt2);
    if(cnt1 == 0){
        printf("%c ",'N'); //  bug 3 :N的外边是单引号不是双引号   why?
    }
    else if(cnt1 != 0){
        printf("%d ",A1);
    }
    if(cnt2 == 0){
        printf("%c ",'N');
    }
    else if(cnt2 != 0){
        printf("%d ",A2);
    }
    if(cnt3 == 0){
        printf("%c ",'N');
    }
    else if(cnt3 != 0){
        printf("%d ",A3);
    }
    if(cnt4 == 0){
        printf("%c ",'N');
    }
    else if(cnt4 != 0){
        printf("%.1f ",A4 / cnt4);//   bug 4: 输出的doble 是%f
    }
    if(cnt5 == 0){
        printf("%c",'N');    //bug 2-2:N的情况也要去掉空格
    }
    else if(cnt5 != 0){
        printf("%d",A5);    //bug 2:最后一行格式，没有空格
    }//*/
    return 0;
}