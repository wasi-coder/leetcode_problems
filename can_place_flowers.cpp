#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        for(int i=0;i<flowerbed.size();i++){
            if(flowerbed[i]==0){
                bool chklft =(i==0)||(flowerbed[i-1]==0);
                bool chkrght =(i==flowerbed.size()-1)||(flowerbed[i+1]==0);

                if(chklft&&chkrght){
                    flowerbed[i]=1;
                    n--;
                    if(n==0)return true;
                }
                
            }
        }
        
         return n<=0;    
    }
};
int main() {

     Solution s;
    vector<int> flowerbed1 = {1,0,0,0,0,0,1};
    vector<int> flowerbed2 = {1,0,0,0,1};

   cout<<boolalpha;
    cout << s.canPlaceFlowers(flowerbed1, 2) << endl; 
    cout << s.canPlaceFlowers(flowerbed2, 2) << endl; 
    
}