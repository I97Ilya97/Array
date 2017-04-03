#include<iostream> 


template <class T, size_t N> 

struct TArray 
{ 
using value_type = T; 
using size_type = size_t; 
using iterator = value_type *; 
using reference = value_type&; 
using const_reference = const value_type&; 

value_type Ptr[N]; 



TArray() = default; 

~TArray() = default; 


bool empty() const throw() 
{ 
return N == 0; 
} 

size_type size() const throw() 
{ 
return N; 
} 

size_type max_size() const throw() 
{ 
return N; 
} 

iterator begin() throw() 
{ 
return Ptr; 
} 

iterator end() throw() 
{ 
return Ptr + N; 
} 

reference front() 
{ 
return Ptr[0]; 
} 

const_reference front() const 
{ 
return Ptr[0]; 
} 

reference back() 
{ 
return Ptr[N - 1]; 
} 

const_reference back() const 
{ 
return Ptr[N - 1]; 
} 

void assign(const T &value) 
{ 
for(iterator i = begin(); i != end(); i++) 
*i = value; 
} 

void fill(const value_type& val) 
{ 
for(size_type i; i < N; ++i) 
Ptr[i] = val; 
} 

void swap(TArray<T, N> &other) 
{ 
std::swap(Ptr, other.Ptr); 
} 

reference at(size_type pos) 
{ 
if(pos < N) return Ptr[pos]; 
else throw std::exception("Out_of_range"); 
} 

const_reference at(size_type pos) const 
{ 
if(pos < N) return Ptr[pos]; 
else throw std::exception("Out_of_range"); 
} 

reference operator[](size_type m) 
{ 
return Ptr[m]; 
} 

const_reference operator[](size_type m) const 
{ 
return Ptr[m]; 
} 

T* data() 
{ 
return Ptr; 
} 

const T* data() const 
{ 
return Ptr; 
} 
};
