#include <stdio.h>
#include "patternPrinters.h"


int main()
{
    int numberOfRows;
    char upperChar;

    // printf("Enter number of rows: ");
    // scanf("%d", &numberOfRows);

    printf("Enter the uppercase character you want to print in last row: ");
    scanf("%c", &upperChar);

    // printHalfPeramidStar(numberOfRows);
    // printHalfPeramidNumber(numberOfRows);
    printHalfPyramidAlphabets(upperChar);
    // printInvertedHalfPeramidStar(numberOfRows);
    // printInvertedHalfPeramidNumber(numberOfRows);
    // printFullPeramidStar(numberOfRows);
    // printFullPeramidNumber(numberOfRows);
    // printInvertedFullPeramidStar(numberOfRows);
    // printPascalsTriangle(numberOfRows);
    // printFloydsTriangle(numberOfRows);
    

    return 0;
}
