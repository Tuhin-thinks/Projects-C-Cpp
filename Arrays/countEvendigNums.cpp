#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int countDigits(int num)
{
    int count = 0;
    while (num > 0)
    {
        num /= 10;
        ++count;
    }
    return count;
}
int findNumbers(vector<int>& nums)
{
    int digits = 0, num_count = 0;
    return count_if(nums.begin(), nums.end(), [](const int num){
        return countDigits(num) % 2 == 0;
    });
}

int main()
{
    vector<int> nums{12, 345, 2, 6, 7896};
    int res = findNumbers(nums);
    cout << res << endl;  // should print 2
}