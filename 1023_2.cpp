#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>vi;
    int a,zero;
    int a1 = 0;
    for(int i = 0; i < 10; i++){
        cin >> a;
        //cout << a << endl;
        if (a != 0){
            //cout << a << endl;
            for(int j = a1; j < i+a; j++){
                vi[j] = a1;
            }
            a1 = vi.size();
            //cout << a << endl;
            if(i == 0){
                zero = a;
            }
        }
    }
    /*if(zero != 0){
        str.insert ( str.begin(), str.begin()+zero, str.begin()+zero+1 );
    }*/
    for(int i =0; i < vi.size(); i++){
        cout << vi[i];
    }
    return 0;
}