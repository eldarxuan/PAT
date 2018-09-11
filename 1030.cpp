#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    #ifdef LOCAL
        freopen("a.in","r",stdin);
        freopen("b.out","w",stdout);
    #endif
    int N,p;
    scanf("%d%d", &N,&p);
    int a[100000];
    int x;
    for(int i = 0; i < N; i++){
        scanf("%d",&x);
        a[i] = x;
    }
    sort(a, a + N);
    int m = a[0];
    int M = a[N - 1];
    int d = 0;
    int bo = 0;
    for(int i = 0; ; i++){
        if(M <= m * p){
            d = N - 1 + 1;
            bo = 2;
            break;
        }else{
            //cout << "触发elde" << endl;
            m = a[i];
            for(int j = N - 1; j > i; j--){
                M = a[j];
                //cout << "触发最后的for" << endl;
                if(M <= m * p){
                    d = j - i + 1;
                    bo = 1;
                    /*cout << "i = " << i << endl;
                    cout << "j = " << j << endl;
                    cout << "d = " << d << endl;*/
                    break;
                    //cout << "触发最后的if" << endl;
                }
            }
        }
        if(bo == 1){
            break;
        }
        if(bo == 0){
            break;
        }
    }
    cout << d;
    return 0;
}



/*此为错误版本
如果要讨论组成完美数组里最多的数的，必须要把符合完美数组条件的都遍历讨论了*/