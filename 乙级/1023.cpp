#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string str, zero, normal;
    char min;
    cin a;
    for(int i = 0; i < str.length(); i++){
        if (str[i] == ' ') continue;
        if(str[i] != 0){
            if(i){
                min = str[i];
            }else if(str[i] - min < 0){
                min = str[i];
            }
            sort(normal.begin(), normal.end());
        }
    }
    cout << min << zero << normal;
    return 0;
}