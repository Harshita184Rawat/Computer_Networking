// CRC or Cyclic Redundancy Check is a method of detecting accidental changes/errors in the communication channel. 
#include<stdio.h>
#include<stdlib.h>
int main(){
    int i,j,temp,remainder[50], message[50],div[50],quotient[50],l,k, newMessage[50];// l=length of message, k=length of divisor(key)

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
    // To append k-1 0 to the message
    for(i=l;i<50;i++)
        message[i]=0;
    
    // Binary division of the message 
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

    // Show Quotient and Remainder
    printf("Quotient is ");
    for(j=0;j<l;j++){
        printf("%d",quotient[j]);
    }
    printf("\nRemainder = CRC is ");
    for(j=0;j<k;j++)
    {
        printf("%d",remainder[j]);
    }


    /*
    
    // Trasmitted message = newMessage = original message + CRC
    for(i=0;i<l;i++)
        newMessage[i]=message[i];
    for(i=l;i<50;i++)
    {
        int j=1;
        newMessage[i]=remainder[j+1];
        j++;
    }

    // Show transmitted message
    for(i=0;i<50;i++)
        printf("%d",newMessage[i]);

    
    */

    return 0;
}