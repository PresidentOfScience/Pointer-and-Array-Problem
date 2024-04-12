#include <stdio.h>

int main(){
	long int N, Q, A, B, price[100001];
	scanf("%ld", &N);
	for(int i=0; i<N; i++){
		scanf("%ld", &price[i]);
	}
	scanf("%ld", &Q);
	for(int i=0; i<Q; i++){
		scanf("%ld %ld", &A, &B);
		price[A-1] = B;
		printf("Case #%d:", i+1);
		for(int j=0; j<N; j++){
			printf(" %ld", price[j]);
		}
		puts("");
	}
	
	return 0;
}
