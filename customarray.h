
#ifndef CUSTOMARRAY_H
#define CUSTOMARRAY_H
#include <string>
template<class T>
class CustomArray
{
public:
    CustomArray();

    void append(T &item);
    void append(T item);

    void removeItemByIndex(int index);

    T &operator[](int index);

    ~CustomArray();

    int length() const;

private:
    T *m_storage;
    int m_total_size;
    int m_length;
};

#endif // CUSTOMARRAY_H
