#include <stdio.h>
int main(){
	int answer;
	int t;
	
	scanf("%d",&t);
	int a,b;
	for(int i = 0; i<t; i++){
		scanf("%d %d",&a,&b);
		if(a%b==0){
			answer = 0;
		}
		else if(b > a){
			answer = b - a;
		}
		else{
			answer = b-(a%b);
		}
		printf("\n%d",answer);
		answer = 0;
	}
	
}
