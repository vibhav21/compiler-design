#include<stdio.h>
#include<string.h>
int main()
{int i,flag=0;
char a[32][10]={ "auto","double","int","struct","break","else","long","switch","case","enum","register","typedef","char","extern","return","union",
"continue","for","signed","void","do","if","static","while","default","goto","sizeof","volatile","const","float","short","unsigned"};
char b[10];
printf("enter sequence");
scanf("%s",b);
for(i=0;i<32;i++)
	{ if(!strcmp(b,a[i]))
	{flag=1;
	break;}
else
{continue;}
}
if(flag==1)
{printf("it is a keyword");
}
else
printf("it is not");
return 0;
}
