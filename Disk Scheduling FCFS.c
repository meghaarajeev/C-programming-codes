#include<stdio.h>
#include<stdlib.h>
void main(){
int i,n,rq[100],thm=0,ini;
printf("Enter the number of request sequence:");
scanf("%d",&n);
printf("Enter the request sequence:");
for(i=0;i<n;i++)
scanf("%d",&rq[i]);
printf("Enter the initial head position");
scanf("%d",&ini);
for(i=0;i<n;i++)
{
thm=thm+abs(rq[i]-ini);
ini=rq[i];
}
printf("Total Head Moment=%d",thm);
}
