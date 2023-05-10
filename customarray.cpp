
#include "customarray.h"

template<class T>
CustomArray<T>::CustomArray()
    : m_total_size(8)
    , m_length(0)
{
    m_storage = new T[m_total_size];
}

template<class T>
void CustomArray<T>::append(T &item)
{
    m_storage[m_length] = item;
    m_length++;
}

template<class T>
void CustomArray<T>::append(T item)
{
    if (m_length < m_total_size) {
        m_storage[m_length] = item;
        m_length++;
    } else {
        T *tmp = new T[m_total_size * 2];
        for (int i = 0; i < m_length; i++) {
            tmp[i] = m_storage[i];
        }
        delete[] m_storage;
        m_storage = tmp;
        m_storage[m_length] = item;
        m_length++;
    }
}

template<class T>
void CustomArray<T>::removeItemByIndex(int index)
{
    if (index >= m_length)
        throw -1;

    for (int i = index; i < m_length; i++) {
        m_storage[i] = m_storage[i + 1];
    }
}

template<class T>
T &CustomArray<T>::operator[](int index)
{
    if (index >= m_length) {
        throw -1;
    }

    return m_storage[index];
}

template<class T>
int CustomArray<T>::length() const
{
    return m_length;
}

template<class T>
CustomArray<T>::~CustomArray()
{
    delete[] m_storage;
}

// No need to call this TemporaryFunction() function,
// it's just to avoid link error.

template class CustomArray<float>;
template class CustomArray<int>;
template class CustomArray<long>;
template class CustomArray<double>;
template class CustomArray<long long>;
template class CustomArray<long double>;
template class CustomArray<short>;
template class CustomArray<char>;
template class CustomArray<char *>;
template class CustomArray<std::string>;
