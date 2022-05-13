 int firstOcc(vector<int>& a, int key)
{
    int start = 0, end = a.size() - 1,res=-1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (a[mid] == key)
        {
            res = mid;
            end = mid - 1;
        }
        else if (a[mid] > key)
        {
            end = mid - 1;
        }
        else
            start = mid + 1;
    }
    return res;
}

int lastOcc(vector<int>& a, int key)
{
    int start = 0, end = a.size() - 1, res=-1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (a[mid] == key)
        {
            res = mid;
            start = mid + 1;
        }
        else if (a[mid] > key)
        {
            end = mid - 1;
        }
        else
            start = mid + 1;
    }
    return res;
}
  
    vector<int> firstAndLast(vector<int> &arr, int n, int x) {
        // Code here
        vector<int>vec;
        if(firstOcc(arr,x)==-1){
            return {-1};
        }
        vec.push_back(firstOcc(arr,x));
        vec.push_back(lastOcc(arr,x));
        return vec;
    }
