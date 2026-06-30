#include <bits/stdc++.h>
using namespace std;

/*
Write a function to find the longest common prefix string amongst an array of strings.
If there is no common prefix, return an empty string ""
*/


string longestCommonPrefix(vector<string> &strs){
    string ans = "";

    for(int i=0;i<strs[0].length();i++){
        for(int j=0;j<strs.size()-1;j++){
            if(strs[j][i]!=strs[j+1][i]) return ans;
        }
        ans+=strs[0][i]; // i.e the character matched of the first string 
    }
    return ans;
}


int main(){

    vector<string> names = {"Aitya","Advait","Adhipurush","Adab"};
    cout << longestCommonPrefix(names) << endl;

}