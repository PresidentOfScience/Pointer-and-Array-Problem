#include <stdio.h>

int main(){
	int N, x[20000];
	int counter = 1;
	scanf("%d", &N);
	for(int i=0; i<N; i++){
		scanf("%d", &x[i]);
	}
	for(int i=0; i<N; i++){
		for(int j=i+1; j<N; j++){
			if(x[i] == x[j]) break;
			else if(i == N-1 || j == N-1) counter++;
		}
	}	
	printf("%d\n", counter);
	
	return 0;
}
