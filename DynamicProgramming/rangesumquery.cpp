#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

//O(N^2) using cached fast in sumRange, they say it accepted but Time limit in submit?
class NumArray {
public:
	map<pair<int,int>,int> map;
    NumArray(vector<int>& nums) {
		for(int i=0;i<nums.size();i++){
		int sum=0;
			for(int j=i;j<nums.size();j++)
			{
				sum+=nums[j];
				map[make_pair(i,j)]=sum;
			}
		}

    }
    
    int sumRange(int i, int j) {
        return map[make_pair(i,j)];
    }
};

//O(N) using brute force slow in sum range, they say it time exceed but it accepted??
class NumArrayNormal {
public:
    vector<int> data;
    NumArrayNormal(vector<int>& nums) {
        this->data=nums;
    }
    
    int sumRange(int i, int j) {
        int sum=0;
        if(i>=0 && j<data.size())
        {
            for(int k=i;k<=j;k++)
            {
                sum+=data[k];
            }
        }
        return sum;
    }
};
int main()
{
	return 0;
}