#ifndef DYNARRAY_H
#define DYNARRAY_H

template <typename T>
class DynArray{
    T *data;
    int length;
    int reallength;
public:
    DynArray();
    DynArray(const DynArray &obj);
    ~DynArray();
    void push();
    T& operator [](int index) { return data[index]; }
};

#endif // DYNARRAY_H
