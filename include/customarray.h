
#ifndef CUSTOMARRAY_H
#define CUSTOMARRAY_H
#include <iostream>
#include <string>

template<class T>
class CustomArray
{
public:
    CustomArray();
    // copy constructor
    CustomArray(const CustomArray<T> arr) = delete;

    // assignment overloading
    CustomArray<T> &operator=(const CustomArray<T> &arr) = delete;

    void append(T &item);
    void append(T item);

    void removeItemByIndex(int index);

    T &operator[](int index);
    friend std::ostream &operator<<(std::ostream &out, const CustomArray<T> &customArray)
    {
        for (int i = 0; i < customArray.m_length; i++) {
            out << customArray.m_storage[i];
            if (i != customArray.m_length - 1)
                out << ", ";
        }
        return out;
    }

    ~CustomArray();

    int length() const;

private:
    T *m_storage;
    int m_total_size;
    int m_length;
};

#endif  // CUSTOMARRAY_H
