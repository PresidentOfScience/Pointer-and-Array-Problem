#include <stdio.h>

int main(){
	int T, N, P, Q, A[1200];
	scanf("%d", &T);
	for(int i=0; i<T; i++){
		scanf("%d", &N);
		for(int j=0; j<N; j++){
			scanf("%d", &A[j]);
		}
		scanf("%d %d", &P, &Q);
		if(A[P-1] > A[Q-1]) printf("Case #%d : Bibi\n", i+1);
		else if(A[P-1] < A[Q-1]) printf("Case #%d : Lili\n", i+1);
		else printf("Case #%d : Draw\n", i+1);
	}
	
	return 0;
}
