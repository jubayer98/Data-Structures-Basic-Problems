#ifndef DYNARR_H_INCLUDED
#define DYNARR_H_INCLUDED

class dynArr
{
private:

    int *data;
    int size;

public:
    ///initializing the constructor and destructor
    dynArr();
    dynArr(int);
    ~dynArr();
    void set(int, int);
    int get(int);
};

#endif // DYNARR_H_INCLUDED


///using to put all classes and functions prototypes and decorations
