#include "plakat.hpp"
#include <iostream>

using namespace std;

int main(){
	unsigned n;
	unsigned result=0;
	cin>>n;
	result = startPoster(n);
	cout<<"minimalna liczba plakatow: "<<endl;
	cout<<result;
}
