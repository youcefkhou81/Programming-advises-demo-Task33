#include <iostream>
#include<string>

using  namespace std;

string ReadString()
{
	string S1;
	cout << "\nPlease Enter Your String?\n";
	getline(cin, S1);
	return S1;
}

bool IsVowel(string S1,char A)
{
	A = tolower(A);
	return ((A == 'a') || (A == 'e') || (A == 'i') || (A == 'o') || (A == 'u'));
}


short CountVowel(string S1)
{
	short Counter = 0;
	for (short i = 0; i < S1.length(); i++)
	{
		Counter++;
	}
	return Counter; 
}
int main()
{
	
	string S1 = ReadString();
	cout << "\nNumber of Vowel is : " <<CountVowel(S1)<< endl; 
	system("pause > 0 ");

}