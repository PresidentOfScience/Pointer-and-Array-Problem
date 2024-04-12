#include <stdio.h>
#include <string.h>

int main(){
	int T, length;
	char S[100001];
	scanf("%d", &T);
	for(int i=0; i<T; i++){
		int counter = 1;
		scanf("%s", S); getchar();
		length = strlen(S);
		for(int j=0; j<length; j++){
			for(int k=j+1; k<length; k++){
				if(S[j] == S[k]) break;
				else if(j == length-1 || k == length-1) counter++;
			}
		}

		if(counter%2 == 0) printf("Case #%d: Yay\n", i+1);
		else printf("Case #%d: Ewwww\n", i+1);
	}
	
	return 0;
}
