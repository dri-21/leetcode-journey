bool containsDuplicate(int* nums, int numsSize) {
    int capacity = numsSize * 2 + 1;
    int *hash = calloc(capacity, sizeof(int));
    bool *used = calloc(capacity, sizeof(bool));

    for (int i = 0; i < numsSize; i++) {
        unsigned int key = (unsigned int)nums[i];
        int index = key % capacity;

        while (used[index]) {
            if (hash[index] == nums[i]) {
                free(hash);
                free(used);
                return true;
            }
            index = (index + 1) % capacity;
        }

        hash[index] = nums[i];
        used[index] = true;
    }

    free(hash);
    free(used);
    return false;
}
