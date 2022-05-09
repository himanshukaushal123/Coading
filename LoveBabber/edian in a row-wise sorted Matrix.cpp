int median(vector<vector<int>> &matrix, int r, int c){
        // code here
       int ans=-1;
       int high=2000;
       int low=1;
       int medianplace=((r*c)/2)+1 ;
      
       while(low<=high)
       {
           int mid=(low+high)/2;
           
           int count=0;
           
           for(int i=0;i<r;i++)
           {
               count+=upper_bound(matrix[i].begin(),matrix[i].end(),mid) -matrix[i].begin();
           }
           
           if(count>=medianplace)
           {
               ans=mid;
               high=mid-1;
           }
           else
           low=mid+1;
           
       }
       
       return ans;
   }
