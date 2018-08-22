#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str, str_a, str_b;
    int N;
    cin >> str_a >> str_b;
    if(str_a.length() > str_b.length()){
        N = str_a.length();
        substring
    }else{N = str_b.length();}
    int n;
    n = abs(str_a.length()-str_b.length());
    for(int i = 0; i < n; i++){
        str_insert()
    }
    //cout << N << endl;
    //cout << str_a << " " << str_b;
    for(int i = N-1; i >= 0; i--){
        //cout << N << endl;
        if(i % 2 != 0){
            str[i] = (str_a[i] + str_b[i] - '0') % 13;
            if(str[i] == 10){str[i] = 'J';
            }else if(str[i] == 10){str[i] = 'Q';
            }else if(str[i] == 12){str[i] = 'K';
            }
            str[i] = str[i] + '0';
        }else{
            str[i] = str_b[i] - str_a[i];
            if(str[i] < 0){
                str[i] = str[i] + 10;
            }
        }
        //cout << str;
    }
    cout << str[0] << endl;
    return 0;
}