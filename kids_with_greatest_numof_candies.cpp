#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int max=0;
       vector<bool> result(candies.size());
        for (int i=0;i<candies.size();i++){
            if(candies[i]>max)max=candies[i];
        }
        for (int i=0;i<candies.size();i++){
            if((extraCandies+candies[i])>=max){
                result[i]=true;
            }
            else{
                result[i]=false;
            }

        }
        return result;
        
    }
};

int main() {
    Solution s;
    vector<int> candies = {2,3,5,1,3};
    int extraCandies = 3;
    vector<bool> ans = s.kidsWithCandies(candies, extraCandies);

    for (bool b : ans) cout << (b ? "true " : "false ");
}