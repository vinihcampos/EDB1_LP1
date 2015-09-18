#ifndef _VECTOR_
#define _VECTOR_

//Namespace to my class
namespace MyVector{

	//Constants
	const int DEFAULT_SIZE = 10;
    const int DEFAULT_FILL_VAL = 0;

	//Template to allow the class Vector to store any type of object
	template < class T >
	//My own vector class
	class Vector{
		//Aattributes
		private:
			int size;
			T * elements;

		// Implemented methods
		public:
			// Return the number of elements of vector.
            // @return Number of elements storaged in vector.
            int sizeVector( void ) const { return size; }

		//Methods to use with the vector
		public:
			// Standard contructor of the class
			// @param _size Size of of the vector, by default (10 elements)
			// @param object Value to initialize all the position of the vector
			explicit Vector( int _size = DEFAULT_SIZE, T value = DEFAULT_FILL_VAL ); // OK

			// Second constructor
			Vector(int newsize, T * otherVector); // OK

			// Destructor of the class
			~Vector( void ); // OK

			// Fill the vector with a specific value of type T
			void fill ( T value ); // OK

			//Print vector
			void printVector( void ); // OK			

			// Get index by [] operator or at
			const T operator[](int index) const; // OK
			T at(int index) const; // OK

			// Set value by operator [] or assignAt
			T& operator[](int index); // OK
			void assignAt(int index, T value) const; // OK

			// Receive operation
			Vector<T> & operator=(const Vector<T> & otherVector); // OK
			void assign(const Vector<T> & otherVector); // OK

			// Compare two vectors
			bool operator==(const Vector<T> & otherVector) const;
			bool isEqual(const Vector<T> & otherVector) const;

			// Min element of vector
			T min( void ) const;

			// Max element of vector
			T max( void ) const;

			// Invert vector
			void reverse( void ); 

			// Resize the vector
            void resize( int newsize ); 

            // Fill with new size
            void fill( int newsize, T newVals[] ); 

            // Take repeated elements
            int unique( void ); // returns new size. 

            // Sort the vector
            void sort( void ); 

            // Swap the old vector by the vector passed by parameter
            void swap( Vector<T>& otherVector ); 
	};

}

#include "../src/vector.cpp"
#endif