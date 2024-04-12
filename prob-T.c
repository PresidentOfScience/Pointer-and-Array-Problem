#include <stdio.h>
#include <string.h>

int main(){
	int T, diff[1200];
	char msg[1200], voc[1200];
	scanf("%d", &T);
	for(int i=0; i<T; i++){
		scanf("%s", msg);
		int length = strlen(msg);
		for(int j=0; j<length; j++){
			if(msg[j] >= 'A' && msg[j] <= 'D') voc[j] = 'A';
			if(msg[j] >= 'E' && msg[j] <= 'H') voc[j] = 'E';
			if(msg[j] >= 'I' && msg[j] <= 'N') voc[j] = 'I';
			if(msg[j] >= 'O' && msg[j] <= 'T') voc[j] = 'O';
			if(msg[j] >= 'U' && msg[j] <= 'Z') voc[j] = 'U';
		}
		printf("Case #%d:\n", i+1);
		for(int j=0; j<length; j++){
			printf("%c", voc[j]);
		}
		puts("");
		for(int j=0; j<length; j++){
			printf("%d", msg[j]-voc[j]);
		}
		puts("");
	}
	
	return 0;
}
