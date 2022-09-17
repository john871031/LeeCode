

char * convertToTitle(int columnNumber){
    int tmp = columnNumber;
    int count=0;
    while(tmp>0){
        tmp = (tmp-1)/26;
        count++;
    }
    count++;    //end '\0'
    char *ans = malloc(sizeof(char)*count);
    ans[count-1] = '\0';
    for(int i=count-2;i>=0;i--){
        ans[i] = (char)((columnNumber-1)%26 + 65);
        columnNumber = (columnNumber-1)/26;
    }
    return ans;
}
