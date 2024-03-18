#include<stdio.h>
int main()
{
    char s[]="124259";
    int ans=0;
    for(int i=0;s[i]!='0';i++)
    {
        int ele=s[i]-'0';
        if(ele>0&&ele<=9)
        {
            ans +=ele;
        }
    }
    printf("%d\n",ans);
    return 0;
}
