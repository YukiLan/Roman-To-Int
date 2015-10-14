#include<iostream>
using namespace std;

class Solution
{
public:
	int charToInt (char c)
	{
		switch(c)
		{
			case 'I':
				return 1;
				//break;
			case 'V':
				return 5;
				//break;
			case 'X':
				return 10;
				//break;
			case 'L':
				return 50;
			case 'C':
				return 100;
			case 'D':
				return 500;
			case 'M':
				return 1000;
			default:
				return 0;
		}
	}
	int romanToInt(string s)
	{
		int result=0;
		for(int i=0;i<s.size();i++)
		{
			if(i>0 && charToInt(s[i])<=charToInt(s[i-1]))
				result=result+charToInt(s[i]);
			else
				result=result+charToInt(s[i])-2*charToInt(s[i-1]);
		}
		return result;
	}
};
int main()
{
	string s;
	cin>>s;
	Solution Result;
	cout<<Result.romanToInt(s)<<endl;
	return 0;
}