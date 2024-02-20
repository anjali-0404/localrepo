/*
 * Implementation of predefined string functions:
 * strlen, strcmp, strcat, strrev, ispalindrome
 * Author: P.S.SuryaTeja
*/

#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>

//For finding the length of the string
int lengthstr(char *str)
{
	int count = 0;
	while(*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}

//For comparing two strings
int cmpstr(char *str1, char *str2)
{
	int lenstr1, lenstr2;
	lenstr1 = lengthstr(str1);
	lenstr2 = lengthstr(str2);
	if(lenstr1 != lenstr2)
		return 0;
	else
	{
		while(lenstr1 > 0)
		{
			if(*str1 != *str2)
				return 0;
			str1++;
			str2++;
			lenstr1--;
		}
	}
	return 1;
}

//For concatinating two strings and placing the result in a new string
char* concatstr(char *str1, char *str2)
{
	int lenstr1, lenstr2;
	char *newstr,*tempstr;
	lenstr1 = lengthstr(str1);
	lenstr2 = lengthstr(str2);
	newstr = (char *)malloc(sizeof(char)*(lenstr1+lenstr2+1));
	tempstr = newstr;
	while(*str1 != '\0')
	{
		*newstr = *str1;
		newstr++;
		str1++;
	}
	while(*str2 != '\0')
	{
		*newstr = *str2;
		newstr++;
		str2++;
	}
	*newstr = '\0';
	return tempstr;
}

//For finding whether a given string is a palindrome or not
int isPalindrome(char *str)
{
	char *tempstr;
	tempstr = str;
	while(*str != '\0')
		str++;
	str--;
	while(tempstr <= str)
	{
		if(*tempstr != *str)
			return 0;
		tempstr++;
		str--;
	}
	return 1;
}

//For reversing a string
char* revstr(char *c)
{
	char *newstr, *tempstr;
	int count = 0;
	while(*c != '\0')
	{
		c++;
		count++;
	}
	newstr = (char *)malloc(sizeof(char)*(count+1));
	tempstr = newstr;
	c--;
	while(count > 0)
	{
		*tempstr = *c;
		c--;
		tempstr++;
		count--;
	}
	*tempstr = '\0';
	return newstr;
}

int main(int argc, char **argv)
{
	char str[10], str1[10], str2[10];
	printf("Enter a string: ");
	gets(str);
	printf("\nReversed string is: %s\n\n",revstr(str));

	if(isPalindrome(str))
		printf("Given string is a palindrome\n\n");
	else
		printf("Given string is not a palindrome\n\n");

	printf("Length of given string is: %d\n\n",lengthstr(str));

	printf("Enter string 1: ");
	gets(str1);
	printf("Enter string 2: ");
	gets(str2);
	printf("\nstr2 concatenated with str1 gives: %s\n\n",concatstr(str1,str2));

	if(cmpstr(str1,str2))
		printf("Both the strings are same\n\n");
	else
		printf("Both the strings are not same\n\n");

    getch();
	return 0;
}
