#include "vector.h"
#include <iostream>
#include <stdexcept>

using namespace std;

namespace MyVector{

	//Standard contructor
	template< class T >
	Vector<T>::Vector( int _size, T value ) : 
			   size(_size), 
			   elements(new T[size]){
		if(size <= 0){
			throw std::invalid_argument( "[Vector::Vector]: Size of Vetor is invalid!" );
		}else{
			for(auto i(0); i < size; ++i){
				elements[i] = value;
			}
		}
	}
	
	//Second constructor
	template < class T>
	Vector<T>::Vector(int newsize, T * otherVector){
		if(size <= 0){
			throw std::invalid_argument( "[Vector::Vector]: Size of Vetor is invalid!" );
		}else{
			size = newsize;
			delete [] elements;

			elements = new int[size];
			for(auto i(0); i < size; ++i){
				elements[i] = otherVector[i];
			}
		}
	}

	//Destructor
	template < class T >
	Vector<T>::~Vector( void ){
		delete [] elements;
	}

	//fill method
	template < class T >
	void Vector<T>::fill( T value ){
		for(auto i(0); i < size; ++i){
			elements[i] = value;
		}
	}

	//print vector method
	template < class T >
	void Vector<T>::printVector( void ){
		cout<<"Vector : [ ";
		for(auto i(0); i < size; ++i){
			cout<<elements[i]<<" ";
		}
		cout<<"]"<<endl;
	}

	//Get element
	template < class T >
	const T Vector<T>::operator[](int index) const{
		if(index < 0 && index > size){
			throw std::out_of_range( "Index provided out of valid range!" );
		}

		return elements[index];
	}

	template < class T >
	T Vector<T>::at(int index) const{
		if(index < 0 && index > size){
			throw std::out_of_range( "Index provided out of valid range!" );
		}else{
			return elements[index];
		}
	}

	// Allocation 
	template < class T >
	Vector<T>& Vector<T>::operator=(const Vector<T> & otherVector){
		if(this != &otherVector){
			if(size != otherVector.size){
				delete [] elements;
				
				size = otherVector.size;
				elements = new T[size];
			}
			for(auto i (0); i < size; ++i){
				elements[i] = otherVector.elements[i];
			}
		}

		return *this;
	}

	template < class T >
	void Vector<T>::assign(const Vector<T> & otherVector){

		if(this != &otherVector){
			if(size != otherVector.size){
				delete [] elements;
				
				size = otherVector.size;
				elements = new T[size];
			}
			for(auto i (0); i < size; ++i){
				elements[i] = otherVector.elements[i];
			}
		}
	}

	//Reveive
	template < class T >
	T& Vector<T>::operator[](int index){
		if(index < 0 && index > size){
			throw std::out_of_range( "Index provided out of valid range!" );
		}

		return elements[index];
	}

	template < class T >
	void Vector<T>::assignAt(int index, T value) const{
		if(index < 0 && index > size){
			throw std::out_of_range( "Index provided out of valid range!" );
		}else{
			elements[index] = value;
		}
	}

	//Compare
	template < class T >
	bool Vector<T>::operator==(const Vector<T> & otherVector) const{
		if(this == &otherVector)
			return true;
		else if(size != otherVector.size)
			return false;
		else
			for(auto i (0); i < size; ++i){
				if(elements[i] != otherVector.elements[i])
					return false;
			}
		return true;
	}

	template < class T >
	bool Vector<T>::isEqual(const Vector<T> & otherVector) const{
		if(this == &otherVector)
			return true;
		else if(size != otherVector.size)
			return false;
		else
			for(auto i (0); i < size; ++i){
				if(elements[i] != otherVector.elements[i])
					return false;
			}
		return true;
	}

	// Invert of vector
	template < class T >
	void Vector<T>::reverse(){ 
		for(auto i (0); i < size/2; ++i){
			auto aux = elements[i];
			elements[i] = elements[size - 1 - i];
			elements[size - 1 - i] = aux;
		}
	}

}	