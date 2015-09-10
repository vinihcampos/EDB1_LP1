#ifndef _SORTS_
#define _SORTS_

#include <iostream>

/*
* This class has/will have several functions to sort algorithms
* These function are static, so the user don't need to instantiate class
* To use the methods of class, it's only need use this form:
* 
* SortAlgorithms<type_of_object>::funtion_name( //PARAMETERS );
* Where:
*	- type_of_object is the type of your array
*	- function_name is the function that will be used
*/

template < class T>
class SortAlgorithms{

	public:
		/*
		* Function to sort elements in a specify interval of an array
		* using insertion sort algortithm.
		*
		* To use this function the user have to pass four parameters:
		*
		* @param V[] The array to sort
		* @param start The index of array to begin sort
		* @param end The index of array to finish sort
		* @param (*comp)(const T &, const T &) A generic function to do comparations in pairs.  
		*
		*/

		static void insertionSort(T V[], int start, int end, int (*comp)(const T &, const T &)){
			for(auto i (start + 1); i <= end; ++i){
				T key = V[i];
				int iterator = i - 1;
				while(iterator >= start && comp(key, V[iterator]) < 0){
					V[iterator + 1] = V[iterator];
					--iterator;
				}
				V[++iterator] = key;
			}
		}

		/*
		* Funtion to print any type array.
		* It's necessary redefine operator[] if the type of array isn't a primitive type. 
		* @param V[] The array to print
		* @param size The size of array 
		*/

		static void toString(T V[], int size){

			std::cout<<"[ ";

			for(auto i (0); i < size; ++i){
				std::cout<<V[i]<<" ";
			}

			std::cout<<"]"<<std::endl;
		
		}
};

#endif