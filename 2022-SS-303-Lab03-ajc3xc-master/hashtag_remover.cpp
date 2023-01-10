#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
ifstream fin;
ofstream fout;
string line;
int length;

fin.open("story.txt");
fout.open("temp.txt");

while(getline(fin, line))
{
	length = line.length();
	bool hasChar = false;
	for(int i = 0; i < length; i++)
	{
		if(line[i]=='#') hasChar = true;
	}
	if(!hasChar)	fout<<line<<endl;
}

fin.close();
fout.close();

remove("story.txt");
rename("temp.txt", "story.txt");

}
