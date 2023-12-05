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
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

/**
 * @brief Prints the statistics of a given array
 */

void print_array(unsigned char *array,unsigned int asize);

/*
 * @brief prints original array
 * @param array is the content of the array and asize is the lenght
 * @return nothing just printing
 * */
void print_statistics(unsigned char minimum, unsigned char maximum, float mean, unsigned char median);
/*
 * @brief it does print all the calculated values 
 * @param minium is the minimum value of the array, maximum the max value of the array, the mean and median values
 * @ it dont returns anything just printing
 * */
unsigned char find_median(unsigned char *array, unsigned int asize);
/*
 *@brief it calculates the median value of the array
 *@param *array and asize, values and length of the array respectively
 * */
float find_mean(unsigned char *array, unsigned int asize);
/*
 * @brief it calculates the mean of the array
 *@param *array and asize, values and length of the array respectively
 * */
unsigned char find_minimum(unsigned char *array, unsigned int asize);

/*
 * @brief it finds the minimum value in the array
 *@param *array and asize, values and length of the array respectively
 * */
unsigned char find_maximum(unsigned char *array, unsigned int asize);
/*
 * @brief it finds the max value in the array
 *@param *array and asize, values and length of the array respectively
 * */
void sort_array(unsigned char *array, unsigned int asize);
/*
 * it sorts the array from max to min
 *@param *array and asize, values and length of the array respectively
 * */

#endif /* __STATS_H__ */
