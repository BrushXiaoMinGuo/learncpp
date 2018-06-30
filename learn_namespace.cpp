// namespace 定义了一个集合范围，便于区分不同空间下的函数
#include<iostream>
using namespace std;
namespace first{
    void func(){
        std::cout<<"first namespace"<<endl; 
    }
}
namespace second{
    void func(){
        std::cout<<"secode namespace"<<endl;
    }
}

using namespace first;
int main(int argc, char const *argv[])
{
    /* code */
    func();
    second::func();
    return 0;
}

