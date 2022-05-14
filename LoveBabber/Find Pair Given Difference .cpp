bool findPair(int arr[], int size, int n)
{
  int i=0,j=1;
   sort(arr,arr+size);
   
   while(i<size && j <size)
   {
       if(abs(arr[i]-arr[j])==n && i!=j )
           return true;
       else if(abs(arr[i]-arr[j]) <n)
           j++;
       else{
           i++;
       }
   }
   return false;  
}
