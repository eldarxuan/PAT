#include<iostream>
#include<string>
using namespace std;
int main()
{
    int N, cnt = -1;
    cin >> N;
    string name, birth, young_birth, old_birth, young_name, old_name;
    for(int i = 0; i < N; i ++){
        cin >> name >> birth;
        if(birth <= "2014/09/06" && birth >= "1814/09/06"){
            cnt++;
            if(cnt == 0){//？？？这边条件我之前写"(cnt)",循环的第一次应当是0，可以运行，但当时无法正常读入？
                young_name = name;
                young_birth = birth;
                old_name = name;
                old_birth = birth;
            }
            if(birth > young_birth){
                young_name = name;
                young_birth = birth;
            }else if(birth < old_birth){
                old_name = name;
                old_birth = birth;
            }
        }
    }
    if(cnt + 1 == 0){
        cout << cnt + 1;
    }else{
        cout << cnt + 1 << " " << old_name << " " << young_name;
    }
    return 0;
}