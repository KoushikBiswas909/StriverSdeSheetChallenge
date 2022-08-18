vector<int> Solution::repeatedNumber(const vector<int> &A) {
    int n = A.size();
    
    vector<int> hash(n+1,0);
    
    for(int i=0;i<n;i++){
        hash[A[i]]++;
    }
    
    int a=0,b=0;
    
    for(int i=0;i<hash.size();i++){
        if(hash[i] > 1){
            a = i;
        }
        if(hash[i]==0){
            b = i;
            
        }
    }
    vector<int> res;
    res.push_back(a);
    res.push_back(b);
    return res;
    
}
