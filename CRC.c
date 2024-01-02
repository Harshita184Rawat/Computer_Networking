// CRC or Cyclic Redundancy Check is a method of detecting accidental changes/errors in the communication channel. 
#include<stdio.h>
#include<stdlib.h>
int main(){
    int i,j,temp,remainder[10], message[10],div[10],quotient[10],l,k;// l=length of message, k=length of divisor(key)

    printf("Enter length of message: ");
    scanf("%d",&l);
    printf("Enter message: ");
    for(i=0;i<l;i++)
        scanf("%d",&message[i]);
    printf("Enter length of key: ");
    scanf("%d",&k);
    printf("Enter key(divisor): ");
    for(i=0;i<k;i++)
        scanf("%d",&div[i]);
    for(i=l;i<10;i++)
        message[i]=0;
    for(i=0;i<l;i++)
    {
        temp=i;
        if(message[i]==1){
            for(j=0;j<k;j++){
                if(message[temp]==div[j]){
                    message[temp]=0;
                    remainder[j]=0;
                }
                else{
                    message[temp]=1;
                    remainder[j]=1;
                }
                temp=temp+1;
            }
            quotient[i]=1;

        }
        else
            quotient[i]=0;
    }
    printf("Quotient is ");
    for(j=0;j<l;j++){
        printf("%d",quotient[j]);
    }
    printf("\nRemainder is ");
    for(j=0;j<k;j++)
    {
        printf("%d",remainder[j]);
    }
    return 0;
}