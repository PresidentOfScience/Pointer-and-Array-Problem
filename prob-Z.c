#include <stdio.h>

int main(){
	int T, N, K;
	char hall[12000];
	scanf("%d", &T);
	for(int i=0; i<T; i++){
		scanf("%d %d", &N, &K);
		scanf("%s", hall); getchar();
		int x = 0;
		int y = 0;
		int sum = 0;
		for(int j=0; j<N; j++){
			if(hall[j] == '1'){
				x = j;
				break;
			}
		}
		for(int j=N-1; j>=0; j--){
			if(hall[j] == '1'){
				y = j;
				break;
			}
		}
		for(int j=1; j<=N; j++){
			if(hall[j] == '1'){
				sum++;
			}
		}
		if(sum <= 1){
			if(N <= K) printf("Case #%d: Alive\n", i+1);
			else printf("Case #%d: Dead\n", i+1);
		}
		else{
			if(x < K && N-K <= y) printf("Case #%d: Alive\n", i+1);
			else printf("Case #%d: Dead\n", i+1);
		}
	}
	
	return 0;
}
