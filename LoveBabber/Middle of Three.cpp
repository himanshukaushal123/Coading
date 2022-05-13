int middle(int A, int B, int C){
        //code here//Position this line where user code will be pasted.
        long long a=A,b=B,c=C;
        if((a-b)*(a-c)<0)return a;
        if((b-a)*(b-c)<0)return b;
        return c;
    }
