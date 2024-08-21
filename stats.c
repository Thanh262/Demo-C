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
#include <math.h> // Include for the round function

#define SIZE 40 // Define the size of the array

int main()
{
    unsigned char test[SIZE] = {34, 201, 190, 154, 8, 194, 2, 6,
                                114, 88, 45, 76, 123, 87, 25, 23,
                                200, 122, 150, 90, 92, 87, 177, 244,
                                201, 6, 12, 60, 8, 2, 5, 67,
                                7, 87, 250, 230, 99, 3, 100, 90};

    printf("Array:\n");
    print_array(test, SIZE);
    print_statistics(test, SIZE);

    return 0;
}

void print_statistics(unsigned char arr[], int length)
{
    printf("Statistics:\n");
    printf("Minimum: %d\n", find_minimum(arr, length));
    printf("Maximum: %d\n", find_maximum(arr, length));
    printf("Mean: %d\n", find_mean(arr, length));
    printf("Median: %d\n", find_median(arr, length));
}

void print_array(unsigned char arr[], int length)
{
    for (int i = 0; i < length; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int find_median(unsigned char arr[], int length)
{
    unsigned char *temp = (unsigned char *)malloc(length * sizeof(unsigned char));
    for (int i = 0; i < length; i++)
    {
        temp[i] = arr[i];
    }
    sort_array(temp, length);

    int median;

    if (length % 2 == 0)
    {
        median = round((temp[length / 2 - 1] + temp[length / 2]) / 2.0);
    }
    else
    {
        median = temp[length / 2];
    }

    free(temp);
    return median;
}

int find_mean(unsigned char arr[], int length)
{
    long int sum = 0;
    for (int i = 0; i < length; i++)
    {
        sum += arr[i];
    }
    return round((double)sum / length);
}

unsigned char find_maximum(unsigned char arr[], int length)
{
    unsigned char max = arr[0];
    for (int i = 1; i < length; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

unsigned char find_minimum(unsigned char arr[], int length)
{
    unsigned char min = arr[0];
    for (int i = 1; i < length; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}

// add sort_array(unsigned char arr[], int length) function using quick sort
void sort_array(unsigned char arr[], int length)
{
    quick_sort(arr, 0, length - 1);
}

void quick_sort(unsigned char arr[], int low, int high)
{
    if (low < high)
    {
        int pivot = partition(arr, low, high);
        quick_sort(arr, low, pivot - 1);
        quick_sort(arr, pivot + 1, high);
    }
}

int partition(unsigned char arr[], int low, int high)
{
    int pivot = arr[high];
    int i = low - 1;
    for (int j = low; j < high; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return i + 1;
}

void swap(char *a, char *b)
{
    unsigned char temp1 = *a;
    *a = *b;
    *b = temp1;
}
