#ifndef STACK_
#define STACK_

template <class T>
class stack {
public:
	// ctor
	stack();
	// ctor dengan parameter
	stack(int _size);
	// cctor
	stack(const stack<T>& s);
		
	stack<T>& operator=(const stack<T>& s);

	//dtor
	~stack();

	// pop stack
	void pop();

	// push el ke dalam stack
	void push(T el);

	// mereturn elemen top stack
	T top();

	// return length dari stack
	int length();

	// cek apakah stack kosong
	bool empty();

	// cek apakah stack full
	bool isFull();

	// meresize ukuran stack
	void grow();
private:
	static const int growUnit = 50;
	static const int defSize = 50; // default size untuk stack
	int topStack;
	int size;
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
	if (!empty()) {
		topStack--;
	}
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