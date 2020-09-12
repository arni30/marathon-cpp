#pragma once
#include <iostream>
#include <algorithm>
#include <exception>
namespace CBL {
	template<class T>
	class Vector {
		public:
			using iterator = T*;
			Vector();//
			explicit Vector(size_t size);//+
			Vector(size_t size, const T& value);//+
			Vector(iterator first, iterator last);//+
			Vector(const std::initializer_list<T>& lst);//+
			Vector(const Vector<T>& other);//+
			~Vector();
			Vector<T>& operator=(const Vector<T>& other);
			bool operator==(const Vector<T>& other) const;
			bool operator!=(const Vector<T>& other) const;
			bool operator<(const Vector<T>& other) const;
			bool operator>(const Vector<T>& other) const;
			bool operator<=(const Vector<T>& other) const;
			bool operator>=(const Vector<T>& other) const;
			// iterators
			iterator begin() const;//+
			iterator end() const;//+
			// capacity
			size_t size() const;//+
			size_t capacity() const;//+
			bool isEmpty() const;//+
			void resize(size_t size, const T& value= T());//+
			void reserve(size_t size);//+
			// element access
			T& operator[](size_t index) const;//+
			T& at(size_t index) const; //+
			T* data() const;//+
			// modifiers
			void push_back(const T& value);//+
			void pop_back();//+
			iterator insert(iterator pos, const T& value);//+
			iterator erase(iterator pos);
			iterator erase(iterator first, iterator last);
			void clear();
		private:
            size_t m_size{0};
            size_t m_capacity{0};
            T* m_buffer{nullptr};
		};
    template<class T>
    Vector<T>::Vector() : Vector(0){
//        std::cout << "other "<<m_size<<"\nm_size " <<m_size << std::endl;
    }

    template<class T>
    Vector<T>::~Vector() {
        m_size = 0;
        m_capacity = 0;
        if (m_buffer != nullptr)
            delete [] m_buffer;
    }

    template<class T>
    Vector<T>::Vector(size_t size) : m_size(size), m_capacity(size) {
        m_buffer = new T[size];
//        for(size_t i = 0; i < size; i++) {
//            m_buffer[i] = 0;
//        }
    }
    template<class T>
    Vector<T>::Vector(const std::initializer_list<T>& lst) :
        Vector(iterator(lst.begin()), iterator(lst.end())) {}
    template<class T>
    Vector<T>::Vector(const Vector<T> &other) {
        m_size = other.m_size;
        m_capacity = other.m_capacity;
        m_buffer = new T[m_size];
        for (auto i = 0ul; i < m_size; i++)
            m_buffer[i] = other.m_buffer[i];

    }

    template<class T>
    Vector<T>::Vector(size_t size, const T &value) :
    m_size(size),
    m_capacity(size) {
        m_buffer = new T[size];
        for(size_t i = 0; i < size; i++) {
            m_buffer[i] = value;
        }
    }

    template<class T>
    Vector<T>::Vector(iterator first, iterator last) {
        m_size = std::distance(first, last);
        m_capacity = m_size;
        m_buffer = new T[m_size];
        for (auto i = 0ul; i < m_size; i++) {
            m_buffer[i] = *first++;
        }
    }
    /*<------------------------------------------------>*/
    /* Operators */
    template<class T>
    bool Vector<T>::operator==(const Vector<T>& other) const {
        return std::lexicographical_compare(this->begin(), this->end(),
                                            other.begin(), other.end(), [](T&a, T&b){return a == b;});
    }
    template<class T>
    bool Vector<T>::operator!=(const Vector<T>& other) const {
        return std::lexicographical_compare(this->begin(), this->end(),
                                            other.begin(), other.end(), [](T&a, T&b){return a != b;});
    }
    template<class T>
    bool Vector<T>::operator<(const Vector<T>& other) const {
        return std::lexicographical_compare(this->begin(), this->end(),
                                            other.begin(), other.end());
    }
    template<class T>
    bool Vector<T>::operator>(const Vector<T>& other) const {
        return !(std::lexicographical_compare(this->begin(), this->end(),
                                              other.begin(), other.end())) && this->m_buffer != other.m_buffer;
    }
    template<class T>
    bool Vector<T>::operator<=(const Vector<T>& other) const {
        return std::lexicographical_compare(this->begin(), this->end(),
                                            other.begin(), other.end(), [](T&a, T&b){return a <= b;});
    }
    template<class T>
    bool Vector<T>::operator>=(const Vector<T>& other) const {
        return std::lexicographical_compare(this->begin(), this->end(),
                                            other.begin(), other.end(), [](T&a, T&b){return a >= b;});
    }

