#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream fout;
	fout.open("abc.txt",ios::app);
	fout<<"ICFAI UNIVERSITY \n ICFAI university is the best university \n ICFAI university have 7 schools.";
	
	fout.close();
	
	return 0;
}
