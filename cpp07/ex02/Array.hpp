#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template <typename T>
class Array
{
	private:
			int	length;
			T	*data;
	public:
			Array()
			{
				length = 0;
				data = NULL;
			}
			Array(unsigned int n)
			{
				if (n < 0)
					std::cerr << "Error: length of array cannot be negative" << std::endl;
				this->length = n;
				this->data = new T[n];
			}
			Array(const Array& copy)
			{
				if (copy.data)
				{
					this->length = copy.size();
					this->data = new T[copy.size()];
					for (int i = 0; i < this->size(); i++)
						this->data[i] = copy.data[i];
				}
				else
				{
					this->data = 0;
					this->length = copy.size();
				}
			}
			~Array()
			{
				if (this->length > 0)
					delete [] this->data;
			}
			Array& operator=(const Array & copy)
			{
				if (this == &copy)
					return *this;
				if (this->length > 0)
					delete [] this->data;
				if (copy.data)
				{
					this->length = copy.size();
					this->data = new T[copy.size()];
					for (int i = 0; i < this->size(); i++)
						this->data[i] = copy.data[i];
				}
				else
				{
					this->data = 0;
					this->length = copy.size();
				}
				return *this;
			}

			int		size() const
			{
				return (this->length);
			}

			T& operator[] (int index)
			{
				if (index < 0 || index >= this->length)
					throw ArrayException();
				return this->data[index];
			}

			class ArrayException: public std::exception
			{
				virtual const char* what() const throw()
				{
					return "Error: Index out of bounds of array";
				}
			};

};

#endif
