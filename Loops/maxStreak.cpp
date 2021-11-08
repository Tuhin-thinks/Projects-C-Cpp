#include <iostream>
#include <vector>

using namespace std;

int findMaxConsecutiveOnes(vector<int>& nums) {
    // int max_streak = 0, streak = 0;
    // for (int elem : nums){
    //     if (elem){
    //         streak ++;
    //     }
    //     else{
    //         if (streak > max_streak){
    //             max_streak = streak;
    //         }
    //         streak = 0;
    //     }
    // }
    // if (streak > max_streak){
    //     return streak;
    // }
    // return max_streak;

/* faster solution */
    int cur = 0;
    for (const int& num: nums)
    {
        if (num == 0){
            cur = 0;
        }
        else
        {
            cur += 1;
        }
        
    }
    return cur;
    
}

int main(){
    vector<int> array_vec{1,1,0,1,1,1};

    int res = findMaxConsecutiveOnes(array_vec);
    cout << "Max 1's streak:" << res << endl;
    
}