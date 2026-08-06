#include <bits/stdc++.h>
using namespace std;

void solve(int ind, vector<int>& pick, vector<int>& notPick, int target, vector<int>& arr){
    if(ind == arr.size()){
        if(target == 0){
            return;
        }
    }

    if(arr[ind] <= target){
        pick.push_back(arr[ind]);
        solve(ind+1, pick, notPick, target - arr[ind], arr);
    }
    solve(ind+1, pick, notPick, target, arr);
}

vector<int> splitArray(vector<int>& arr) {

    int n = arr.size();
    
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
    }

    if(sum % 2 == 1) return {-1};
    
    vector<int> pick;
    vector<int> notPick;

    int pickSum = 0, notPickSum = 0;
    int target = sum / 2;

    solve(0, pick, notPick, target, arr);

    vector<int> ans = pick;
    ans.push_back(notPick.begin(), notPick.end());

}

int main() {

    vector<vector<int>> testCases = {

        {2, 4, 1, 3},
        {1, 2, 3, 4, 5, 6},
        {8, 1, 7, 2, 6, 3, 5, 4}

    };

    for (int tc = 0; tc < testCases.size(); tc++) {

        cout << "Test Case " << tc + 1 << ":\n";

        vector<int> ans = splitArray(testCases[tc]);

        if (ans.size() == 1 && ans[0] == -1) {
            cout << -1 << endl;
        }
        else {
            for (int x : ans)
                cout << x << " ";
            cout << endl;
        }

        cout << "-----------------\n";
    }

    return 0;
}