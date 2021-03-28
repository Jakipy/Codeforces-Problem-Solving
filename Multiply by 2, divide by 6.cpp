#include <stdio.h>
int main()
{
    
    int t,n;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        if(n == 1){
            printf("%d",0);
            
            continue;
        }
        if(n == 2){
           	printf("%d",-1);
            continue;
        }
        int c = 0;
        while(n > 1){
            if(n % 6 == 0){
                n /=6;
                c++;
            }
            else{
                n *= 2;
                c++;
            }
            if(n < 10){
                if( (n * 2) % 6 != 0){
                    break;
                }
            }
        }
        if(n == 1){
            printf("%d",c);
        }
        else{
            printf("%d",-1);
        }
    }

    return 0;
}
