int maximumWealth(int** accounts, int accountsSize, int* accountsColSize) {
    int maxwealth = 0;

    for(int i = 0; i < accountsSize; i++) {
        int sum = 0;

        for(int j = 0; j < accountsColSize[i]; j++) {
            sum += accounts[i][j];
        }

        if(maxwealth < sum) {
            maxwealth = sum;
        }
    }

    return maxwealth;
}
