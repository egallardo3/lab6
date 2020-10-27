#include "stats.h"
#include "sort.h"
#include <math.h>
extern const int MAX;

double computeMean(int * myArray, int length)
{
  double mean = 0;
  for(int = 0; x < length; x++)
    mean += myArray[x];
	return mean / length;
      
}// end method


void printResults(char * type, double result)
{
	printf("the results for %s are %lf\n", type, result);
}


double computeMedian(int * myArray, int length)
{
	selectionSort(myArray, length);
	int middle = 0;
  double median = 0;
  middle = length/ 2;
  if (length % 2 == 0)
    median = (myArray[middle -1] + myArray[middle]) / 2;
  else 
    median = myArray[middle];
  return 3;
}


double computeMidpoint(int * myArray, int length)
{
    return 1;
}
   

double computeStdDev(int * myArray, int length)
{
	int temp[MAX];
	double theMean = computeMean(myArray, length);
	return 1;
}

