#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <string>

template<typename T>
class Array
{
private:
   unsigned int _size;
   T *_value;
public:
    Array();
    Array(unsigned int n);
    Array(const Array &other);
    Array &operator=(const Array &other);
    const T &operator[](unsigned int i) const;
    T &operator[](unsigned int i);
    unsigned int size() const;
    ~Array();
};

template<typename T>
Array<T>::Array()
{
    _value = nullptr;
    _size = 0;
}


template<typename T>
Array<T>::~Array()
{
    delete[] _value;
}

template<typename T>
Array<T>::Array(unsigned int n)
{
    _size = n;
    _value = new T[_size]();
}

template<typename T>
Array<T>::Array(const Array &other)
{
    _size = other._size;
    _value = new T[_size];
    for (unsigned int i = 0; i < _size; i++)
        _value[i] = other._value[i];
}

template<typename T>
Array<T> &Array<T>::operator=(const Array &other)
{
    if (this != &other)
    {
        if (_value)
            delete[] _value;
        _size = other._size;
        _value = new T[_size];
        for (unsigned int i = 0; i < _size; i++)
            _value[i] = other._value[i];
    }
    return *this;
}

template<typename T>
const T &Array<T>::operator[](unsigned int i) const
{
    if (i < _size)
        return (_value[i]);
    throw std::out_of_range("The index is out of range");
    
}
template<typename T>
T &Array<T>::operator[](unsigned int i)
{
    if (i < _size)
        return (_value[i]);
    throw std::out_of_range("The index is out of range");
    
}

template <typename T>
unsigned int Array<T>::size() const
{
    return (_size);
}

#endif