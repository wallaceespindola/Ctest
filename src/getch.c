#include <stdio.h>
#include <conio.h>

void main()
{
	 char c;
	 printf("Pressione uma tecla : ");
	 c = getche();
	 printf("\nLeitura feita com getche()");
	 printf("\nPressione novamente uma tecla: ");
	 c = getch();
	 printf("\nLeitura feita com getch()");
	 getch();
}
