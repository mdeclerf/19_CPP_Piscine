#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <string>
#include <iostream>
#include <stdexcept>
#include <algorithm>
#include <stack>

//https://en.cppreference.com/w/cpp/container/stack/top
//https://en.cppreference.com/w/cpp/container/stack/empty
//https://en.cppreference.com/w/cpp/container/stack/size
//https://en.cppreference.com/w/cpp/container/stack/pop


template <typename T>
class MutantStack : public std::stack<T> // the templated class MutantStack inherits from std::stack
{
	public:
		MutantStack(void) { return; }

		MutantStack(MutantStack<T> const & src) {(void)src ;}
		virtual ~MutantStack() { return; }
		MutantStack<T> &operator=(MutantStack<T> const & rhs) {(void)rhs; return (*this);}

		virtual T				&top(void) {return (std::stack<T>::top());}
		virtual bool			empty(void) {return(std::stack<T>::empty());}
		virtual unsigned int	size(void) {return(std::stack<T>::size());}
		virtual void			push(T nb) {std::stack<T>::push(nb);}
		virtual void			pop(void) {std::stack<T>::pop();}

		typedef T* iterator; // definition of iterator : pointer to T->any type of value put in the template
		MutantStack<T>::iterator	begin(void) { return (&this->top() - this->size() + 1);}
		MutantStack<T>::iterator	end(void) { return (&this->top() + 1);};
};

#endif