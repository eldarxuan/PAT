#PAT

## 1046

思路:

三个坑点:

一个技巧：

```cpp
#include<iostream>
using namespace std;
int main()
{
    int N;
    cin >> N;
    int a,jia,b,yi;
    int n1 = 0, n2 = 0;
    for(int i = 0; i < N; i++){
        //cout << i << endl;
        cin >> a >> jia >> b >> yi;
        if(jia == a + b && yi != a + b){
            n1 = n1 + 1;
        }
        else if(yi == a + b && jia != a + b){
            n2 = n2 + 1;
        }
    }
    cout << n2 << " " << n1;
    return 0;
}
```


//注意 等于号 是==
//注意 命名技巧
//注意 甲乙使用别颠倒

## 1026 ..

思路:

坑点:



```cpp
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
```
