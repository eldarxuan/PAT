#include<stdio.h>
int main(){
    int a[10];
    int x = 10;
    for(int* p = &a[9]; p >= a; p--){//直接对地址p进行判断和加减
        *p = x;
        x = x-1;
        //printf("%d ", *p);
    }
    int* y = a;
    int* z = &a[5];
    printf("%d\n", y - z);
    return 0;
    }