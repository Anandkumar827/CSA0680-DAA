#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
char p[10][10],c,ch,result[10],subresult[10];
int n,i
int main()
{
	printf("enter the number of productions:");
	scanf("%d",&n);
	printf("enter the productions:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&p[i]);
	}
	do
	{
	printf("enter the character to find first():");
	scanf("%c",&c);
	first(result,c);
	printf("First[%c]= {",c);
	for(i=0;result[i]!='\0';i++)
	{
		printf("%c ",result[i]);
	}
	printf("}\n");
	printf("press y to continue:");
	scanf("%c",&ch);
    }while(ch=='y'||ch=='Y')
return 0;
}
void first(char [],char c)
{
	int i,j,k,foundepsilon;
	char subresult[10];
	if(!(isupper(c)))
	{
		addresultset(result,c);
		return ;
	}
	for(i=0;i<n;i++)
	{
		if(p[i][0]== c)
		{
			if(p[i][2]=='$')
			{
				addresultset(result,'$');
			}
			else
			{
				j=2;
				
			}
		}
	}
}
