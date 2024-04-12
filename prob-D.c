#include <stdio.h>

int main(){
	int X, Y, T, a, b, cond[120][120];
	scanf("%d %d", &X, &Y);
	for(int r=0; r<X; r++){
		for(int c=0; c<Y; c++){
			scanf("%d", &cond[r][c]);
		}
	}
	getchar();
	
	int row, col, cond2;
	scanf("%d", &T);
	for(int i=0; i<T; i++){
		scanf("%d %d %d", &row, &col, &cond2);
		cond[row-1][col-1] = cond2;
	}
	
	for(int r=0; r<X; r++){
		for(int c=0; c<Y; c++){
			printf("%d", cond[r][c]);
			if(c != Y-1) printf(" ");
		}
		puts("");
	}
	
	return 0;
}
