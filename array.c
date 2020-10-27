#include "array.h"
extern const int MAX;

/**
 * The fillArray method fills fills the array by 
 * asking the user to enter an integer.
 *
 * @param myArray Representing the array of integers
 * @param num Representing the number of elements in the array
 */
void fillArray(int * myArray, int num)
{
  int x;
  for(x = 0; x < MAX; x++)
    myArray[x] = rand() % (num - 1 + 1) + 1;
	// rand () % (high - low + 1) + low 

}// end method


/**
 * The deleteSingleValue method first prompts the user to enter a value that should be deleted.<br>
 * Next the method searches through the array to determine if that value was in the array.<br>
 * If the value is not in the array, a message "Value NOT found" is displayed and current number of actual elements is returned.<br>
 * If the value is found it is removed from the array by shifting all elements to the right of the number being deleted left <br>
 * Once the shift has happened a zero is placed in the last index<br>
 *
 * @param myArray Representing the array of integers
 * @param length Representing the actual number of elements in the array
 * @return int Representing the new actual number of elements in the array
 */
int deleteSingleValue(int * myArray, int length)
{
	return length;
}// end method



/**
 * The printArray method prints the array in the following fashion<br>
 * [value, value, value, ..., value]
 *
 * @param myArray Representing the array of integers to be printed
 * @param length Representing the actual number of elements in the array
 */
void printArray(int * myArray, int length)
{
  printf("[");
    int x;
    for( x=0; x < MAX; x++)
      printf("%d ]", myArray[x]); 
	

    // print last element with ] 
}// end printArray

