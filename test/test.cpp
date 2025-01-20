#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <stack>
#include <unordered_map>
#include <unordered_set>
#include <queue>
#include <stdint.h>
//using namespace std;

class Solution
{
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target)
    {
        std::unordered_map<int, int> hashtable;
        int length = nums.size();
        for(int i = 0; i < length; i++)
        {
            auto x = hashtable.find(target - nums[i]);
            if(x != hashtable.end())
                return {x->second, i};
            hashtable[nums[i]] = i;
        }
        return {};
    }
};

int main()
{
    std::cout<<"Hello World"<<std::endl;
    return 0;
}