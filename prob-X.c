#include <stdio.h>

int main(){
	long long int T, N, M, A, sum, max;
	scanf("%lld", &T);
	for(int i=0; i<T; i++){
		scanf("%lld %lld", &N, &M);
		sum = 0;
		for(int j=0; j<N; j++){
			max = 0;
			for(int k=0; k<M; k++){
				scanf("%lld", &A);
				if(A > max) max = A;
			}
			sum += max;
		}
		printf("Case #%d: %lld\n", i+1, sum);
	}
	
	return 0;
}
