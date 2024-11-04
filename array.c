/*
Array:
    -linear data structure
    -elements are stored in contiguous memory locations
    -can access elements randomly using index
    -stores homogeneous elements i.e similar elements
    -syntax:
        array declaration
            datatype varname[size];
        can also do declaration and initialization at once
            datatype varname[] = {elem1,elem2,elem3,elem4};

    ->Operations:
        -traversal: iterating through the elements
        -insertion: adding an element to the array at a specific index
        -deletion: removing an element from the array at a specific index
        -searching: finding an element in the array by its value or index

    ->Advantages:
        -random access
        -easy sorting and iteration
        -replacement of multiple variables

    ->Disadvantages:
        -size is fixed
        -difficult to insert and delete
        -if capacity is more and occupancy less,most of the array gets wasted
        -needs contiguous memory to get allocated

    ->Apllications:
        -for storing information in a linear way
        -suitable for applications that require frequent searching
        -representing matrices and tables

*/

//example1:

#include <stdio.h>
int main(){
    //array for integers
    //index: 0 to (n-1), n=10 -> index: 0 to 9
    int rollNo[10];
    
    //integer inputs
    for(int i=0;i<10;i++)
        scanf("%d",&rollNo[i]);

    //var i is index position 
    //output
    for(int i=0;i<10;i++)
        printf("%d ",rollNo[i]);


    return 0;

}


//example 2:
