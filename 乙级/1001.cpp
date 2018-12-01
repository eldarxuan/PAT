#include<iostream>
using namespace std;
int main()
{
    int N, n = 0;
    cin >> N;
    while(1) {
		if(N == 1) {
	        cout << n << endl;
			break;
		}
        if(N%2 == 0) {
		    N = N/2;
	    }
        else {
		    N = (3*N+1)/2;
	    }
		n++;
	}
    return 0;
}