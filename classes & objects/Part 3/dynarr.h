#ifndef DYNARR_H_INCLUDED
#define DYNARR_H_INCLUDED

class dynArr
{
private:

    int **data; ///for two dimensional array **data, means that a pointer points another pointer
    int size;

public:
    dynArr();
    dynArr(int, int); ///one is for row and another is for column
    ~dynArr();

    void allocate(int, int); ///change then size of the points on later

    void set(int, int, int);
    int get(int, int);
};


#endif // DYNARR_H_INCLUDED
