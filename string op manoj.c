
#include<stdio.h>
#include<stdlib.h>
int
slength (char str[])
{

  int len;			//int len=0;
  for (len = 0; str[len] != '\0'; len++);	//while(str[len]!='\0')
  return len;			//len++; //return len;
}


void
scompare (char str1[], char str2[])
{

  int i, flag = 0;

  if (slength (str1) != slength (str2))

    flag = 1;

  else

    for (i = 0; i < slength (str1); i++)

      if (str1[i] != str2[i])

	{

	  flag = 1;

	  break;

	}

  if (flag == 1)

    printf ("\nStrings are Not Equal\n");

  else

    printf ("\nStrings are Equal.\n");

}


void
sconcat (char str1[], char str2[], char conc[])
{

  int i, j;

  for (i = 0; i < slength (str1); i++)

    conc[i] = str1[i];

  for (j = 0; j < slength (str2); j++)

    conc[i++] = str2[j];

  conc[i] = '\0';

}



void
main ()
{

  char str1[50], str2[50], conc[100];

  int len, choice;



  while (1)

    {

      printf ("\n\n\nMAIN MENU\n");

      printf
	("\n1.Compare strings\n2.Concatenate Strings\n3.String Length\n4.Exit\n\n");

      printf ("\nEnter your choice:");

      scanf ("%d", &choice);

      fflush (stdin);

      switch (choice)

	{

	case 1:
	  printf("\nEnter the First string:");

	  gets(str1);

	  printf ("\nEnter the Second string:");

	  gets (str2);

	  scompare (str1, str2);

	  break;


	case 2:
	  printf ("\nEnter the First string:");

	  gets(str1);

	  printf ("\nEnter the Second string:");

	  gets(str2);

	  sconcat (str1, str2, conc);

	  printf ("\nConcatenated string is:%s\n\n", conc);

	  break;

	case 3:
	  printf ("\nEnter the String:");

	  gets(str1);

	  len = slength (str1);

	  printf ("\n\nThe Length of the string is: %d\n\n", len);

	  break;

	case 4:
	  printf ("\nExiting the program...!!!");

	  exit (0);

	default:
	  printf ("\nInvalid choice..!!!");

	}			// End of Switch
    }				//End of While
}				//End of Main
