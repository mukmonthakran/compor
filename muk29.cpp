#include<iostream>
#include<string>
#include <time.h>
#include <iomanip>
using namespace std;
int main()
{  
	string S = "Microsoft Visual Studio.Net";
	cout<<S.length()<<endl;
	cout<<S.size()<<endl;
	cout<<S.c_str()<<endl;
	cout<<S.at(15)<<endl;
	S.append("2010");
	for(int i=0;i<S.length();i++)
	{	cout<<S.at(i)<<"-";
	}
	cout<<endl;
	cout<<S.substr(10,6)<<endl;
	cout<<S.find('s')<<endl;
	S.replace(10,6,"C++");
	cout<<S<<endl;
    system("pause");
    return(0);
}