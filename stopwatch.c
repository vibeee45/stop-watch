#include <stdio.h>
#include <unistd.h>
int main() {
int a,i,h,s,m;
printf("enter time in second:");
scanf("%d",&a);
printf("stop watch for %d seconds\n",a);
for(i=a;i>=0;i--)
{  h=i/3600;
   i=i%3600;
   m=i/60;
   s=i%60;
    sleep(1);
    printf("%02d:%02d:%02d\n",h,m,s);
}
printf("stopwatch stopped!");
    return 0;
}
