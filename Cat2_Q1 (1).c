/*
Name :Lenny Lepayapui
Reg no :CT101/G/26444/25
course: computer science
Description:c program to print elements using a  nested for loop
Date:6/11/2025
*/
#include <stdio.h>
int main() {

/*
Define an array data structure 
This is a data structure that stores collection of elements of the same data type in adjacent memory location 
*/

    int i,j;
    int scores [2][2]= {
        {65,92},
        {84,72}
    };

    //prining the elements on the nested for loop
    //the row
    for(i=0; i<2; i++) {
        for(j=0; j<2; j++) {
            printf("%d\t",scores[i][j]);
        }
        printf("\n");
    }

    return 0;
}
