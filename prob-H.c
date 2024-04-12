#include <stdio.h>

int main(){
	long long int T, X, arr[100][100], hasil[100];
	scanf("%lld", &T);
	for(int i=0; i<T; i++){
		scanf("%lld", &X);
		for(int j=0; j<X; j++){
			for(int k=0; k<X; k++) scanf("%lld", &arr[j][k]); getchar();
		}
		for(int j=0; j<X; j++){
			hasil[j] = 0;
			for(int k=0; k<X; k++){
				hasil[j] += arr[k][j];  
			}
		}
		printf("Case #%d:", i+1);
		for(int j=0; j<X; j++) printf(" %lld", hasil[j]);
		printf("\n");
	}
	
	return 0;
}
