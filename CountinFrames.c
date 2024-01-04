#include<stdio.h>
//Program on Counting Number of frames
#include<conio.h>
int main(){
    int n,m,count=0;
    printf("Enter no. of frames: ");
    scanf("%d",&m);
    for(int i=0;i<m;i++)
    {
        printf("Enter no. of data in frames %d: ",i+1);
        scanf("%d",&n);
        count+=n;
        char frame[n];
        printf("Enter data in frame %d :  ",i+1);
        for(int j=0;j<n;j++){
            scanf("%s",&frame[i]);
        }
    }
    printf("no. of data in frame is %d",count);
}
