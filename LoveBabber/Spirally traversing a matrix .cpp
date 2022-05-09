 vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        // code here 
    vector<int>vec;
    int top=0,left=0,down=r-1,right=c-1;
    int dir=0;
    while(top<=down && left<=right){
        //right
        if(dir==0){
            for(int i=top;i<=right;i++){
                vec.push_back(matrix[top][i]);
            }
            top+=1;
        }
        //down
        else if(dir==1){
            for(int i=top;i<=down;i++){
                vec.push_back(matrix[i][right]);
            }
            right-=1;
        }
        //left
        else if(dir==2){
            for(int i=right;i>=left;i--){
                vec.push_back(matrix[down][i]);
            }
            down-=1;
        }
        //upward
        else if(dir==3){
            for(int i=down;i>=top;i--){
                vec.push_back(matrix[i][left]);
            }
            left+=1;
        }
        dir=(dir+1)%4;
    }
    return vec;
    }
