class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
       set<tuple<int,int,int>>s;
        sort(nums.begin(),nums.end());
        int i,j,k,n=nums.size();
        for(i=0;i<n-2;i++){
            j=i+1;
            k=n-1;
            while(j<k){
                int x=nums[i]+nums[j]+nums[k];
                if(x==0)
                {
                    s.insert(make_tuple(nums[i],nums[j],nums[k]));
                    //cout<<nums[i]<<" "<<nums[j]<<" "<<nums[k]<<"\n";
                    j++;
                    k--;
                }
                else if(x<0){
                    j++;
                }
                else{
                    k--;
                }
            }
        }
        vector<vector<int>>v;
        for(auto it=s.begin();it!=s.end();it++){
            vector<int>vec(3);
            vec[0]=get<0>(*it);
              vec[1]=get<1>(*it);
              vec[2]=get<2>(*it);
            v.push_back(vec);
        }
        return v;
    }
};
