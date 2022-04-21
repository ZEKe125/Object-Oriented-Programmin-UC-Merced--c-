#include <iostream>
using namespace std;

class Counter
{

public:
	int ID;
	static int count;

	Counter() : ID(count++)
	{

		// cout << this->ID << " created" << endl;
	};

	~Counter()
	{
		// cout << this->ID << " destroyed" << endl;
	};

	// void *operator new(size_t sz)
	// {
	// 	cout << "new" << endl;
	// 	return ::new char[sz]; // call global new
	// }

	// void operator delete(void *m)
	// {
	// 	cout << "delete" << endl;
	// 	free(m);
	// }

	void *operator new[](size_t sz)
	{	
		int s = count;
		cout << "new " << (sz / sizeof(Counter)) + 1 ;
		 cout << " counters startying at " << s << endl;

		return ::new char[sz]; // call global new
	}

	void operator delete[](void *p)
	{
		cout << "delete  couters " << endl; // call global delete
		::delete[] p;
	}
};
