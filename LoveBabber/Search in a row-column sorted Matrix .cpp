 bool search(vector<vector<int> > matrix, int n, int m, int x) 
    {
        // code here 
        int i=0,j=m-1;
        while(j>=0&&i<n){
            if(matrix[i][j]==x)return true;
            else if(matrix[i][j]<x)i++;
            else j--;
        }
        return false;
    }
