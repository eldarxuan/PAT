#include<stdio.h>
#include<math.h>
int main()
{
    int C1,C2,CLK_TCK = 100;
    int mm,hh,ss;
    double delta;
    scanf("%d %d", &C1, &C2);
    delta = (double)(C2 - C1) / CLK_TCK;
    hh = delta / 3600;
    delta = delta - hh * 3600;
    mm = delta / 60;
    ss = delta - mm * 60 + 0.5;
    printf("%02d:%02d:%02d", hh, mm, ss);
    return 0;
}


//printf("%d")中间补足的标准格式和规则