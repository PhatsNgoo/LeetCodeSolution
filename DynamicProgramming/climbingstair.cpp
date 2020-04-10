#include <iostream>
#include <vector>
#include <algorithm>

int climbStairs(int n)
{
	int f0 = 1;
	int f1 = 1;
	int f2 = 1;
	for (int i = 1; i < n; i++)
	{
		f0 = f1 + f2;
		f2 = f1;
		f1 = f0;
	}
	return f0;
}

int main()
{
	return 0;
}