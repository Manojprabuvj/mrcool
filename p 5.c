#include<stdio.h>
#include<string.h>
int main()
{	
	int t=0,n,k,i;
	char ROM[9];
	scanf("%s",ROM);
	k=strlen(ROM);
	for(i=0;i<k;i++)
	{
	switch (ROM[i])
      {
     case 'I':  
            ROM[i] = 1;
            break;
     case 'V': 
            ROM[i] = 5;
            break;
     case 'X': 
            ROM[i] = 10;
            break;
     case 'L': 
            ROM[i] = 50;
            break;
     case 'C':  
            ROM[i] = 100;
            break;
     case 'D': 
            ROM[i] =  500;
            break;
	 }
}
for(i=0;i<k;i=i+2)
{
		if(ROM[i]<ROM[i+1])
		{
			n=ROM[i+1]-ROM[i];
		}
		else
		{
			n=ROM[i+1]+ROM[i];
		}
		t=n+t;
}
printf("%d",t);
return 0;
}
