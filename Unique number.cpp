#include <stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	int n;
	int ans = 0;
	for(int i = 0; i<t; i++){
		scanf("%d",&n);
		if(n <= 9){
			ans = n;
		}
		else if(n >= 9 && n <= 17){
			ans = ((n-9)*10)+9;
			
		}
		else if(n > 17 && n <= 24){
			ans = ((n-17)*100)+ 80 + 9;
		}
		else if(n > 24 && n <= 30){
			ans = (n-24)*1000 + 700 + 80 + 9;
		}
		else if(n > 30 && n <= 35){
			ans = (n-30)*10000 + 6000 + 700 + 80 + 9;
		}
		else if(n > 35 && n <= 39){
			ans = (n-35)*100000 + 50000 + 6000 + 700 + 80 + 9;
		}
		else if(n > 39 && n <= 42){
			ans = (n-39)*1000000 + 400000 + 50000 + 6000 + 700 + 80 + 9;
		}
		else if(n > 42 && n <= 44){
			ans = (n-42)*10000000 + 3000000 + 400000 + 50000 + 6000 + 700 + 80 + 9;
		}
		else if(n = 45){
			ans = 123456789;
		}
		else{
			ans = -1;
		}
	printf("%d\n",ans);
}

}
