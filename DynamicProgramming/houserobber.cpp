#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


// Figure out recursive relation.
// A robber has 2 options: a) rob current house i; b) don't rob current house.
// If an option "a" is selected it means she can't rob previous i-1 house but can safely proceed to the one before previous i-2 and gets all cumulative loot that follows.
// If an option "b" is selected the robber gets all the possible loot from robbery of i-1 and all the following buildings.
// So it boils down to calculating what is more profitable:

// robbery of current house + loot from houses before the previous
// loot from the previous house robbery and any loot captured before that
// rob(i) = Math.max( rob(i - 2) + currentHouseValue, rob(i - 1) )
vector<int> memo;
int rob(vector<int> &num,int index)
{
	if(index<0)
		return 0;
	if(memo[index]!=-1)
	{
		return memo[index];
	}
	int res=max(rob(num,index-2)+num[index],rob(num,index-1));
	memo[index]=res;
	
	return res;
}
int rob(vector<int> &num)
{
	memo.assign(num.size(),-1);
	return rob(num,num.size()-1);
}
int main()
{
	vector<int> input={114,117,207,117,235,82,90,67,143,146,53,108,200,91,80,223,58,170,110,236,81,90,222,160,165,195,187,199,114,235,197,187,69,129,64,214,228,78,188,67,205,94,205,169,241,202,144,240};
	int res=rob(input);
	cout<<res;
	return 0;
}