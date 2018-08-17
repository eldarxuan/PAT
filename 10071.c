#include<stdio.h>
int main()
{
  int T,K,x;
  scanf("%d %d",&T,&K);
  x = T;
  for(int i = 0; i < K; i++) {
	int n1, b, t, n2;
	scanf("%d %d %d %d",&n1, &b, &t, &n2);
    if(t > x) {
		printf("Not enough tokens.  Total = %d.\n",x);
		continue;
    }
    if((b==0 && n1>n2)||(b==1 && n1<n2)){
		x=x+t;
		printf("Win %d!  Total = %d.\n", t, x);
    }
    else {
		x=x-t;
		printf("Lose %d.  Total = %d.\n", t, x);
		if(x == 0){
			printf("Game Over.\n");
			break;
		}
    }
  }
  return 0;
}
