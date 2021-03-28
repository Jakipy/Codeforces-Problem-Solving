#include <stdio.h>
int main(){
	int t;
	int x = 0;
	int num = 0;
	int one = 0;
	int two = 0;
	
	
	
	
	scanf("%d",&t); // number of test cases
	while(t--){
	
		
		scanf("%d",&x);
		
		for(int i = 0; i<x; i++){
		
			scanf("%d",&num);
			if(num == 1){
				one ++;
			}
			else{
				two++;
			}
			
		}
		
		if(two%2==0){
			if(one%2==0){
				printf("Yes\n");
			}
			else{
				printf("No\n");
			}
		}
		else{
			if(one < 2){
				printf("No\n");
				
			}
			else if(one % 2 == 0){
				printf("Yes\n");
			}
			else{
				printf("No\n");
			}
		}
	
		one = 0;
		two = 0;
	
}
}
	



