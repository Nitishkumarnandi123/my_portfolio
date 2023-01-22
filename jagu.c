#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{ 
char str[100],str1[5],str2[10],str3[5];
int i,lw,la,lb,ls,temp,check=0,j;
printf("enter the string");
gets(str);
printf("enter the three article in astring");
gets(str1);
gets(str2);
gets(str3);
ls=strlen(str);
lw=strlen(str1);
la=strlen(str2);
lb=strlen(str3);
for(i=0;i<ls;i++)
{
	temp=i;
	for(j=0;j<lw;j++)
	{
		if(str[i]==str[j])
		i++;
	}
	
	check=i-temp;
	if(check==lw)
	{
		i=temp;
		for(j=i;j<(ls-lw);j++)
		str[j]=str[j+lw];
		ls=ls-lw;
	}
}

for(i=0;i<ls;i++)
{
	temp=i;
	for(j=0;j<la;j++)
	{
		if(str[i]==str[j])
		i++;
	}
	
	check=i-temp;
	if(check==la)
	{
		i=temp;
		for(j=i;j<(ls-la);j++)
		str[j]=str[j+la];
		ls=ls-la;
	}
}

for(i=0;i<ls;i++)
{
	temp=i;
	for(j=0;j<lb;j++)
	{
		if(str[i]==str[j])
		i++;
	}
	
	check=i-temp;
	if(check==lb)
	{
		i=temp;
		for(j=i;j<(ls-lb);j++)
		str[j]=str[j+lb];
		ls=ls-lb;
	}
}
for(i=0;i<ls;i++)
printf("%c",str[i]);
return 0;
}




