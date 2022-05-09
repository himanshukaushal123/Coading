 vector<vector<int>> sortedMatrix(int N, vector<vector<int>> Mat) {
        // code here
        vector<int>vec;
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                vec.push_back(Mat[i][j]);
            }
        }
        sort(vec.begin(),vec.end());
        int k=0;
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                Mat[i][j]=vec[k];
                k++;
            }
        }
        return Mat;
    }
