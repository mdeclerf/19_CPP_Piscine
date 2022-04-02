#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <string>
#include <iostream>
#include <stdexcept>
#include <algorithm>
#include <list>

//Make a template function called easyfind, templated on a type T, that takes a T and an int.
//Assume the T is a container of int, and find the first occurrence of 
//the second parameter in the first parameter.

class Notinthelist : public std::exception
{
	public: 
		virtual const char* what() const throw()
		{
			return ("Element not in the list");
		}
};

template<typename T>
typename T::iterator easyfind(T & list, int needle)
{
	typename T::iterator it; // return value: an iterator to the first occurence of needle in list
	
	// list.begin() : Returns an iterator pointing to the first element in the list container.
	// list.end() : Returns an iterator referring to the past-the-end element in the list container.
	// The past-the-end element is the theoretical element that would follow the last element in the list container.
	it = std::find(list.begin(), list.end(), needle);
	if (it == list.end())
		throw Notinthelist();
	else
		return it;
}

#endif