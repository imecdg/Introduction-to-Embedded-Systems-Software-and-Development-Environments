/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file <Add File Name> 
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author <Add FirsName LastName>
 * @date <Add date >
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

 /* Other Variable Declarations Go Here */

 unsigned char minimum = 0;
 unsigned char maximum = 0;
 float mean = 0 ;
 unsigned char median = 0;

 /* Statistics and Printing Functions Go Here */

 printf("Array before sorting\n");
 print_array(test,SIZE);
 sort_array(test, SIZE);
 printf("Array after sorting: \n");
 print_array(test, SIZE);
 median = find_median(test,SIZE);
 mean = find_mean(test, SIZE);
 maximum = find_maximum(test, SIZE);
 minimum = find_minimum(test, SIZE);
 print_statistics(minimum, maximum, mean, median);
	 
}

/* Add other Implementation File Code Here */
/* Add other Implementation File Code Here */

void print_array(unsigned char *array,unsigned int asize)
{
	for(int i=0;i<asize;i++)
	{
		printf("%d ,",*(array+i));
	}
	printf ("\n");
	
}


void print_statistics(unsigned char minimum, unsigned char maximum, float mean, unsigned char median)
{
 
	printf("The minimum value in the array is %d \n", minimum);
 	printf("The maximum value in the array is %d \n ", maximum);
 	printf("The mean value in the array is %f \n", mean);
 	printf("The median value in the array is %d \n", median);

}

unsigned char find_median(unsigned char *array, unsigned int asize)
{
	unsigned char median = 0;
	if(asize % 2 == 0)
	{
		median = (array[asize/2-1]+array[asize/2])/2;
	}
	else
	{
		median = array[asize/2];
	}
	return median;
}
float find_mean(unsigned char *array, unsigned int asize)

{
	float mean = 0.0f;
	for(unsigned int i=0;i<asize;i++)
	{
		mean+=*(array+i);
	}
	mean = mean/asize;
	return mean;
}
unsigned char find_minimum(unsigned char *array, unsigned int asize)
{
	unsigned char minimum = array[0];
	for (int i=1;i<asize;i++)
	{
		if(*(array+i)<minimum)
		{
			minimum = *(array+i);
		}
		else
		{
		/* DO NOTHING
		*/
		}
	}
	return minimum;
}
unsigned char find_maximum(unsigned char *array, unsigned int asize)
{
	unsigned char maximum = array[0]; /* Initialize the variable with the first value of the array */
	for(int i=1;i<asize;i++) /* Startin for from the second value in the array */
	{
		if(*(array+i)>maximum) /* Comparing 1 and 2 value of the array */
		{
			maximum = *(array+i);
		}
	
unsigned char find_minimum(unsigned char *array, unsigned int asize)
{
        unsigned char minimum = array[0];
        for (int i=1;i<asize;i++)
        {
	                if(*(array+i)<minimum)
	                {
			                        minimum = *(array+i);
			                }
	                else
	                {
			                /* DO NOTHING
					 *                 */
			                }
	        }
        return minimum;
}
unsigned char find_maximum(unsigned char *array, unsigned int asize)
{
        unsigned char maximum = array[0]; /* Initialize the variable with the first value of the array */
        for(int i=1;i<asize;i++) /* Startin for from the second value in the array */
        {
	                if(*(array+i)>maximum) /* Comparing 1 and 2 value of the array */
	                {
			                        maximum = *(array+i);
			                }
	                else
	                {
			                        /* DO NOTHING */
			                }
	        }
        return maximum;
}
}
	return maximum;
}
void sort_array(unsigned char *array, unsigned int asize)
{
	unsigned int flag = 0;
	unsigned char temp = 0;
	do
	{
		flag = 0; /* Set flag to 0 every new operation */
		for(int i = 0; i < asize-1; i++)
		{
			 if (array[i] < array[i +1])
			{
				/*swap elements*/
				temp = array[i];
				array[i] = array[i+1];
				array[i+1]=temp;
				flag = 1;
			}
		}
	}
	while (flag == 1);
}
	
