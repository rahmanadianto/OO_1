/* Author : Husni Munaya */
/* NIM 		: 13513022 */

#ifndef STACK_
#define STACK_

#include <cassert>

/**
* Stack class. menangani penyimpanan secara First In Last Out
*/
template <class T>
class stack {
public:
	/**
	* A constructor.
	* Membuat size menjadi defsize
	* Membuat TopStack menjadi  = 0
	* membuat data<T> baru berukuran size
	*/
	stack();

	/**
	* A constructor.
	* Membuat size menjadi _size
	* Membuat TopStack menjadi  = 0
	* membuat data<T> baru berukuran size
	* @param _size ukuran stack
	*/
	stack(int _size);

	/**
	* A copy constructor.
	* Membuat size menjadi s.size
	* Membuat TopStack menjadi  = s.TopStack
	* membuat data<T> baru berukuran size
	* mengisi nilai s.data ke data 
	* @param s stack yang dicopy
	*/
	stack(const stack<T>& s);

	/**
	* An operator = 
	* mendelete data<T>
	* Membuat size menjadi s.size
	* Membuat TopStack menjadi  = s.TopStack
	* membuat data<T> baru berukuran size
	* mengisi nilai s.data ke data 
	* @param s stack yang dicopy
	*/
	stack<T>& operator=(const stack<T>& s);

	/**
	* A destructor
	* mendelete data<T>
	*/
	~stack();

	/**
	* public void 
	* mengurangi elemen di TopStack
	* prekondisi stack tidak kosong
	*/
	void pop();

	/**
	* public void 
	* memasukkan elemen el ke TopStack
	* @param el elemen baru
	*/
	void push(T el);

	/**
	* public function
	* mendapatkan info dari TopStack
	* @return info elemen TopStack(T)
	* prekondisi stack tidak kosong
	*/
	T top();

	/**
	* public function
	* mendapatkan length dari TopStack
	* @return panjang stack dalam integer
	*/
	int length();

	/**
	* public function
	* bernilai true jika TopStack ==0
	* @return bool stack kosong atau tidak
	*/
	bool empty();

	/**
	* public function
	* bernilai true jika TopStack == size
	* @return bool stack full atau tidak
	*/
	bool isFull();

	/**
	* public void
	* meresize ukuran stack
	*/
	void grow();

private:
	/**
	* static const
	* grow unit untuk menggrow stack
	*/
	static const int growUnit = 50;

	/**
	* static const
	* defaultsize
	*/
	static const int defSize = 50; 

	/**
	* private attribute
	* posisi top
	*/
	int topStack;

	/**
	* private attribute
	* ukuran stack
	*/
	int size;

	/**
	* private attribute
	* isi stack
	*/
	T* data;
};

template <class T>
stack<T>::stack() {
	size = defSize;
	topStack = 0;
	data = new T [size];
}

template <class T>
stack<T>::stack(int _size) {
	size = _size;
	topStack = 0;
	data = new T [size];
}

template <class T>
stack<T>::stack(const stack<T>& s) {
	size = s.size;
	topStack = s.topStack;
	data = new T [size];

	for (int i = 0; i < topStack; i++) {
		data[i] = s.data[i];
	}
}

template <class T>
stack<T>& stack<T>::operator=(const stack<T>& s) {
	delete [] data;
	size = s.size;
	topStack = s.topStack;
	data = new T [size];

	for (int i = 0; i < topStack; i++) {
		data[i] = s.data[i];
	}

	return *this;
}

template <class T>
stack<T>::~stack() {
	delete [] data;
}

template <class T>
void stack<T>::push(T el) {
	if (isFull()) {
		grow();
	}
	data[topStack] = el;
	topStack++;
}

template <class T>
void stack<T>::pop() {
	assert(!empty());
		topStack--;
}

template <class T>
T stack<T>::top() {
	return data[topStack-1];
}

template <class T>
int stack<T>::length() {
	return topStack;
}

template <class T>
bool stack<T>::empty() {
	return topStack == 0;
}	

template <class T>
bool stack<T>::isFull() {
	return topStack == size;
}

template <class T>
void stack<T>::grow() {
	size += growUnit;
	T* newData = new T[size];

	for (int i = 0; i < topStack; i++) {
		newData[i] = data[i];
	}

	delete [] data;
	data = newData;
}

#endif