#include <iostream>
using namespace std;

bool divisorGame(int n){
	return n%2==0;
}
int main(){
	cout<<divisorGame(24);
	return 0;
}