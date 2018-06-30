#ifndef bursh_al
#define bursh_al
#include <cstddef> //for size_t,ptrdiff_t
#include <climits> //for UINT_MAX
#include <iostream> //cerr
using namespace std;
namespace bursh_allocator{

    template<class T>
    inline T* _allocate(ptrdiff_t n,T*){
        set_new_handler(0);
        T* tmp = (T*)(::operator new((size_t)(n*sizeof(T))));
        if(tmp==0){
            cerr << "alloc memory error" << endl;
            exit(1);
        }
        return tmp;
        }
        
    template<class T>
    inline void _deallocate(T* p){
        ::operator delete(p);
    }

    template<class T1,class T2>
    inline void _construct(T1* p,const T2& value){
        new(p) T1(value);
    }

    template<class T>
    inline void _destroy(T* p){
        p->~T();
    }

    template <class T>
    class allocator{
        public:
            typedef T value_type;
            typedef T* pointer;
            typedef const T* const_pointer;
            typedef T& reference;
            typedef const T& const_reference;
            typedef size_t size_type;//size_t 用来记录大小的数据类型
            typedef ptrdiff_t difference_type; //用来记录两个指针之间距离的数据类型
            

            pointer allocate(size_type n, const void *hint=0){
                return _allocate((difference_type)n, (pointer)0);
            }

            void deallocate(pointer p, size_type n){
                _deallocate(p);
            }

            size_type max_size() const{
                return size_type( UINT_MAX /sizeof(T));
            }

            void constructor(pointer p, const T& x){
                _construct(p,x);
            }

            void destroy(pointer p){
                _destroy(p);
            }
    };

}
#endif