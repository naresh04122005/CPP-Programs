class Solution {
public:
    int maximalSquare(vector<vector<char>>& mt) {
        int n=mt.size(),m=mt[0].size();
        int ret=0;
        vector<vector<int>> ans(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(i==0||j==0){
                    if(mt[i][j]=='1') ans[i][j]=1;
                    else ans[i][j]=0;
                    // ret=max(ret,mt[i][j]);
                    if(mt[i][j]=='1') ret=max(1,ret);

                }
                else{
                    if(mt[i][j]=='1'){
                    ans[i][j]=min(ans[i-1][j],min(ans[i-1][j-1],ans[i][j-1]))+1;
                    ret=max(ret,ans[i][j]);
                    }else{
                        ans[i][j]=0;
                    }
                }
        }}
        return ret*ret;
    }
};
