#ifndef STACK_
#define STACK_

template <class T>
class Stack {
public:
	// ctor
	Stack();
	// ctor dengan parameter
	Stack(int _size);
	// cctor
	Stack(const Stack<T>& s);
		
	Stack<T>& operator=(const Stack<T>& s);

	//dtor
	~Stack();

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
Stack<T>::Stack() {
	size = defSize;
	topStack = 0;
	data = new T [size];
}

template <class T>
Stack<T>::Stack(int _size) {
	size = _size;
	topStack = 0;
	data = new T [size];
}

template <class T>
Stack<T>::Stack(const Stack<T>& s) {
	size = s.size;
	topStack = s.topStack;
	data = new T [size];

	for (int i = 0; i < topStack; i++) {
		data[i] = s.data[i];
	}
}

template <class T>
Stack<T>& Stack<T>::operator=(const Stack<T>& s) {
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
Stack<T>::~Stack() {
	delete [] data;
}

template <class T>
void Stack<T>::push(T el) {
	if (isFull()) {
		grow();
	}
	data[topStack] = el;
	topStack++;
}
template <class T>
void Stack<T>::pop() {
	if (!empty()) {
		topStack--;
	}
}

template <class T>
T Stack<T>::top() {
	return data[topStack-1];
}

template <class T>
int Stack<T>::length() {
	return topStack;
}
template <class T>
bool Stack<T>::empty() {
	return topStack == 0;
}	

template <class T>
bool Stack<T>::isFull() {
	return topStack == size;
}

template <class T>
void Stack<T>::grow() {
	size += growUnit;
	T* newData = new T[size];

	for (int i = 0; i < topStack; i++) {
		newData[i] = data[i];
	}

	delete [] data;
	data = newData;
}
#endif