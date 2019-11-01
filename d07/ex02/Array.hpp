/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/31 18:41:30 by jchiang-          #+#    #+#             */
/*   Updated: 2019/10/31 21:23:09 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <string>
#include <iostream>

template <typename T>
class Array {

	private:
		T * _array;
		unsigned int _sizeArray;
	
	public:
		// Default colpien format
		Array<T>(void) { _array = nullptr; _sizeArray = 0; }
		Array<T>(unsigned int sizeArray) {
			this->_sizeArray = sizeArray;
			_array  = new T [sizeArray];
		}
		Array<T>(const Array & copy) {
			_sizeArray = copy.getSizeArray();
			_array = new T [_sizeArray];
			for (int i = 0; i < _sizeArray; i++) {
				_array[i] = copy._array[i];
			}
		}
		~Array<T>(void) { delete [] _array; }
		Array<T> &operator = (const Array <T> & input) {
			if (this != &input) {
				if (_array)
					delete [] _array;
				_sizeArray = input.getSizeArray();
				_array = new T [_sizeArray];
				for (unsigned int i = 0; i < _sizeArray; i++) {
					_array[i] = input._array[i];
				}
			}
			return *this;
		}
		// Get function
		unsigned int getSizeArray(void) const { return _sizeArray; }

		// operator
		T &operator [] (unsigned int index) {
			if (index >= _sizeArray || !_array) {
				throw(OverboardException());
			} else {
				return _array[index];
			}
		}

		// nested class
		class OverboardException : public std::exception {
			public:
				OverboardException(void) { }
				OverboardException(const OverboardException & copy) { *this = copy; }
				~OverboardException(void) throw() { }
				OverboardException &operator = (const OverboardException & inputClass) {
					if (this != &inputClass)
						std::exception::operator = (inputClass);
					return *this;
				}
				virtual const char * what() const throw() {
					return ("Memory overborad. Index not exsist");
				}
		};
};

#endif
