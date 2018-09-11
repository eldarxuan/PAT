#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    #ifdef LOCAL
        freopen("a.in","r",stdin);
        freopen("b.out","w",stdout);
    #endif
    int N;
    long long p;
    scanf("%d%lld", &N,&p);
    long long a[100050];
    for(int i = 0; i < N; i++){
        long long temp;
        scanf("%lld",&temp);
        a[i] = temp;
    }
    sort(a, a + N);
    long long m, M;
    int temp = 0, max = 0;
    for(int i = 0; i < N; i++){
        m = a[i];
        int j = N - 1;
        for(; j >= i + max - 1; j--){
            M = a[j];
            if(M <= m * p){
                temp = j - i + 1;
                /*cout << "M = " << M << endl;
                cout << "m = " << m << endl;
                cout << "ai = " << a[i] <<endl << "aj = " << a[j] << endl;*/
                break;
            }
        }
        if(temp >= max){
            max = temp;
        }
    }
    cout << max;
    return 0;
}