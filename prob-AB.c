#include <stdio.h>

int main(){
	long long int T, N, matriks1[100][100], matriks2[100][100], matriks3[100][100], MS[100][100], assign;
	scanf("%lld", &T);
	 
	for(int i=1; i<=T; i++){
		scanf("%lld", &N);
		for(int j=0; j<N; j++){
			for(int k=0; k<N; k++) scanf("%lld", &matriks1[j][k]);
		}
		getchar();
		for(int j=0; j<N; j++){
			for(int k=0; k<N; k++) scanf("%lld", &matriks2[j][k]);
		}
		getchar();
		for(int j=0; j<N; j++){
			for(int k=0; k<N; k++) scanf("%lld", &matriks3[j][k]);
		}
		getchar();
		for(int j=0; j<N; j++){
			for(int k=0; k<N; k++){
				assign = 0;
				for(int l=0; l<N; l++) assign += matriks1[j][l]*matriks2[l][k];
				MS[j][k] = assign;
			}
		}
		printf("Case #%d:\n", i);
		for(int j=0; j<N; j++){
			for(int k=0; k<N; k++){
				assign = 0;
				for(int l=0; l<N; l++) assign += MS[j][l]*matriks3[l][k];
				printf("%lld", assign);
				(k < N-1)? printf(" ") : k;
			}
			puts("");
		}
	}
	
	return 0;
}
