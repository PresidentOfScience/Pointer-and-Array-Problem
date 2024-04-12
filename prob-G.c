#include <stdio.h>

int main(){
	long long int T, N, X[100000], Y[100000];
	scanf("%lld", &T);
	for(int i=0; i<T; i++){
		long int counter = 0;
		scanf("%lld", &N);
		for(int j=0; j<N; j++){
			scanf("%lld", &X[j]);
		}
		for(int j=0; j<N; j++){
			scanf("%lld", &Y[j]);
		}
		for(int j=0; j<N; j++){
			if(X[j] >= Y[j]) counter += 0;
			else counter++;
		}
		printf("Case #%d: %ld\n", i+1, counter);
	}
	
	return 0;
}
