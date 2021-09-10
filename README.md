# Creating my own libraries
## Description:

A library is a collection of code, usually focused on enabling a specific component, peripheral or functionality. The main objective of this project is to provide the same flexibility as some of the basic functions in c language like sorting and searching.

### Sorting Library

Sorting is a commomnly used functionality by programmers.  A sorting algorithm is used to rearrange a given array or list of elements according to a comparison operator on the elements. The comparison operator is used to decide the new order of element in the respective data structure. There are many algorithms for this purpose. For creating this library I used Quick Sort Algorithm.

#### Quick Sort
Quick sort is a highly efficient sorting algorithm and is based on partitioning of array of data into smaller arrays. A large array is partitioned into two arrays one of which holds values smaller than the specified value, say pivot, based on which the partition is made and another array holds values greater than the pivot value. Implementing this algorithm recursively, we end up with smaller possible partitions. Each partition is then processed for quick sort.

Time Complexity:
Best Case: The best case scenario occurs when the partitions are as evenly balanced as possible, i.e their sizes on either side of the pivot element are either are equal or are have size difference of 1 of each other.
So the complexity in this case is O(n logn).

Worst case: This happens when we encounter the most unbalanced partitions possible, i.e their sizes on either side of pivot element can have size difference of n - 1.
So the worst case time complexity of Quick Sort would be O(n^2).

### Searching Library

We often need to find one particular item of data amongst many hundreds, thousands, millions or more. This is when searching algorithm comes into picture. There are many different types of searching algorithms. Two of them are serial search and binary search etc. In this library I used Binary Search.

#### Binary Search

This search algorithm works on the principle of divide and conquer. For this algorithm to work properly, the data collection should be in the sorted form. Binary search looks for a particular item by comparing the middle most item of the collection. If a match occurs, then the index of item is returned. If the middle item is greater than the item, then the item is searched in the sub-array to the left of the middle item. Otherwise, the item is searched for in the sub-array to the right of the middle item. This process continues on the sub-array as well until the size of the subarray reduces to zero.

Time Complexity:
Binary search is a fast search algorithm with run-time complexity of Ο(log n).
The best-case time complexity would be O(1) when the central index would directly match the desired value. The worst-case scenario could be the values at either extremity of the list or values not in the list. 

## How to use library

1. Compile the file in which you have your library code using command 
      gcc -c <filename>
2. This will create an object file.
3. To create static library use the command
      ar rs <lib + name + .a> <object file generated>
4. Create a header file and write the prototype of all the functions that are in the library and save it with .h extension.
5. Include the header file in your program in which you are implementing a function of this library.
6. Compile the program using command
      gcc -c <program_name>
7. Now to link the object file with the library and to generate an executable file for your program use the command
      gcc -o <executable_file_name> <program_name> <library_name> <object file>
8. Now run th executable using 
      ./<executable_file_name>
  

## Specifications:
1. Both libraries are implemented in c language. 
2. Implementation of both generic quick sort and binary search algorithm are in Quick_Sort.c and Binary_Search.c files.
3. quicksort.h and search.h are the headers of the respective libraries. 
4. demo.c is sample program in which QuickSort() function is used.
5. demo1.c is sample program in which binarysearch() function is used.

By using these libraries you can sort or search from any user defined datatype.

## Design:
Functions in the library are kept inside a separate files namely Quick_Sort.c and Binary_Search.c 

## Goals:
The main point of a library is to package something useful up so that we don't need to keep re-inventing the wheel when we want to use a common functionality. It can also be thought of as a building block for a program. Most importantly, it is not a program in itself. i.e. it doesn't have a main() function, but will be a useful and reusable component in a program.Also it makes our code look more structured. 
