 int a[100000]={0};
    int *findTwoElement(int *arr, int n) {
        // code here
        int* res=new int[2];
        vector<int>vec;
        for(int i=0;i<n;i++){
            a[arr[i]]++;
        }
        for(int i=1;i<=n;i++){
            if(a[i]==0)vec.push_back(i);
        }
        for(int i=1;i<=n;i++){
            if(a[i]>1)vec.push_back(i);
        }
        res[0]=vec[1];
        res[1]=vec[0];
        return res;
    }
