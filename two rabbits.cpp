#include <stdio.h>

int main(void) {
  int t;
  scanf("%d",&t);
  int answer;
  int x,y,a,b;
  int distance;
  int jump;
  for(int i = 0; i<t; i++){
    scanf("%d %d %d %d",&x,&y,&a,&b);
    jump = a+b;
    if(x>y){
    distance = x-y;
    }
    else{
    distance = y-x;
    }
    if(distance % jump == 0){
      answer = distance/jump;
      printf("%d\n",answer);
    }
    else{
      answer = -1;
      printf("%d\n",answer);
    }
    

    }
   
    
}

