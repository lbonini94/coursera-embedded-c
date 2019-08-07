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
 * @author Lucas A. Bonini
 * @date 08/2019
 *
 */
#ifndef __STATS_H__
#define __STATS_H__


/* print_statistics() */ 
void print_statistics(int median, int mean, int maximum, int minimum);

/**
 * @brief This function will print the calculated statistics
 *
 * <Add Extended Description Here>
 *
 * @param data_set[] Array of size "SIZE"
 * @param SIZE   Size of array
 *
 * @return VOID
 */



/* sort_array() */ 
void sort_array(unsigned char data_set[], int data_set_lenght);

/**
 * @brief This function will sort the array from the largest to the smallest value.
 *
 * <Add Extended Description Here>
 *
 * @param data_set[] Array of size "SIZE"
 * @param SIZE   Size of array
 *
 * @return VOID
 */
 
 /* print_array() */ 
void print_array(unsigned char data_set[], int data_set_lenght);

/**
 * @brief This function will sort the array from the largest to the smallest value.
 *
 * <Add Extended Description Here>
 *
 * @param data_set[] Array of size "SIZE"
 * @param SIZE   Size of array
 *
 * @return VOID
 */
 
 int find_maximum(unsigned char data_set[], int data_set_lenght);

/**
 * @brief This function will print the calculated statistics
 *
 * <Add Extended Description Here>
 *
 * @param data_set[] Array of size "SIZE"
 * @param SIZE   Size of array
 *
 * @return maximum
 */
 
int find_minimum(unsigned char data_set[], int data_set_lenght);

/**
 * @brief This function will print the calculated statistics
 *
 * <Add Extended Description Here>
 *
 * @param data_set[] Array of size "SIZE"
 * @param SIZE   Size of array
 *
 * @return minimum
 */
 
 
 int find_median(unsigned char data_set[], int data_set_lenght);

/**
 * @brief This function will print the calculated statistics
 *
 * <Add Extended Description Here>
 *
 * @param data_set[] Array of size "SIZE"
 * @param SIZE   Size of array
 *
 * @return median
 */

 
 int find_mean(unsigned char data_set[], int data_set_lenght);

/**
 * @brief This function will print the calculated statistics
 *
 * <Add Extended Description Here>
 *
 * @param data_set[] Array of size "SIZE"
 * @param SIZE   Size of array
 *
 * @return mean
 */
 


#endif /* __STATS_H__ */