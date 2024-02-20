/*
* C program to a pass integer array elements to
* a function and return the sum of all elements
*/

#include <stdio.h>

// function to calculate the sum of array
// elements
int sum_of_elements(int *arr1,*arr2 , int n)
{
   int i=0,sum=0;

   for(i=0; i<n ; i++)
   {
       sum =arr1[i]+arr2[i];
   }

   return sum;
}

// main function
int main()
{
    int total = 0;
    int array1[10] = {1,2,3,4,5,6,7,8,9};
    int array2[10] = {1,2,3,4,5,6,7,8,9};

    // Passing array to Function
    total = sum_of_array(array1+array2);

    printf("\nThe sum of two array is : %d",total);

    return 0;
}
