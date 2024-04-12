#include <stdio.h>

int main(){
	int T, X;
	int arr[500][500], hasil[500];
	scanf("%d", &T);
	for(int i=0; i<T; i++){
		scanf("%d", &X);
		for(int j=0; j<X; j++){
			for(int k=0; k<X; k++) scanf("%d", &arr[j][k]); getchar();
		}
		for(int j=0; j<X; j++){
			hasil[j] = 0;
			for(int k=0; k<X; k++){
				hasil[j] += arr[k][j];  
			}
		}
		printf("Case #%d:", i+1);
		for(int j=0; j<X; j++) printf(" %d", hasil[j]);
		printf("\n");
	
	}
	
	return 0;
}
