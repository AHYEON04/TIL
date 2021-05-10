#include<stdio.h>

int main(){
	
	int data[10]={10,6,7,9,3,4,2,1,5,8};
	int temp, flag;
	
	for(int i = 8 ; i >= 0 ; i-- ){
		
        flag = 0;
        
		for(int j = 0; j <= i ; j++){
			
           if (data[j] > data[j+1]){
           	
               flag = 1;
               temp = data[j];
               data[j] = data[j+1];
               data[j+1] = temp;
            
			}
			
    	}
    	if ( flag == 0) break;
	}
	
	for ( int i = 0 ; i < 10 ; i++ ){
		printf("%d ", data[i]);
	}
}
