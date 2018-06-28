# vector

###   概念
vector是顺序、动态的范性容器

###   常用函数
####  增加(单个加+批量加)
push_back(const T& t)  
insert(iterator it, const T& t)  
insert(iterator it, n , const T& t)
####  删除(单个，批量)
erase(iterator it)  
erase(iterator first,iterator last)  
pop_back()  
clear()
####  访问
at()
####  判断
empty()
####  大小
size()
capacity()
max_size()
