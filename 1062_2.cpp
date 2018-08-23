#include<iostream>
#include<cstring>
#include<vector>
using namespace std;
int main()
{
    int N1, N2, M1, M2, K;
    char c;
    int a[1500];
    vector<int>vi;
    memset(a,0,sizeof(a));
    cin >> N1 >> c >> M1;
    cin >> N2 >> c >> M2;
    cin >> K;
    for(int i = 1; i < (K+1); i++){
        if(K % i == 0){
            vi.push_back(i);
        }
    }
    int temp;
    for(int j = 0; j++;){
        for(int i = 0; i < vi.size() - 1; i++){
            temp = vi[i] * (j + 1);
            a[temp] = 1;
            if(temp >= 1500){
                break;
            }
        }
        if(temp >= 1500){
            break;
        }
    }
    for(int i = 0; i < 1500; i++){
        cout << a[i];
    }
    return 0;
}