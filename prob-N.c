#include <stdio.h>

int main(){
	long long int T, N, arr[200000], ptrs, max1, max2;
	scanf("%lld", &T);
	for(int i=1; i<=T; i++){
		ptrs = 2;
		scanf("%lld", &N);
		for(int j=1; j<=N; j++){
			scanf("%lld", &arr[j]);
		}
		max1 = arr[2];
		max2 = arr[1];
		for(int j=2; j<=N; j++){
			if(arr[j] > max1){
				max1 = arr[j];
				ptrs = j;
			}
		}
		for(int j=1; j<=N; j++){
			if(j != ptrs && arr[j] > max2){
				max2 = arr[j];
			}
		}
		printf("Case #%d: %lld\n", i, max1+max2);
	}
	
	return 0;
}
