#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    static const int max_length_str = 100; //Maximum Length of the strings to be converted
    int dp[max_length_str+1][max_length_str+1]; //Creating DP 2-D Array
    string word1;
    string word2;
    

    int edit_dis(int i, int j)
    {
        int n = word1.size();
        int m = word2.size();
        //pruning 
        if(i>n || j>m) return 0;
        //base case
        if(i==n || j==m) return (n-i)+(m-j);
        //dp cache
        if(dp[i][j]!=-1) return dp[i][j];
        //transition
        int ans = 1e9;
        if(word1[i] == word2[j]) ans = min(ans,edit_dis(i+1,j+1));
        else
        {
            ans = min(ans,1 + edit_dis(i+1,j+1));
            ans = min(ans,1 + edit_dis(i+1,j));
            ans = min(ans,1 + edit_dis(i,j+1));
        }
        //save&ret
        return dp[i][j] = ans;
    }

    int minDistance(string given_word, string target_word) {
        memset(dp,-1,sizeof(dp)); //Initialize DP Array to -1 
        
        //Set the words 
        word1 = given_word;
        word2 = target_word;

        //use the recursive-dp with memoisation
        return edit_dis(0,0);
    }
};