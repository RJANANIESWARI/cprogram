#include<stdio.h>
#include<string.h>
int main(void)
{
	char a[100];
	int i,j,l,c;
	printf("enter the string");
	scanf("%s",a);
	l=strlen(a);
	for(i=0;i<l;i++)
	{
		for(j=0;j<l;j++)
		{
			if(a[i]==a[j])
			{
      c++;
			}
		}
	}
	if(c>0){
		
				printf("not a isogram");
			}
			else
			{
				printf("isogram");
			}
	return 0;
}
