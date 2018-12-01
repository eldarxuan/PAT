/*





1088 三人行（20 分）
子曰：“三人行，必有我师焉。择其善者而从之，其不善者而改之。”

本题给定甲、乙、丙三个人的能力值关系为：甲的能力值确定是 2 位正整数；把甲的能力值的 2 个数字调换位置就是乙的能力值；甲乙两人能力差是丙的能力值的 X 倍；乙的能力值是丙的 Y 倍。请你指出谁比你强应“从之”，谁比你弱应“改之”。

输入格式：
输入在一行中给出三个数，依次为：M（你自己的能力值）、X 和 Y。三个数字均为不超过 1000 的正整数。

输出格式：
在一行中首先输出甲的能力值，随后依次输出甲、乙、丙三人与你的关系：如果其比你强，输出 Cong；平等则输出 Ping；比你弱则输出 Gai。其间以 1 个空格分隔，行首尾不得有多余空格。

注意：如果解不唯一，则以甲的最大解为准进行判断；如果解不存在，则输出 No Solution。

输入样例 1：
48 3 7
输出样例 1：
48 Ping Cong Gai
输入样例 2：
48 11 6
输出样例 2：
No Solution




*/






#include<iostream>
//#include<algorithm>
using namespace std;
int main()
{
    #ifdef LOCAL
        freopen("a.in","r",stdin);
        freopen("b.out","w",stdout);
    #endif
    int M, X, Y;
    cin >> M >> X >> Y;
    int jia = 0;
    int temp_yi, temp_bing, yi, bing;
    int temp_jia = 0;
    int cnt = 0;
    int cha;
    for(int i = 10; i <= 99; i++){//注意:循环内的 <临时变量> 和 <最后需要输出的变量>  以及  <循环条件i> 之间的关系   不要赋值用错变量
        temp_yi = (i % 10) * 10 + i/10;
        cha = abs(i - temp_yi);
        if(temp_yi % Y == 0 && cha % X == 0 && temp_yi / Y == cha / X){
            cnt++;
            temp_bing = temp_yi / Y;
            temp_jia = i;
        }
        if(temp_jia > jia){
            jia = temp_jia;
            yi = temp_yi;
            bing = temp_bing;
        }
    }
    if(cnt == 0){
        cout << "No Solution";
    }
    else{
        cout << jia << " ";
        if(M == jia) cout << "Ping" << " ";
        else if(M > jia) cout << "Gai" << " ";
        else cout << "Cong" << " ";
        if(M == yi) cout << "Ping" << " ";
        else if(M > yi) cout << "Gai" << " ";
        else cout << "Cong" << " ";
        if(M == bing) cout << "Ping";
        else if(M > bing) cout << "Gai";
        else cout << "Cong";
    }
    return 0;
}


//丙可以有小数！！