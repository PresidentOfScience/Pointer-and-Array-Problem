#include <stdio.h>

int main(){
	long long int T, N, A[100001], B[100001], hasil[100001];
	scanf("%lld", &T);
	for(int i=0; i<T; i++){
		scanf("%lld", &N);
		for(int j=0; j<N; j++){
			scanf("%lld", &A[j]);
		}
		for(int j=0; j<N; j++){
			scanf("%lld", &B[j]);
		}
		for(int j=0; j<N; j++){
			hasil[j] = A[j]-B[j];
		}
		printf("Case #%d:", i+1);
		for(int j=0; j<N; j++){
			printf(" %lld", hasil[j]);
		}
		printf("\n");
	}
	
	return 0;
}
