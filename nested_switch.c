#include <stdio.h>

int main()
{

	char inside_choice;
	char choice;
	printf("A. Air ways\n");
	printf("W. Water ways\n");
	printf("R. Road ways\n");
	printf("Enter your choice : ");
	scanf(" %c",&choice);

	switch(choice){
		case 'A':
			printf("Air ways");
			break;
		case 'W':
			printf("Water ways");
			break;
		case 'R':
			printf("t. Railways\n");
			printf("b. bus\n");
			printf("Enter another choice from above...");
			scanf(" %c",&inside_choice);
			switch(inside_choice){
				case 't':
					printf("Railways");
					break;
				case 'b':
					printf("Bus");
					break;
			}
			break;
		default :
			printf("Invalid Operation");
	}

	return 0;
}