#include<stdio.h>
int main()
{
 signed int r,temp,num,rev=0;
  scanf("%d",&num);
  temp=num;
	while(num>0)
	{
		r=num%10;
		rev=rev*10+r;
		num=num/10;	
	}
 if (rev==temp)
 	printf("%d is a Palindrome Number",temp);
 else
    printf("%d is not a Palindrome Number",temp);
	return 0;
}
