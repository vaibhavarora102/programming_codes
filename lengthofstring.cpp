#include<iostream>
#include<string>
using namespace std;
class lengthstring{
	private:
		string str;
	public:
		lengthstring(string istring){
			str = istring;
		}
		void calculate(){
			int count=0;
			for(int i=0;str[i]!='\0';i++)
			{
				count++;
			}
			cout<<"THE LENGTH OF THE STRING IS "<<count<<endl;
		}
};
int main(){
	lengthstring s1("HEYY INDIA");
	lengthstring s2("C++ is a programming language");
	s1.calculate();
	s2.calculate();
	return 0;
}