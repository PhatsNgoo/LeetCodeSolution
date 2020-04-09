#include <iostream>
#include <string>
#include <map>
#include <queue>
using namespace std;

bool isSubsequence(string s,string t)
{
	if(t.size()<s.size()){
		return false;
	}
	std::queue<char> queue;
	for(int i=0;i<s.size();i++)
	{
		queue.push(s[i]);
	}
	for(int i=0;i<t.size();i++){
		if(t[i]==queue.front())
		{
			queue.pop();
		}
	}
	return queue.size()==0;
}

bool betterSolution(string s,string t)
{
	int index=0;
	for(int i=0;i<t.size;i++)
	{
		if(s[index]==t[i]) index++;
	}
	return index==s.size();
}
int main(){
	bool test=isSubsequence("asdasdddd","ffddsf");
	cout<<test;
	return 0;
}