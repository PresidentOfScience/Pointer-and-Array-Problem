#include <stdio.h>

int main(){
	int N, A[1200], B[1200], arr[1200];
	scanf("%d", &N);
	for(int j=0; j<N; j++){
		scanf("%d", &A[j]);
	}
	for(int j=0; j<N; j++){
		scanf("%d", &B[j]);
	}
	for(int j=0; j<N; j++){
		arr[A[j]] = B[j];
	}
	for(int j=0; j<N; j++){
		printf("%d", arr[j]);
		if(j != N-1) printf(" ");
	}
	puts("");
	
	return 0;
}
