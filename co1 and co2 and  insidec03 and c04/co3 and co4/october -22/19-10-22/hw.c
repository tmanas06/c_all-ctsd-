/* count number of upper cases and number of lower cases character in given string.If the sting contains
 more number of upper cases convert the whole string to upper case else to lower case*/
 #include<stdio.h>
 int main()
 {
 	int nl=0,nu=0,i,j;
 	char a[50];
 	printf("enter a sting:");
 	fgets(a,49,stdin);
 	printf("The given string is %s",a);
 	for(i=0;a[i]!='\0';i++)
 	{
 		if((a[i]>=65)&&(a[i]<=90))
 		nu++;
		else if((a[i]>=97)&&(a[i]<=122))
	    nl++;
	    else{
		}
	}
	if(nl>nu)
	{
		for(i=0;a[i]!='\0';i++)
		{
			if((a[i]>=65)&&(a[i]<=90))
			a[i]=a[i]+32;
		}
	}
	else{
	for(i=0;a[i]!='\0';i++)
		{
			if((a[i]>=97)&&(a[i]<=122))
			a[i]=a[i]-32;
		}
       }
 }
