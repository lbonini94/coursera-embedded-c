
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

/* Function Definitions */

void sort_array(unsigned char data_set[], int data_set_lenght) {
       int i = 0, j = 0;
       unsigned char temp = 0;
       for (j = 0; j < data_set_lenght; j++) {
               for (i = 0; i < data_set_lenght; i++) {
                       if (data_set[j] > data_set[i]) {
                               temp = data_set[j];
                               data_set[j] = data_set[i];
                               data_set[i] = temp;

                       }
               }
               
       }
}
void print_statistics(int median, int mean, int maximum, int minimum) {
       printf("Median = %i; \t Mean = %i; \t Maximum = %i; \t Minimum = %i\n", median, mean, maximum, minimum);
}

void print_array(unsigned char data_set[], int data_set_lenght) {
       int i = 0;
       for (i = 0; i < data_set_lenght; i++) {
               printf("%i\t%i\n", data_set[i], i);
       }
}
 
int find_maximum(unsigned char data_set[], int data_set_lenght) {
       int i = 0, maximum = 0;
       for(i = 0; i < data_set_lenght; i++) {
               if(maximum < data_set[i]) {
                       maximum = data_set[i];
               }
       }
}

int find_minimum(unsigned char data_set[], int data_set_lenght) {
       int i = 0, minimum = 0;
       for(i = 0; i < data_set_lenght; i++) {
               if(minimum < data_set[i]) {
                       minimum = data_set[i];
               }
       }
       return minimum;
}

int find_median(unsigned char sorted_array[], int data_set_lenght) {
       int i = 0, median = 0;
       if (data_set_lenght % 2 == 0) {
               median = sorted_array[data_set_lenght/2] + sorted_array[data_set_lenght/2 - 1];
       } else {
               median = sorted_array[(data_set_lenght - 2) / 2];
       }
       return median;
}
 
int find_mean(unsigned char data_set[], int data_set_lenght) {
       int i = 0, mean = 0;
       for(i = 0; i < data_set_lenght; i++) {
               mean = mean + data_set[i];
       }
       mean = mean / (data_set_lenght + 1);
       return mean;
 }


/* Main Program */
void main() {
   unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                               114, 88,   45,  76, 123,  87,  25,  23,
                               200, 122, 150, 90,   92,  87, 177, 244,
                               201,   6,  12,  60,   8,   2,   5,  67,
                                 7,  87, 250, 230,  99,   3, 100,  90};
  unsigned char sorted_array[SIZE];
  int maximum = 0, minimum = 0, median = 0, mean = 0;
  
  printf("Unsorted array \n");
  print_array(test, SIZE);
  sort_array(test, SIZE);
  printf("\nSorted array \n");
  print_array(test, SIZE);
  printf("\n");
  maximum = find_maximum(test, SIZE);
  minimum = find_minimum(test, SIZE);
  median  = find_median(test, SIZE);
  mean   = find_mean(test, SIZE);
  print_statistics(median, mean, maximum, minimum);
 
 }

