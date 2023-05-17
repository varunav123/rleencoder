#include<iostream>
#include<fstream>
#include<sstream>
using namespace std;
int main()
{
	ifstream file;
	file.open("file.txt"); 
	string s;
	stringstream ss;
	ss << file.rdbuf(); 
	s = ss.str();
	file.close();
	int j = 1;
	ofstream fileout;
	fileout.open("fileout.txt");
	for (int i=0;i<s.size();i++)
	{
		if (s[i] == s[i + 1])
		{
			j = j + 1;
		}
		else
		{
			fileout << s[i] << j;
			j = 1;
		}
	}
	fileout.close();
}
