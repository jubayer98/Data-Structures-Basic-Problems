#ifndef RECTANGLE_H_INCLUDED
#define RECTANGLE_H_INCLUDED

template<class T>
class rectangle
{
private:
    T width;
    T height;
    T area;

public:
    rectangle();
    void setWidth(T);
    void setHeight(T);
    T computeArea();
};


#endif // RECTANGLE_H_INCLUDED
