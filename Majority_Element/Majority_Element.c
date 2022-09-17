static int intCompare(const void *p1, const void *p2)
{
    int int_a = * ( (int*) p1 );
    int int_b = * ( (int*) p2 );

    if ( int_a == int_b ) return 0;
    else if ( int_a < int_b ) return -1;
    else return 1;
}

int majorityElement(int* nums, int numsSize){
    qsort(nums, numsSize, sizeof(int), intCompare);
    int time = numsSize/2;
    int count=1;
    
    for(int i=1;i<numsSize;i++){
        if(nums[i]==nums[i-1]){
            count++;
        }else{
            count=1;
        }
        if(count>time){
            return nums[i];
        }
    }
    
    return  nums[0];
}