    template<class T>
    Vector<T>& Vector<T>::operator=(const Vector<T> &other) {
        delete[] m_buffer;
        m_size = other.m_size;
        m_capacity = other.m_capacity;
        m_buffer = new T [m_size];
        std::cout << "other "<< other.m_size<<"\nm_size " <<m_size << std::endl;
        for (auto i = 0ul; i < m_size; i++)
            m_buffer[i] = other.m_buffer[i];
        return *this;
    }
    /*<------------------------------------------------>*/
    /* Iterators */
    template <class T>
    typename Vector<T>::iterator Vector<T>::begin() const {
        return m_buffer;
    }

    template <class T>
    typename Vector<T>::iterator Vector<T>::end() const {
        return m_buffer + size();
    }
    /*<------------------------------------------------>*/
                        /* Capacity */
    template<class T>
    size_t Vector<T>::size() const {
        return m_size;
    }
    template<class T>
    size_t Vector<T>::capacity() const {
        return m_capacity;
    }
    template<class T>
    bool Vector<T>::isEmpty() const {
        if (m_size <= 0)
            return true;
        else
            return false;
    }
    template<class T>
    void Vector<T>::resize(size_t size, const T& value) {
            size_t temp = m_size;

            reserve(size);
            m_size = size;
            if (m_capacity < m_size)
            m_capacity = m_size;
            for (auto i = temp; i < size; i++)
                m_buffer[i] = value;
    }
    template<class T>
    void Vector<T>::reserve(size_t size) {
        if(size < m_size)
            return;

        T *arr = new T[size];
        for(size_t k = 0; k < m_size; ++k)
            arr[k] = std::move(m_buffer[k]);
        if(m_capacity < size)
            m_capacity *= 2;
        //m_capacity = size;
        std::swap(m_buffer, arr);
        delete [] arr;
    }
    /*<------------------------------------------------>*/
                        /* Element access */
    template<class T>
    T& Vector<T>::operator[](size_t index) const{
        return m_buffer[index];
    }
    template <class T>
    T& Vector<T>::at(size_t index) const {
        if (index >= size())
            throw std::out_of_range("Vector");
        return this->begin()[index];
    }

    template<class T>
    T* Vector<T>::data() const {
        return begin();
    }
    /*<------------------------------------------------>*/
    /* Modifires */

    template<class T>
    void Vector<T>::push_back(const T& value) {
        if (m_capacity == 0) {
            m_capacity = 1;
            m_buffer = new T[1];
        }
        else if(m_size == m_capacity)
            reserve(2 * m_capacity);
        m_buffer[m_size++] = value;
    }
    template <class T>
    void Vector<T>::pop_back() {
        m_size--;
    }

    template<class T>
    typename Vector<T>::iterator Vector<T>::insert(iterator pos, const T& value) {
        size_t index = std::distance(begin(), pos);
        if (index < 0 || index > m_size)
            throw std::out_of_range("Vector: ");
        for (size_t i = m_size; i > index; i--)
            m_buffer[i] = m_buffer[i - 1];
        m_buffer[index] = value;
        m_size++;
        if (m_size > m_capacity)
            reserve(m_capacity*2);
        return begin();
    }

    template<class T>
    typename Vector<T>::iterator Vector<T>::erase(iterator pos) {
        size_t i = 0;
        size_t dst = std::distance(begin(), pos);

        for (i = dst; i < size() ; i++) {
            m_buffer[i] = m_buffer[i+1];
        }
        m_size--;
        return pos;
    }
//
    template<class T>
    typename Vector<T>::iterator Vector<T>::erase(iterator first, iterator last) {
        for (auto i = 0l; i < last - first; i++)
            erase(first);
        return first;

    }

    template<class T>
    void Vector<T>::clear() {
        m_size = 0;
    }


} //CBL                                                                                
