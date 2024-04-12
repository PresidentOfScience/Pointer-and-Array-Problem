#include <stdio.h>
#include <string.h>

int main(){
	int T, M;
	char A, B;
	char S[1200];
	scanf("%d", &T);
	for(int i=0; i<T; i++){
		scanf("%s", S); getchar();
		scanf("%d", &M); getchar();
		int length = strlen(S);
		char x, y;
		for(int j=0; j<M; j++){
			scanf("%c %c", &x, &y); getchar();
			for(int k=0; k<length; k++){
				if(S[k] == x) S[k] = y;
			}
		}
		
		printf("Case #%d: %s\n", i+1, S);
	}
	
	return 0;
}
