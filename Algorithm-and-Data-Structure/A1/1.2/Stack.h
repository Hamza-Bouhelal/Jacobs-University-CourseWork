#include <iostream>
using namespace std;
template <class T>
class Stack
{
	T *ptr;			// data will be stored in an array
	int Size;		// number of elements in the array
	int where;  	// last non-free position
	void extend();  // used to expand the vector when it is full
public:
	Stack();
	~Stack();
	Stack(const Stack&);
	Stack(int size);
	bool push(T element);	// inserts an element
	bool pop(T& out);			// returns and extracts an element
	T Back(void);
	int getNumEntries();
    void printStackValues();
};

template <class T>
Stack<T>::Stack(){
ptr = new T[10];
Size = 10;
where = -1;
}

template<class T>
Stack<T>::~Stack()
{
	delete[] ptr;
}

template <class T>
Stack<T>::Stack(const Stack &Sta){
ptr= Sta.ptr;
Size = Sta.Size;
where = Sta.where;
}

template <class T>
Stack<T>::Stack(int size0){
Size=size0;
}

template<class T>
bool Stack<T>::push(T element)
{
	if (where + 1 == Size)	// no room?
		extend();			// expand the vector
	where++;				// and insert the element
	ptr[where] = element;
	return true;
}

template<class T>
bool Stack<T>::pop(T& out)
{
	if (where == -1)
		return false;
	out = ptr[where--];
	return true;
}

template<class T>
void Stack<T>::extend()
{
	T *newptr = new T[2 * Size];	// creates a new vector with double size
	for (int i = 0; i < Size; i++)	// copy the old elements
		newptr[i] = ptr[i];
	delete[] ptr;	// release old memory
	ptr = newptr;	// adjust pointers
	Size *= 2;		// store the new size
}
template <class T>
T Stack<T>::Back(void){
return ptr[where];
}
template <class T>
int Stack<T>::getNumEntries(){
return where+1;
}
template <class T>
void Stack<T>::printStackValues(){
for(int i=where;i>=0;i--)
    cout<<ptr[where-i]<<" ";
cout<<endl;
}

