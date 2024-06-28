class Solution {
public:
    long long maximumImportance(int n, vector<vector<int>>& roads) {
        long long ans=0;

        vector <int> imp(n);
        vector <int> indg(n);
        for(auto it:roads){
            indg[it[0]]++;
            indg[it[1]]++;
        }

        vector<pair<int,int>> in;
        for(int i=0; i<n; i++){
            in.push_back({indg[i],i});
        }
        sort(begin(in), end(in), [] (pair<int,int>a,pair<int,int>b){
            return a.first>b.first;
        });

        int temp=n;
        for(int i=0;i<in.size();++i){
            imp[in[i].second]=temp--;
        }
        for(auto it:roads){
            ans+=(imp[it[0]] + imp[it[1]]);
        }

        return ans;
    }
};
