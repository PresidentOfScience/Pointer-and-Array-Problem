#include <stdio.h>

int main(){
	long long int T, N, like[100];
	scanf("%lld", &T);
	for(int i=0; i<T; i++){
		scanf("%lld", &N);
		like[0] = 0;
		like[1] = 1;
		for(int j=0; j<N-2; j++){
			like[j+2] = like[j] + like[j+1];
		}
		printf("Case #%d: %lld\n", i+1, like[N-1]);
	}
	
	return 0;
}
