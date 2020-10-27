#include "lab6.h"

extern const int MAX;

int readNum()
{
	int num=142;
	printf("Please enter a number greater than 100\n");
  scanf("%d", &num);
	return num;     
}// end method

int menu()
{
  int choice;
  printf("1) Display the array\n");
  printf("2) Delete a single value from the array\n");
  printf("3) Compute the mean of the array\n");
  printf("4) Compute the median of the array\n");
  printf("5) Compute the midpoint of the array\n");
  printf("6) Compute the standard deviation of the array\n");
  printf("7) Quit");
  scanf("%d", &choice);
    return 7;
}// end method






