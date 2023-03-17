#include <stdio.h>
#include <ctype.h>

int main(void)
{
	int ch;
	char garbage;

	printf("Enter a character: ");
	while ( (ch = getchar()) !=EOF )
	{
		printf("\nCharacter is: %d %c\n", ch, (char) ch);
		//fflush(stdin);
		do{
			scanf("%c", &garbage);
		}while(garbage != '\n');
		printf("Enter another character: ");
	}
	 printf(" \n\n\n\n"
	      "	                                                    *****************\n"
          "			                                    * OMER GOKDERE  *\n"
          "	                                                    *****************\n");

    return 0;
}
