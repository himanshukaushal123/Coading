vector<vector<int>> transpose(vector<vector<int>>& matrix){
        for(int i=0;i<matrix.size();i++){
           
        //j=i+1 becausde apn ko uper triangle me move krna h otherwise transpose nahi hoga
            // for(int j=i+1;j<matrix.size();j++){
            //     swap(matrix[i][j],matrix[j][i]);
            // }
            
            //But if you want to do lower trainglr traveral then do this
            for(int j=0;j<i;j++){
                 swap(matrix[i][j],matrix[j][i]);
             }
        }
        return matrix;
    }
    void rotate(vector<vector<int>>& matrix) {
        matrix=transpose(matrix);
        for(int i=0;i<matrix.size();i++){
            reverse(matrix[i].begin(),matrix[i].end());
        }
        return;
    }
