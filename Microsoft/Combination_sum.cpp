class Solution {
public:
   void helper(vector<vector<int>>& result, vector<int> ans, int k, int n) {
    if ( n == 0&& ans.size()==k) { 
        result.push_back(ans); 
        return ;
    }
    if (ans.size() < k) {
        int i;
        if(ans.empty()){
            i=1;
        }
        else{
            i=ans.back()+1;
        }
      for (; i <= 9; ++i) {
        if (n - i < 0) break;
        ans.push_back(i);
        helper(result, ans, k, n - i);
        ans.pop_back();
      }
    }
  }

  vector<vector<int>> combinationSum3(int k, int n) {
    vector<vector<int>> result;
    vector<int> solution;
    helper(result, solution, k, n);
    return result;
  }
};