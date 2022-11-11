#include <bits/stdc++.h>
using namespace std;

int string_length(char s[])
{
    int count=0;
    for(int i=0;s[i]!='\0';i++)
    {
        count++;
    }
    return count;
}
void string_reverse(char s[]);
void palindrome(char s[])
{

    int l = 0;
    int h = strlen(str) - 1;

    while (h > l)
    {
        if (str[l++] != str[h--])
        {
            printf("%s is not a palindrome\n", str);
            return;
        }
    }
    printf("%s is a palindrome\n", str);
}
int word_count(char s[])
{
    int count=0;
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]==' '&&s[i+1]==' ')
            count++;
    }
    return count;
}
void lower_to_upper(char s[])
{
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]>='a'&&s[i]<='z')
            s[i]-=32;

    }
}
void upper_to_lower(char s[])
{
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]>='A'&&s[i]<='z')
            s[i]+=32;

    }
}

void compare(char a[],char b[])
{
     int flag=0,i=0;  
    while(a[i]!='\0' &&b[i]!='\0')   
    {  
       if(a[i]!=b[i])  
       {  
           flag=1;  
           break;  
       }  
       i++;  
    }  
    if(flag==0)  
    return 0;  //equal strings
    else  
    return 1;  //unequal strings
}
void concatenation(char s1[], char s2[])
{

    int i;

    int j = strlen(s1);

    for (i = 0; s1[i] != '\0'; i++)
    {
        s[i + j] = s1[i];
    }

    s[i + j] = '\0';
}
void suffix();
void prefix();
void character_frequency();
void remove_whitespace();
void valid_identifier();
void sort();

int main()
{
    char s[100];
    printf("\nEnter your string : ");
    gets(s);
    return 0;
}