#include <stdio.h>
#define x 5
#define y 5


void print_slash()
{
	printf("\n");
}


void enter_number(int masuv[][5])
{
	printf("Enter number whot you wan't to invert.");
	print_slash();
	for (int i=0; i<5; i++)
	{
		for (int j=0; j<5; j++)
		{
			scanf("%d", &masuv[i][j]);
		}
	}
}


void invert(int masuv[][5], int masuv1[][5])
{
	int l=0;
	for (int i=0; i<5; i++)
	{
		for (int j=0, l=4; j<5; j++, l--)
		{
			masuv1[i][j]=masuv[i][l];
		}
	}
}

void print_list(int masuv[][5])
{
	printf("---Your list---");
	print_slash();
	for (int i=0; i<5; i++)
	{
		for (int j=0; j<5; j++)
		{
			printf("%d  ", masuv[i][j]);
		}
		print_slash();
	}
	print_slash();
}

int main(void)
{
	int mass[x][y], mas[x][y];
	enter_number(mass);
	print_list(mass);
	invert(mass, mas);
	print_list(mas);
	return 0;
}
