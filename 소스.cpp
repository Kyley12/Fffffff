/*
* #include <iostream>
#pragma warning(disable: 4996)
using namespace std;

class First {
private:
	char* strOne;
public:
	First(const char* str) {
		strOne = new char[strlen(str) + 1];
	}
	virtual ~First() {
		cout << "~First()" << endl;
		delete[]strOne;
	}
};

class Second: public First {
private:
	char* strTwo;
public:
	Second(const char * str1, const char* str2) : First(str1) {
		strTwo = new char[strlen(str2) + 1];
	}
	virtual ~Second() {
		cout << "~Second()" << endl;
		delete[]strTwo;
	}
};

int main(void) {
	First* ptr = new Second("simple", "complex");
	delete ptr;
	return 0;
}
*/

#include <iostream>
using namespace std;

class First
{
public:
	First(int num)
		: mNum(num)
	{

	}
	virtual void SimpleFunc() { cout << "First's SimpleFunc()" << endl; }

private:
	int mNum;
};

class Second: public First
{
public:
	void SecondFunc() { cout << "SecondFunc()" << endl; }
	virtual void SimpleFunc() { cout << "Second's SimpleFunc()" << endl; }
};

class Third : public Second
{
public:
	void ThirFunc() { cout << "ThirdFunc()" << endl; }
	virtual void SimpleFunc() { cout << "Third's SimpleFunc()" << endl; }
};
/*
int main(void) {
	Third obj;
	obj.FirstFunc();
	obj.SecondFunc();
	obj.ThirFunc();
	obj.SimpleFunc();

	Second& sref = obj;
	sref.FirstFunc();
	sref.SecondFunc();
	sref.SimpleFunc();

	First& fref = obj;
	fref.FirstFunc();
	fref.SimpleFunc();
	return 0;
}
*/

int main(void)
{


	return 0;
}