#include <stdio.h>

int main(){
	long long int T, Q, L, R;
	char S[2000];
	scanf("%lld", &T);
	for(int i=0; i<T; i++){
		scanf("%lld", &Q);
		scanf("%s", S); getchar();
		int temp, a;
		for(int j=0; j<Q; j++){
			scanf("%lld %lld", &L, &R);
			a = R-L+1;
			for(int k=L-1; k<L-1+a/2; k++){
				temp = S[k];
				S[k] = S[R-1];
				S[R-1] = temp;
				R--;
			}
		}
		printf("Case #%d: %s\n", i+1, S);
	}
	
	return 0;
}
