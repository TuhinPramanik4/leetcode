#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
    int T;
    scanf("%d",&T);
    while (T--)
    {
       int n;
       scanf("%d",&n);
       int a1[n];
       int a2[n+1];
       
       for (int i = 0; i <n; i++)
       {
        scanf("%d",&a1[i]);
       }
       for (int i = 0; i <n+1; i++)
       {
        scanf("%d",&a2[i]);
       }
       long long int sum=0;
       for ( int i = 0; i <n; i++)
       {
         sum+=abs(a1[i]-a2[i]);
       }
       int max=a1[0];
       for (int i = 1; i < n; i++)
       {
         if (a1[i]>max &&a1[i]<a2[n]);
         {
           max=a1[i];
         } 
       }
       int diff=a2[n]-max;
        long long int totalcount=sum+diff+1;
        printf("%lld\n",totalcount);
}
return 0;
}
