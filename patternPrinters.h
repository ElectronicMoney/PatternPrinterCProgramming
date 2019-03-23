//Example 1: Program to print half pyramid using *
void printHalfPeramidStar(int numberOfRows) {
    int rows, cols;
    for(rows = 1; rows <= numberOfRows; rows++) {
        for(cols = 1; cols<=rows; cols++) {
            printf("* ");
        }
        printf("\n");
    }
}


//Example 2: Program to print half pyramid a using numbers
void printHalfPeramidNumber(int numberOfRows) {
    int rows, cols;
    for(rows = 1; rows <= numberOfRows; rows++) {
        for(cols = 1; cols<=rows; cols++) {
            printf("%d", cols);
        }
        printf("\n");
    }
}


//Example 3: Program to print half pyramid using alphabets
void printHalfPyramidAlphabets(char upperChar) {
    int rows, cols;
    char alphabet = 'A';
    
    for(rows = 1; rows <= (upperChar - 'A' + 1); rows++){
        for(cols = 1; cols<=rows; cols++) {
            printf("%c", alphabet);
        }
        alphabet++;
        printf("\n");
    }
}

//Example 4: Inverted half pyramid using *
void printInvertedHalfPeramidStar(int numberOfRows) {
    int rows, cols;
    for(rows = numberOfRows; rows >= 1; rows--) {
        for(cols = 1; cols<=rows; cols++) {
            printf("* ");
        }
        printf("\n");
    }
}

//Example 5: Inverted half pyramid using numbers
void printInvertedHalfPeramidNumber(int numberOfRows) {
    int rows, cols;
    for(rows = numberOfRows; rows >= 1; rows--) {
        for(cols = 1; cols<=rows; cols++) {
            printf("%d", cols);
        }
        printf("\n");
    }
}

//Example 6: Program to print full pyramid using *
void printFullPeramidStar(int numberOfRows) {
    int i, space;
    int k = 0;

    for(i = 1; i <= numberOfRows; ++i, k=0) {
        for(space=1; space<=numberOfRows - i; ++space) {
            printf("  ");
        }
        while(k != 2 * i - 1) {
            printf("* ");
            ++k;
        }
        printf("\n");
    }
}

//Example 7: Program to print pyramid using numbers
void printFullPeramidNumber(int numberOfRows) {

    int i, space, k=0, count = 0, count1 = 0;

    for(i=1; i<=numberOfRows; ++i) {
        for(space=1; space <= numberOfRows-i; ++space) {
            printf("  ");
            ++count;
        }
        while(k != 2*i-1) {
            if (count <= numberOfRows-1) {
                printf("%d ", i+k);
                ++count;
            } else {
                ++count1;
                printf("%d ", (i+k-2*count1));
            }
            ++k;
        }
        count1 = count = k = 0;
        printf("\n");
    }
}

//Example 8: Inverted full pyramid using *
void printInvertedFullPeramidStar(int numberOfRows) {
    int i, j, space;
    for(i=numberOfRows; i>=1; --i) {
        for(space=0; space < numberOfRows-i; ++space) {
            printf("  ");
        }  
        for(j=i; j <= 2*i-1; ++j) {
            printf("* ");
        }
        for(j=0; j < i-1; ++j) {
            printf("* ");
        }
        printf("\n");
    }
}

//Example 9: Print Pascal's triangle
void printPascalsTriangle(int numberOfRows) {
    int space, i, j;
    int coef = 1;

    for(i=0; i<numberOfRows; i++) {
        for(space=1; space <= numberOfRows-i; space++) {
            printf("  ");
        }    
        for(j=0; j <= i; j++) {
            if (j==0 || i==0) {
                coef = 1;
            } else {
                coef = coef*(i-j+1)/j;
            }
            printf("%4d", coef);
        }
        printf("\n");
       
    }
}

//Example 10: Print Floyd's Triangle.
void printFloydsTriangle(int numberOfRows) {
     int i, j, number= 1;

    for(i=1; i <= numberOfRows; i++) {
        for(j=1; j <= i; ++j) {
            printf("%d ", number);
            ++number;
        }
        printf("\n");
    }
}


