#include <stdio.h>

int main(){
	int N, counter = 0, A[120][120], temp[120];
	scanf("%d", &N);
	for(int i=1; i<=N; i++){
		temp[i] = 0;
	}
	for(int i=1; i<=N; i++){
		for(int j=1; j<=N; j++){
			scanf("%d", &A[i][j]);
		}
	}
	for(int i=1; i<=N; i++){
		for(int j=1; j<=N; j++){
			if(A[i][j] != 0) temp[A[i][j]]++;
		}
	}
	for(int i=1; i<=N; i++){
		if(temp[i] >= N) counter++;
	}
	printf("%d\n", N-counter);
	
	return 0;
}
