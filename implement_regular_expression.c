#include<stdio.h>
#include<string.h>
//#include<bits/stdc++.h>
/*for regular expression a(a/b)*b */
int main()
{   int i=0,j=0,c,flag=0,flag1=0,flag2=0;
    char a[10],s='0';
    printf("enter sequence");
    scanf("%s",a);
    c=strlen(a);
        if(a[0]=='a'&& a[c-1]=='b')
            {
                flag=1;
            }
        if(flag==1)
        {
            for(i=1;i<c-1;i++)
            {   if (a[i]=='a')
                    {continue;
                    }
                else
                    {
                    flag1=1;
                    break;
                    }
            }
            if(flag1==0)
                {printf("Correct");
                    return 0;
                }
            else
                {   for(j=1;j<c-1;j++)
                    {
                        if(a[i]=='b')
                        {
                            continue;
                        }
                        else
                        {
                            flag2=1;
                            break;
                        }
                    }
                    if(flag2==0)
                        {printf("Correct");
                        return 0;
                        }
                }           
        }        

printf("wrong");
return 0;
}
