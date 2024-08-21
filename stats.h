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

/**
 * @brief Prints the statistics of an array including minimum, maximum, mean, and median.
 *
 * This function takes an array and its length as input and prints the minimum,
 * maximum, mean, and median values of the array. It calls other functions to
 * compute these values.
 *
 * @param arr The array of data
 * @param length The length of the array
 */
void print_statistics(unsigned char arr[], int length);

/**
 * @brief Prints an array to the screen.
 *
 * This function takes an array of data and its length as input and prints the
 * array elements to the screen.
 *
 * @param arr The array of data
 * @param length The length of the array
 */
void print_array(unsigned char arr[], int length);

/**
 * @brief Finds the median value of an array.
 *
 * This function takes an array of data and its length as input, sorts the array,
 * and returns the median value. If the length is even, it averages the two middle
 * values and rounds the result.
 *
 * @param arr The array of data
 * @param length The length of the array
 * @return The median value of the array
 */
int find_median(unsigned char arr[], int length);

/**
 * @brief Finds the mean value of an array.
 *
 * This function takes an array of data and its length as input, computes the mean
 * value by summing the elements and dividing by the length, then rounds the result.
 *
 * @param arr The array of data
 * @param length The length of the array
 * @return The mean value of the array
 */
int find_mean(unsigned char arr[], int length);

/**
 * @brief Finds the maximum value of an array.
 *
 * This function takes an array of data and its length as input and returns the
 * maximum value in the array.
 *
 * @param arr The array of data
 * @param length The length of the array
 * @return The maximum value of the array
 */
unsigned char find_maximum(unsigned char arr[], int length);

/**
 * @brief Finds the minimum value of an array.
 *
 * This function takes an array of data and its length as input and returns the
 * minimum value in the array.
 *
 * @param arr The array of data
 * @param length The length of the array
 * @return The minimum value of the array
 */
unsigned char find_minimum(unsigned char arr[], int length);

/**
 * @brief Sorts an array in descending order.
 *
 * This function takes an array of data and its length as input and sorts the
 * array in descending order. The zeroth element will be the largest value, and
 * the last element (n-1) will be the smallest value.
 *
 * @param arr The array of data
 * @param length The length of the array
 */
void sort_array(unsigned char arr[], int length);

#endif /* __STATS_H__ */
