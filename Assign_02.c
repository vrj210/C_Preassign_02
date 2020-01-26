/*
 ============================================================================
 Name        : Assign_01.c
 Author      : Vinit Jain
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <string.h>

void Strcopy(char *Str1,char *Str2);
void Strconcat(char *Str1, char *Str2);
int Strcompare(char *Str1, char *Str2);
void Strreverse(char *Str1);

int main()
{
	setvbuf(stdout,NULL,_IONBF,0);
  	char Str1[100], Str2[100];

  	int choice;
  	printf("\n 1. String copy\n 2. String concat\n 3. String compare\n 4. String reverse\n Enter your choice:");
  	scanf("%d", &choice);
  	getchar();
  	switch(choice)
  	{
  	case 1: Strcopy(Str1, Str2);break;
  	case 2: Strconcat(Str1,Str2);break;
  	case 3: Strcompare(Str1,Str2);break;
  	case 4: Strreverse(Str1);break;
  	default: printf("Invalid choice");
  	}
  	return 0;
}
void Strcopy(char *Str1,char *Str2)
{
	int i;
	printf("\n Enter any String :  ");
	gets(Str1);

	for (i = 0; Str1[i]!='\0'; i++)
  	{
		Str2[i] = Str1[i];
	}
	  	Str2[i] = '\0';

	  	printf("\n String that we copied = %s", Str2);
}
void Strconcat(char *Str1, char *Str2)
{
	int i,j;
	printf("\n Enter the First String :  ");
	gets(Str1);

	printf("\n Enter the Second String :  ");
	gets(Str2);

	for (i = 0; Str1[i]!='\0'; i++);

	for (j = 0; Str2[j]!='\0'; j++, i++)
	{
		Str1[i] = Str2[j];
	}
	Str1[i] = '\0';

	printf("\n String after the Concatenate = %s", Str1);
}
int Strcompare(char *Str1, char *Str2)
{
	printf("\n Enter the First String :  ");
	gets(Str1);
	printf("\n Enter the Second String :  ");
	gets(Str2);
	while( ( *Str1 != '\0' && *Str2 != '\0' ) && *Str1 == *Str2 )
    {
		Str1++;
	    Str2++;
    }
	if(*Str1 == *Str2)
    {
		printf("Strings are identical");
	    return 0;
    }
	else
    {
		printf("Strings are not identical \n");
		printf("%d", *Str1-*Str2);
	    return *Str1 - *Str2;
    }
}
void Strreverse(char *Str1)
{
	char temp;
	int i,len;

	   printf("Enter the String to be reversed : ");
	   gets(Str1);

	   len=strlen(Str1)-1;

	   for(i=0;i<strlen(Str1)/2;i++)
	   {
	      temp=Str1[i];
	      Str1[i]=Str1[len];
	      Str1[len--]=temp;
	   }
	   printf("\nReverse string :%s",Str1);
	   getchar();
}
