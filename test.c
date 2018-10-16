#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct student
{
    char name[100];
    int phy;
    int chem;
    int mat;
};

void main()
{
    int n,i,j,m;
scanf("%d",&n);
struct student s[n],temp;

for(i=0;i<n;i++)
{
    scanf("%s",s[i].name);
    scanf("%d",&s[i].phy);
    scanf("%d",&s[i].chem);
    scanf("%d",&s[i].mat);
}

for(i=0;i<n-1;i++)
{    for(j=0;j<n-i-1;j++)
    {
        if(s[j].phy > s[j+1].phy)
        { temp = s[j];
            s[j] = s[j+1];
            s[j+1] = temp;
        }

        else if (s[j].phy == s[j+1].phy && s[j].chem>s[j+1].chem) //chem marks less
        { temp = s[j];
            s[j] = s[j+1];
            s[j+1] = temp;
        }

        else if(s[j].phy == s[j+1].phy && s[j].chem==s[j+1].chem && s[j].mat>s[j+1].mat)//mat marks less
        { temp = s[j];
            s[j] = s[j+1];
            s[j+1] = temp;
        }

        else if(s[j].phy == s[j+1].phy && s[j].chem==s[j+1].chem && s[j].mat==s[j+1].mat && strcmp(s[j+1].name,s[j].name)) //string checking
        { temp = s[j];
            s[j] = s[j+1];
            s[j+1] = temp;
        }

    }
}

for(i=0;i<n;i++)
{
    printf("%s\t%d\t%d\t%d\n",s[i].name,s[i].phy,s[i].chem,s[i].mat);
}
}
