#include <stdio.h>
#include <string.h>

int main(){
	int T;
	char S[1200];
	scanf("%d", &T);
	for(int i=0; i<T; i++){
		scanf("%s", S);
		int length = strlen(S);
		printf("Case %d: ", i+1);
		for(int j=0; j<length; j++){
			printf("%d", S[j]);
			if(j != length-1) printf("-");
		}
		puts("");
	}
	
	return 0;
}
