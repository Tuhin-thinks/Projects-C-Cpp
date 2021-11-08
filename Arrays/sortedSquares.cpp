#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> sortedSquares(vector<int> &nums)
{
    for_each(nums.begin(), nums.end(), [](auto &i){ i*=i; });
    sort(nums.begin(), nums.end());
    return nums;
}

int square(int num)
{
    return num * num;
}

int main()
{
    vector<int> nums{-7, -3, 2, 3, 11};
    vector<int> res = sortedSquares(nums);
    for_each(res.begin(), res.end(), [](auto &item){ cout << item << ","; });
    cout << endl;
}