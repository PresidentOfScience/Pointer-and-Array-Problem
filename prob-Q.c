#include <stdio.h>

int main(){
	int T, N, M, Q, pattern[100][100], room[100], x;
	scanf("%d", &T);
	for(int i=1; i<=T; i++){
		scanf("%d %d %d", &N, &M, &Q);
		for(int j=0; j<N; j++){
			for(int k=0; k<M; k++) scanf("%d", &pattern[j][k]);
		}
		for(int j=0; j<M; j++){
			room[j] = 0;
		}
		for(int j=0; j<Q; j++){
			scanf("%d", &x);
			for(int k=0; k<M; k++){
				room[k] -= pattern[x-1][k];
				if(room[k] < 0){
					room[k] *= -1;
				} 
			}
		}
		printf("Case #%d:\n", i);
		for(int j=0; j<M; j++){
			if(room[j] != 0) printf("YES\n");
			else printf("NO\n");
		}
	}
	
	return 0;
}
