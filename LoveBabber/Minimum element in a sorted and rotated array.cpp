int findMin(int arr[], int n){
        //complete the function here
        int start = 0, end = n-1;

          if(arr[start]<=arr[end])
           return arr[start];
           
       while(start<=end){
           int mid = (start+end)/2;
           
           // If element at mid is smallest
           if(arr[mid]<arr[mid-1])
               return arr[mid];
               
           // If element after mid is smallest
           else if(arr[mid]>arr[mid+1])
               return arr[mid+1];
               
           // If array from start to mid is sorted
           else if(arr[start]<=arr[mid])
               start = mid+1;
               
           // If array from mid to end is sorted
           else if(arr[mid]<=arr[end])
               end = mid-1;
       }
    }
