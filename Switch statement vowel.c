#include <stdio.h>
void main ()
{
char n;
printf("Enter a Character\n");
scanf("%c",&n);
switch(n)
{
case 'a': printf("a is a vowel\n");
break;
case 'e': printf("e is a vowel\n");
break;
case 'i': printf("i is a vowel\n");
break;
case 'o': printf("o is a vowel\n");
break;
case 'u': printf("u is a vowel\n");
break;
default: printf("The following is a consonant");
}
}
