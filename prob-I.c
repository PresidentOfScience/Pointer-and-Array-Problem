#include <stdio.h>

int main(){
	int T, N, arr[1000];
	scanf("%d", &T);
	for(int i=0; i<T; i++){
		scanf("%d", &N);
		for(int j=0; j<N; j++){
			scanf("%d", &arr[j]);
		}
		printf("Case #%d:", i+1);
		for(int j=0; j<N; j++){
			printf(" %d", arr[N-1-j]);
		}
		puts("");
	}
	
	return 0;
}
