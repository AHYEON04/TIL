#include<stdio.h>
# define MAX 10000

void redixSort(int * a, int n) {
	int res[MAX], maxValue = 0;
	int exp = 1;
	//가장큰 값의 자리수를 구하기 위해서 가장 큰값 찾기 
	for(int i = 0; i < n; i++) {
		if(a[i] > maxValue) maxValue = a[i];
	}
	
	while (maxValue / exp > 0) {
		
		int bucket[10] = {0};
		for(int i = 0; i < n; i++) bucket[a[i] / exp % 10]++;
		for(int i = 1; i < 10; i++) bucket[i]+= bucket[i-1];
		for(int i = n-1; i >= 0; i--){
		
			res[--bucket[a[i] / exp % 10]] = a[i];
          	//누적값을 1씩 감소시키면서 이동하기 위해서 --함 
		}
		for(int i = 0; i < n; i++) a[i] = res[i];
		exp *= 10;
	}
} 

int main () {
	int a[MAX];
	int i,n;
	scanf("%d",&n);
	for(int i = 0; i < n; i++) {
		scanf("%d",&a[i]);
	}
	redixSort(a,n);
  
	for(int i = 0; i < n ; i++) {
		printf("%d ",a[i]);
	}
}

