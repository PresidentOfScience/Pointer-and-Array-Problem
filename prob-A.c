#include <stdio.h>

int main(){
	int N, x[120], Q, A, B;
	scanf("%d", &N);
	for(int i=0; i<N; i++){
		scanf("%d", &x[i]);
	}
	scanf("%d", &Q);
	for(int i=0; i<Q; i++){
		int total = 0;
		scanf("%d %d", &A, &B);
		for(int j=0; j<B; j++){
			if(j+1>=A) total += x[j];
		}
		printf("Case #%d: %d\n", i+1, total);
	}
	
	return 0;
}
