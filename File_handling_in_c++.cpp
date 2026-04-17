#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream fout;
	fout.open("abc.txt");
	fout<<"ICFAI UNIVERSITY";
	
	fout.close();
	
	return 0;
	
}
