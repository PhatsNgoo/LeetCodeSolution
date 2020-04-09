#include <iostream>
#include <algorithm>
#include "vector"
using namespace std;

int maxProfit(vector<int> &prices)
{
	if (prices.size() == 0)
	{
		return 0;
	}
	int min = prices[0];
	int minIndex = 0;
	int maxIndex = 0;
	int max = 0;
	int maxProfit = 0;
	for (int i = 0; i < prices.size(); i++)
	{
		if (prices[i] < min)
		{
			min = prices[i];
			minIndex = i;
		}
		else if (prices[i] > max)
		{
			max = prices[i];
			maxIndex = i;
		}
		if (minIndex > maxIndex)
		{
			max = prices[minIndex];
			maxIndex = minIndex;
		}
		if (maxIndex > minIndex && max - min > maxProfit)
		{
			/* code */
			maxProfit = max - min;
		}
	}
	return maxProfit;
}

int betterSolution(vector<int> &prices)
{

	int min = INT_MAX;
	int maxProfit = 0;
	for (int i = 0; i < prices.size(); i++)
	{
		min = std::min(min, prices[i]);
		maxProfit = std::max(maxProfit, prices[i] - min);
	}
	return maxProfit;
}
int main()
{
	return 0;
}