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
