#ifndef TRIANGLE_H_INCLUDED
#define TRIANGLE_H_INCLUDED

template<class T>
class triangle
{
private:
    T base;
    T height;
    T area;
    T hypotenuse;

public:
    triangle();
    void setBase(T);
    void setHeight(T);
    T computeHypotenuse();
    T computeArea();
};

#endif // TRIANGLE_H_INCLUDED
