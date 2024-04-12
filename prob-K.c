#include <stdio.h>
#include <string.h>

int main(){
	int N;
	char S[1200];
	scanf("%d", &N);
	for(int i=0; i<N; i++){
		scanf("%s", S);
		int length = strlen(S);
		printf("Case #%d : ", i+1);
		for(int j=0; j<length; j++){
			printf("%c", S[length-1-j]);
		}
		puts("");
	}
	
	return 0;
}
