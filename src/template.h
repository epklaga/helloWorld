

#include <iostream>
using namespace std;
template <class T>
class myTest {
	private:
	T values[2];
	public:
	myTest ( T first, T second);
	~myTest ();
	void print();
};
template <class T>
myTest <T> :: myTest (T first, T second){
	values[0] = first;
	values[1] = second;
}
template <class T>
myTest <T> :: ~myTest (){
	;
}
template <class T>
void myTest <T> :: print() {
	cout << "In template class funtion print" << endl;
	cout << "Par 1 = " << values[0] << endl;
	cout << "Par 2 = " << values[1] << endl;
}