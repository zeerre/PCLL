////*************************************************************************
////* File Name: containor-list.cpp
////* Author:GeekBear
////* Mail:zeerre98988@gmail.com 
////* Created And Modified Time: ====2022-11-18  09-10-15====
////*************************************************************************
//
//Member functions
//(constructor)                     Construct list (public member function) 
//(destructor)                      List destructor (public member function) 
//operator=                         Copy container content (public member function) 
//
//Iterators:
//begin                             Return iterator to beginning (public member function) 
//end                               Return iterator to end (public member function) 
//rbegin                            Return reverse iterator to reverse beginning (public member function) 
//rend                              Return reverse iterator to reverse end (public member function) 
//
//
//Capacity:
//empty                             Test whether container is empty (public member function) 
//size                              Return size (public member function) 
//max_size                          Return maximum size (public member function) 
//resize                            Change size (public member function) 
//
//
//Element access:
//front                             Access first element (public member function) 
//back                              Access last element (public member function) 
//
//
//Modifiers:
//assign                            Assign new content to container (public member function) 
//push_front                        Insert element at beginning (public member function) 
//pop_front                         Delete first element (public member function) 
//push_back                         Add element at the end (public member function) 
//pop_back                          Delete last element (public member function) 
//insert                            Insert elements (public member function) 
//erase                             Erase elements (public member function) 
//swap                              Swap content (public member function) 
//clear                             Clear content (public member function) 
//
//
//Operations:
//splice                            Move elements from list to list (public member function) 
//remove                            Remove elements with specific value (public member function) 
//remove_if                         Remove elements fulfilling condition (public member function template) 
//unique                            Remove duplicate values (member function) 
//merge                             Merge sorted lists (public member function) 
//sort                              Sort elements in container (public member function) 
//reverse                           Reverse the order of elements (public member function) 
//
//
//Allocator:
//get_allocator                     Get allocator (public member function) 
//
//
//
//Member types
//of template <class T, class Allocator=allocator<T> > class list;
//member type                       |definition 
//reference                         Allocator::reference 
//const_reference                   Allocator::const_reference 
//iterator                          Bidirectional iterator 
//const_iterator                    Constant bidirectional iterator 
//size_type                         Unsigned integral type (usually same as size_t) 
//difference_type                   Signed integral type (usually same as ptrdiff_t) 
//value_type                        T 
//allocator_type                    Allocator 
//pointer                           Allocator::pointer 
//const_pointer                     Allocator::const_pointer 
//reverse_iterator                  reverse_iterator<iterator> 
//const_reverse_iterator            reverse_iterator<const_iterator> 
//
//
