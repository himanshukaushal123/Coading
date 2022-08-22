class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        queue<pair<pair<int,int>,int>>q;
        int vis[n][m];
        int fresh=0;
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==2){
                    q.push({{i,j},0});
                    vis[i][j]=2;
                }else{
                    vis[i][j]=0;
                }
                if(grid[i][j]==1)fresh++;
            }
        }
        
        int drow[]={-1,0,1,0};
        int dcol[]={0,1,0,-1};
        int tm=0;
        int cnt=0;
        
        while(!q.empty()){
            int r=q.front().first.first;
            int c=q.front().first.second;
            int t=q.front().second;
            tm=max(t,tm);
            q.pop();
            
            for(int i=0;i<4;i++){
                int neb_r=r+drow[i];
                int neb_col=c+dcol[i];
                if(neb_r>=0 && neb_r<n && neb_col>=0 && neb_col<m &&vis[neb_r][neb_col]!=2 && grid[neb_r][neb_col]==1){
                    q.push({{neb_r,neb_col},t+1});
                    vis[neb_r][neb_col]=2;
                    cnt++;
                }
            }
        }
        if(cnt!=fresh)return -1;
        return tm;
    }
};
