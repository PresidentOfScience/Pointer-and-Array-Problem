#include <stdio.h>

int main(){
	int T, N, A[220], temp[220];
	scanf("%d", &T);
	for(int i=0; i<T; i++){
		scanf("%d", &N);
		for(int j=0; j<N; j++){
			scanf("%d", &A[j]);
			temp[j] = A[j];
		}
		int counter = 0;
		int sum = 0;
		for(int j=0; j<N-1; j++){
			for(int k=j+1; k<N; k++){
				sum = A[j] + A[k];
				for(int l=0; l<N; l++){
					if(sum == temp[l]){
						counter++;
						temp[l] = 0;
					}
				}
			}
		}
		printf("Case #%d: %d\n", i+1, counter);
	}
	
	return 0;
}
