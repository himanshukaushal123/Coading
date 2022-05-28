int countRev (string s)
{
    // your code here
    int n=s.size();
    //If size is even then only we can balance
    if(n%2)
        return -1;
    
    
    int open=0,cnt=0;
    for(auto i:s){
        if(open==0 && i=='}')
            cnt++,open++;
        else{
            if(i=='{') open++;
            else open--;
        }
    }
    return cnt+open/2;
    
}
