#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
      string result ="";
      int i=0,j=0;

      while (i<word1.size()&&j<word2.size()){
        result+=word1[i++];
        result+=word2[j++];

      }
      while (i<word1.size()){
        result+=word1[i++];

      }
      while (j<word2.size()){
        result+=word2[j++];

      }
      return result;
        
    }
};

int main (){
    Solution s ;

    string w1="abc",w2="qwer";
    cout<<"merged form is ="<<s.mergeAlternately(w1,w2)<<endl;

    string word1 = "abcd";
    string word2 = "pq";
    cout << "Merged: " << s.mergeAlternately(word1, word2) << endl;


}



