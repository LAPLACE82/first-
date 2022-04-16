#include<iostream>
#include<unistd.h>
#include<unistd.h>
using namespace std;
class Cperson
{
	private:
		Cperson(){}
		~Cperson(){}
	private:
		static Cperson * ps;
		static pthread_mutex_t lock;
}
