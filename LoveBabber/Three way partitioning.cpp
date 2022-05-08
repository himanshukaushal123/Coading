  void threeWayPartition(vector<int>& arr,int a, int b)
    {
        // code here 
        int n=arr.size();
       int i=0;
       int h=n-1;
       int l=0;
       while(i<=h)
       {
           if(arr[i]>a && arr[i]>b)
           {swap(arr[i],arr[h]);h--; }
           
           else if(arr[i]<a)
           {   swap(arr[i],arr[l]);
               l++;
               i++;
               
           }
           else{
               i++;
               
           }
           
       }
      
       }
