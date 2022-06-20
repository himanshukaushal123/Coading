 void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
          int i=m-1,j=n-1,target=m+n-1;
        while(j>=0){
                nums1[target--] = i>=0 && nums1[i]>nums2[j]?nums1[i--]:nums2[j--];
        }
        return;
    }
//2nd
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
      int i=m,j=0;
        while(i<nums1.size()){
            nums1[i]=nums2[j];
            j++;i++;
        }
        sort(nums1.begin(),nums1.end());
        return;
    }
