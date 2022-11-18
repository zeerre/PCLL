////*************************************************************************
////* File Name: containor-deque.cpp
////* Author:GeekBear
////* Mail:zeerre98988@gmail.com 
////* Created And Modified Time: ====2022-11-18  09-11-09====
////*************************************************************************
//
//Member functions
//(constructor)                             |Construct deque container (public member function) 
//(destructor)                              |Deque destructor (public member function) 
//operator=                                 |Copy container content (public member function) 
//
//Iterators:
//begin                                     |Return iterator to beginning (public member function) 
//end                                       |Return iterator to end (public member function) 
//rbegin                                    |Return reverse iterator to reverse beginning (public member function) 
//rend                                      |Return reverse iterator to reverse end (public member function) 
//
//
//Capacity:
//size                                      |Return size (public member function) 
//max_size                                  |Return maximum size (public member function) 
//resize                                    |Change size (public member functions) 
//empty                                     |Test whether container is empty (public member function) 
//
//
//Element access:
//operator[]                                |Access element (public member function) 
//at                                        |Access element (public member function) 
//front                                     |Access first element (public member function) 
//back                                      |Access last element (public member function) 
//
//
//Modifiers:
//assign                                    |Assign container content (public member function) 
//push_back                                 |Add element at the end (public member function) 
//push_front                                |Insert element at beginning (public member function) 
//pop_back                                  |Delete last element (public member function) 
//pop_front                                 |Delete first element (public member function) 
//insert                                    |Insert elements (public member function) 
//erase                                     |Erase elements (public member function) 
//swap                                      |Swap content (public member function) 
//clear                                     |Clear content (public member function) 
//
//
//Allocator:
//get_allocator                             |Get allocator (public member function) 
//
//
//
//Member types
//of template <class T, class Allocator=allocator<T> > class deque;
//member type                               |definition 
//reference                                 |Allocator::reference 
//const_reference                           |Allocator::const_reference 
//iterator                                  |Random access iterator 
//const_iterator                            |Constant random access iterator 
//size_type                                 |Unsigned integral type (usually same as size_t) 
//difference_type                           |Signed integral type (usually same as ptrdiff_t) 
//value_type                                |T 
//allocator_type                            |Allocator 
//pointer                                   |Allocator::pointer 
//const_pointer                             |Allocator::const_pointer 
//reverse_iterator                          |reverse_iterator<iterator> 
//const_reverse_iterator                    |reverse_iterator<const_iterator> 
//
//
