#include <iostream>
#include <fstream>
using namespace std;
int main(int argc, char const *argv[])
{
 	ifstream fin;
 	ofstream fout;
	ofstream file_variable_name;
	ofstream file_to_be_appended;

	file_variable_name.open("variable_name.txt", ios::out);
	file_to_be_appended.open("fixed_name.txt", ios::out | ios::app);

	file_variable_name << "write something" << endl;
	file_to_be_appended << "write same as above, but this is to be appended" << endl;

	file_variable_name.close();
	file_to_be_appended.close();

	
	// check if there are enough arguments
	
	
	// open the first file
 	
	char c;

 	if (fin.fail()) // check if it is successful 
 	{
 		cerr << " Cannot open the input file!" << endl;
 		return 1;
 	}
 	

	// open the second file
	
 	if (fout.fail())
 	{
 		cerr << " Cannot open the output file!" << endl;
 		return 1;
 	}
 	
 	while(fin.get(c)) 
	{
		fout << c;
	}
 	
 	fin.close(); 

 	fout.close();

 	 return 0;

 }