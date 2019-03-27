#include<stdio.h>
#include<string.h>
//#include<conio.h>
int k=0,z=0,i=0,j=0,c=0;
char a[16],ac[20],stk[15],act[10];
void check();
int main()
{//clrscr();
printf("GRAMMER IS E->E+E \n E->E*E \n E->id\n");
printf("ENTER INPUT STRING");
scanf("%s",a);
c=strlen(a);
printf("\nSTACK\t\tINPUT\t\tACTION\n");
strcpy(act,"SHIFT->");
for(k=0,z=0;j<c;k++,j++,z++)
{
    if(a[j]=='i' && a[j+1]=='d')
    {
        stk[i]=a[j];
        stk[i+1]=a[j+1];
        stk[i+2]='\0';
        a[j]=' ';
        a[j+1]=' ';
        printf("\n$%s\t\t%s$\t\t%sid",stk,a,act);
        check();
        
    }
    else
    {stk[i]=a[j];
    stk[i+1]='\0';
    a[j]=' ';
    printf("\n$%s\t\t%s$\t\t%ssymbols",stk,a,act);
    check();    
    }
}

return 0;    
}
void check()
{strcpy(ac,"REDUCE TO E");
    for(z=0;z<c;z++)
    {
        if(stk[z]=='i' && stk[i+1]=='d')
        {
            stk[z]='E';
            stk[z+1]='\0';
            printf("\n$%s\t\t%s$\t\t%s",stk,a,ac);
            j++;
        }
    }    
    for(z=0;z<c;z++)
    {
        if(stk[z]=='E' && stk[i+1]=='+' && stk[i+2]=='E')
        {
            stk[z]='E';
            stk[z+1]='\0';
            stk[z+2]='\0';
            printf("\n$%s\t\t%s$\t\t%s",stk,a,ac);
            i=i-2;
        }
    }    
    for(z=0;z<c;z++)
    {
        if(stk[z]=='E' && stk[i+1]=='*' && stk[i+2]=='E')
        {
            stk[z]='E';
            stk[z+1]='\0';
            stk[z+2]='\0';
            printf("\n$%s\t\t%s$\t\t%s",stk,a,ac);
            i=i-2;
        }    
        
            
    }
}