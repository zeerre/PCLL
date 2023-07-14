////*************************************************************************
////* File Name: containor-map.cpp
////* Author:GeekBear
////* Mail:zeerre98988@gmail.com 
////* Created And Modified Time: ====2022-11-18  09-11-12====
////*************************************************************************
//
//Member functions
//(constructor)                 Construct map (public member function) 
//(destructor)                  Map destructor (public member function) 
//operator=                     Copy container content (public member function) 
//
//Iterators:
//begin                         Return iterator to beginning (public member function) 
//end                           Return iterator to end (public member function) 
//rbegin                        Return reverse iterator to reverse beginning (public member function) 
//rend                          Return reverse iterator to reverse end (public member function) 
//
//
//Capacity:
//empty                         Test whether container is empty (public member function) 
//size                          Return container size (public member function) 
//max_size                      Return maximum size (public member function) 
//
//
//Element access:
//operator[]                    Access element (public member function) 
//
//
//Modifiers:
//insert                        Insert element (public member function) 
//erase                         Erase elements (public member function) 
//swap                          Swap content (public member function) 
//clear                         Clear content (public member function) 
//
//
//Observers:
//key_comp                      Return key comparison object (public member function) 
//value_comp                    Return value comparison object (public member function) 
//
//
//Operations:
//find                          Get iterator to element (public member function) 
//count                         Count elements with a specific key (public member function) 
//lower_bound                   Return iterator to lower bound (public member function) 
//upper_bound                   Return iterator to upper bound (public member function) 
//equal_range                   Get range of equal elements (public member function) 
//
//
//Allocator:
//get_allocator                 Get allocator (public member function) 
//
//
//
//Member types
//of template <class Key, class T, class Compare=less<Key>, class Allocator=allocator<pair <const Key, T> > > class map;
//member type                   |definition 
//key_type                      Key 
//mapped_type                   T 
//value_type                    pair<const Key,T> 
//key_compare                   Compare 
//value_compare                 Nested class to compare elements (see member function value_comp) 
//allocator_type                Allocator 
//reference                     Allocator::reference 
//const_reference               Allocator::const_reference 
//iterator                      Bidirectional iterator 
//const_iterator                Constant bidirectional iterator 
//size_type                     Unsigned integral type (usually same as size_t) 
//difference_type               Signed integral type (usually same as ptrdiff_t) 
//pointer                       Allocator::pointer 
//const_pointer                 Allocator::const_pointer 
//reverse_iterator              reverse_iterator<iterator> 
//const_reverse_iterator        reverse_iterator<const_iterator> 
//
//
