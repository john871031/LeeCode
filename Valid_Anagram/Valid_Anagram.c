

bool isAnagram(char * s, char * t){
    int check[256]={0};
    if(strlen(s)!=strlen(t)) return false;
    
    while(*s){
        check[*s]++;
        s++;
    }
    while(*t){
        if(check[*t]>0){
            check[*t]--;
            t++;
        } 
        else return false;
    }
    return true;
}
