#include<stdio.h>
void linear();
void binary();
void linear(){
    int a[10],i,n,flag=0,key;
    printf("Enter the limit");
    scanf("%d",&n);
    printf("Enter the elements:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the element to be searched:");
    scanf("%d",&key);
    for(i=0;i<n;i++){
        if(a[i]==key){
            printf("Element Found at %d",i+1);
            flag++;
        }
    }
        if(flag==0){
            printf("Element not Found");
        }
    }
void binary(){
    int a[10],i,j,n,mid,target=0,start,pos=0,end,temp;
    printf("Enter the limit:");
    scanf("%d",&n);
    printf("Enter elements:");
    for(i=0;i<n;i++){
        scanf("%d",a[i]);
    }
    printf("Sorting...");
    for(i=0;i<n-1;i++){
        for(j=0;j<n-(i+1);j++){
            if(a[j]>a[j=1]){
                temp = a[j];
                a[j]=a[j+1];
                a[j+1]= temp;
            }
        }
    }

    printf("Sorted list in ascending order:\n");
    for(i=0;i<n;i++){
        printf("%d\n",a[i]);
        printf("Enter the digit:");
        scanf("%d", &target);
        printf("%d",target);
        start=0;
        end= n-1;
        while(start<=end){
            mid=(start+end)/2;
            if(a[mid]==target){
                pos=mid;
                printf("Element found at %d", mid+1);
                break;
            }
            else if(a[mid]<target){
                start=mid+1;
            }
            else{
                end=mid-1;
            }

            if(pos==-1){
                printf("Element Not Found");
            }
            }
}
    

        void main(){
            int n;
            printf("Enter your choice:1.Linear Search 2.Binary Search");
            scanf("%d",&n);
            switch(n){
                case 1 :
                linear();
                break;
                case 2 : 
                binary();
                break;
                default :
                printf("Invalid Choice");
                break;
            }
        }
    
    }
