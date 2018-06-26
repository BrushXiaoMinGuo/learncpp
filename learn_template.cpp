#include<iostream>
using namespace std;
// template是范型编程的基础，有针对函数的tempalte 和 针对类的template
template<typename T>
T const& my_max(T const& a,T const& b){
    return a>b?a:b;
}

template<class T>
class my_Stack{
    private:
        vector<T> elems;
    public:
        void push(T const&);

};

int main(int argc, char const *argv[])
{
    /* code */
    cout << my_max(1,2)<<endl;
    cout << my_max(2.1, 2.3) <<endl;
    return 0;
}
