#include<stdio.h>
int arr[11];
int cnt;
	
void dice(int cnt);
void prt();
	
int main(){
		scanf("%d", &cnt);
		dice(cnt);
	}
	void dice(int cnt){
		int i, j;
		if(cnt==0){
			prt();
			return;
		}
	else{
		for(i=6;i>=1;i--){
			arr[cnt]=i;
			dice(cnt-1);
		}
	}
}
	void prt(){
		int j;
		for(j=cnt;j>=1;j--)
			printf("%d ", arr[j]);
		printf("\n");
			
		
	
}
