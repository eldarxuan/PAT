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


//注意 等于号 是==
//注意 命名技巧
//注意 甲乙使用别颠倒