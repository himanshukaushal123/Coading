class Solution {
public:
    double log_a_to_base_b(int a, int b)
    {
       double x=log10(double(a));
       double y=log10(double(b));
       return x/y;
    }
    bool isPowerOfFour(int n)
    {
        if(n<3 && n!=1)
            return 0;
        else if(n==1) 
            return true;
        else
        {
            double ans=log_a_to_base_b(n,4);
            cout<<ans<<endl;
            long long int X = ans;
            cout<<X<<endl;
            double temp2 = ans - X;
            if (temp2 !=0) 
                 return false;
        }
      return true;
    }
};