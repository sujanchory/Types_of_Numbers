#include<stdio.h>
int main()
{
	int i,num,temp,fact,c,r,sum=0;
	scanf("%d",&num);
	temp=num;
    while(num>0)
	{
		r=num%10;
		num=num/10;
		fact=1;
		for(i=r;i>0;i--)
           	{  
		       fact=fact*i;
	        }
	         sum+=fact;
	}
	if(temp==sum)
     printf("%d is a Strong Number",temp);
    else
     printf("%d is not a Strong Number",temp);
}
