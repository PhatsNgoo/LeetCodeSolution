#include <iostream>
#include "vector"
#include <algorithm>
using namespace std;

int minCostClimbingStairs(vector<int> &cost)
{
	int result=0;
	int size=cost.size();
	int step=0;
	int i=size-1;
	while(i>0){
		step=cost[i]<cost[i-1]?2:1;
		result+=cost[i]<cost[i-1]?cost[i]:cost[i-1];
		i-=step;
	}
	return result;
}

int main()
{
	return 0;
}