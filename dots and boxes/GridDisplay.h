// printing user interface
void UI(int nrow, int ncol){
    int len = 2 * nrow + 1;
    unsigned char grid[len][len];
    for (int i=0; i<len; i++){
        for (int j=0; j<len; j++){
            grid[i][j] = (i%2==0 && j%2==0)? '.' : ' ' ;
            printf("%c ", grid[i][j]);
        }
        printf("\n");
        }
    printf("player 1's name: \n");
    printf("number of moves for player 1: \n");
    printf("player 1's score: \n");
    printf("no. of remaining lines: \n");
    printf("time: \n");

}
