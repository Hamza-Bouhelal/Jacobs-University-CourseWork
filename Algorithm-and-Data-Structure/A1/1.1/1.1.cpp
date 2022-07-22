/*
	CH-231-A
	hw1_p1.cpp
	Hamza Bouhelal
	h.bouhelal@jacobs-university.de
*/
#include <iostream>
using namespace std;
template <class T>
int array_search(T arr[],int n, T ele){
for(int i=0;i<n;i++){
    if (arr[i]==ele)
        return i;
}
return -1;
}

class Complex {
	private:
		double re, im;
	public:
		Complex(double re, double im) {
			this->re = re;
			this->im = im;
		}
		Complex& operator=(const Complex o) {
			this->re = o.re;
			this->im = o.im;
			return *this;
		}
		Complex operator+(const Complex o) {
			return Complex(this->re + o.re, this->im + o.im);
		}
		bool operator==(const Complex o){
            if(this->re == o.re && this->im ==o.im)
                return true;
            else
                return false;
		}
		friend ostream& operator<<(ostream &o, Complex c) {
			o << c.re << "+" << c.im << "i" << endl;
			return o;
		}
};


int main(){
char str[]="hello";
cout<<"The position of l in Hello: "<<array_search(str, 5, 'l')<<endl;
cout<<"The position of s in Hello: "<<array_search(str, 5, 's')<<endl;
int arr[]= {6,4,7,8,5};
cout<<"The position of 4 in the array of ints: "<<array_search(arr,5, 4)<<endl;
Complex carr[]= {Complex(1, 2), Complex(3, 4), Complex(-3, -5)};
cout<<"The position of 3+4i in the array of complex: "<<array_search(carr,3, Complex(3,4))<<endl;
return 0;
}
