#include<stdio.h>
#include<stdlib.h>

void main(){
	int a[100] = { 0 };

	for (int x = 0; x < 100; x++)
		a[x] = 50 + rand() % 1951;
	
	for (int x = 0; x < 100; x++){
		for (int y = 0; y < 100 - 1; y++){
			if (a[y] > a[y + 1]){
				int temp = a[y];
				a[y] = a[y + 1];
				a[y + 1] = temp;
			}
		}
	}

	for (int x = 1; x < 100+1; x++){
		printf("%6d", a[x-1]);
		if (x % 10== 0)
			puts("");
	}
}