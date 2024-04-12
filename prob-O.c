#include <stdio.h>

int main(){
	int N, A[120][120], x[120], y[120];
	scanf("%d", &N);
	for(int r=0; r<N; r++){
		for(int c=0; c<N; c++){
			scanf("%d", &A[r][c]);
		}
	}
	for(int i=0; i<N; i++){
		for (int j=0; j<N; j++){
			x[j] = 0;
			y[j]= 0;
		}
		for(int j=0; j<N; j++){
			x[A[i][j]-1]++;
			if(x[A[i][j]-1] > 1){
				printf("Nay\n");
				return 0;
			}
		}
		for(int j=0; j<N; j++){
			y[A[j][i]-1]++;
			if(y[A[j][i]-1] > 1){
				printf("Nay\n");
				return 0;
			}
		}
	}
	printf("Yay\n");
	
	return 0;
}
