#ifndef TYPEBASE_HPP
#define TYPEBASE_HPP
#include <cstdint>
namespace std{
    template <class T>
    class TypeBase : public T
    {
    private:
        T myVal;
    public:
        TypeBase();
        explicit TypeBase(T & t = 0);
//        KJKJK <T> (e);
        operator T (void) const
        {
            return myVal;
        }

    };
    typedef int Int;
    typedef short Short;
    typedef char Character;

}
#endif // TYPEBASE_H
