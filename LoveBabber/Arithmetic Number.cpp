int inSequence(int A, int B, int C){
        // code here
        if(C==0) // if common diff is 0 , then A and B must be same , therefore return 1;
           return A==B?1:0; // But if Common diff = 0 , and A , B are not same , then it is not Arithmetic progression in that case will return 0
           
           if(B<A && C>0) return 0; //if common difference is positive , then B should be positive
           
           if(B>A && C<0) return 0; //if common difference is negative , then B should be negative 
           
           int n = ((B-A)/C)+1; // nth number
           
           return (A+(n-1)*C==B?1:0);// using  Formula an = a + (n-1)d , here a = first term , n = nth number , d = common diff  , an = nth term
          // if B is part of arithmetic  then it must be the nth term therefore return 1 else 0 
    }
