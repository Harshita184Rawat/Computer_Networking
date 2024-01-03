#include<stdio.h>
#include<conio.h>
int main(){
    int n,m,count=0;
    printf("Enter no. of frames: ");
    scanf("%d",&m);
    for(int i=0;i<m;i++)
    {
        printf("Enter no. of data in frames: ",i+1);
        scanf("%d",&n);
        char frame[n];
        count+=n;
        printf("Enter data is frame %d :  ",i++);
        for(int j=0;j<n;j++){
            scanf("%d",&frame[i]);
        }
    }
    printf("no. of data in frame is %d",count);
}
