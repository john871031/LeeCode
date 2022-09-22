

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char ** summaryRanges(int* nums, int numsSize, int* returnSize){
    *returnSize = 0;
    if(numsSize==0) return 0;
    
    char **ans = (char*)malloc(sizeof(char*)*numsSize);
    int i=0;
    int j=1;
    char buff[256];
    while(i<numsSize){
        while(j<numsSize && nums[j]-1==nums[j-1]){
            j++;
        }
        if(i<j-1){
            int buff_len = sprintf(buff, "%d->%d", nums[i], nums[j-1]);
            char *tmp  = malloc(sizeof(char)*(buff_len+1));
            ans[*returnSize] = strcpy(tmp, buff);
            (*returnSize)++;
        }else{
            int buff_len = sprintf(buff, "%d", nums[i]);
            char *tmp  = malloc(sizeof(char)*(buff_len+1));
            ans[*returnSize] = strcpy(tmp, buff);
            (*returnSize)++;
        }
        i = j;
        j++;
    }
    return ans;
}
