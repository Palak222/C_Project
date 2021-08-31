# Creating my own library
## Description:

A library is a collection of code, usually focused on enabling a specific component, peripheral or functionality. The main objective of this project is to provide the same flexibility as some of the basic functions of arrays in c language such as sorting an array, rotating an array etc.
### Functions in the library:
#### Quick_Sort()
This function sorts an array using quick sort algorithm by first dividing the array into two subarrays, so that all the numbers in one subarray are smaller than all the numbers in the second subarray. 
#### Rotate_Array ()
This function shift the elements of an array by k positions to the right while making the last element, the first on every shift. The goal is to rotate an array k times that is, each element of array will be shifted to the right k times.
#### Search_Element()
This function search an element in a sorted array using binary search algorithm. This search algorithm works on the principle of divide and conquer. It will return the index of the desired element.
#### Min_element()
This function returns the value of smallest element present in an array.
#### Max_element()
This function returns the value of largest element present in an array.

## Specifications:
All the functions are implemented in C language.

## Design:
Functions in the library are kept inside a separate file (LIBRARY.c) to keep the design more simple.

## Goals:
The main point of a library is to package something useful up so that we don't need to keep re-inventing the wheel when we want to use a common functionality. It can also be thought of as a building block for a program. Most importantly, it is not a program in itself. i.e. it doesn't have a main() function, but will be a useful and reusable component in a program.Also it makes our code look more structured. 
