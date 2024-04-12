#include <stdio.h>

int main(){
	long long int T, A, B;
	scanf("%lld", &T);
	for(int i=0; i<T; i++){
		scanf("%lld %lld", &A, &B);
		int fctr = 1;
		int sum = 0;
		while(A!=0 || B!=0){
			sum += ((A+B)%10)*fctr;
			A /= 10;
			B /= 10;
			fctr *= 10;
		}
		printf("Case #%d: %lld\n", i+1, sum);
	}
	
	return 0;
}
