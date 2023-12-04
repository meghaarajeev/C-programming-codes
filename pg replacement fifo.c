#include<stdio.h>
void main(){
    int i=0,j=0,k=0,n=0,fn=0,p[50],f[50],avail=0,count=0;
    printf("no of pages:");
    scanf("%d",&n);
    printf("page number:");
    for(i=0;i<n;i++){
        scanf("%d",&p[i]);
    }
    printf("no of Frames:");
    scanf("%d",&fn);
    for(i=0;i<fn;i++)
    f[i]=-1;
    j=0;
    printf("Reference string\tpage frames\n");
    for(i=0;i<n;i++){
        printf("%d\t\t",p[i]);
        avail=0;
        for(k=0;k<fn;k++){
            if(f[k]==p[i]){
                avail=1;
            }
            
        }
        for(k=0;k<fn;k++){  
            if(avail==0){
                f[j]=p[i];
                j=(j+1)%fn;
                count++;
                for(k=0;k<fn;k++){
                printf("%d\t",f[k]);
                }
                printf("\n");
            }
        }
         printf("\n");
       }
        
        printf("Hits:%d\n",n-count);
        printf("Faults:%d",count);

}
