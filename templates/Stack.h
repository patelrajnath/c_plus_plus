/*
 * Stack.h
 *
 *  Created on: Jan 2, 2021
 *      Author: rWX917587
 */
#include <vector>
using namespace std;


#ifndef STACK_H_
#define STACK_H_

template <class T>
class Stack {
private:
      vector<T> elems; // elements

   public:
      // push element
      // T const&: Reference (&) to a constant (const) integer if T is int
      void push(T const&);

      // pop element
      void pop();

      // return top element; here "const" implies that this method is constant and
      // can not change the memeber variable elems
      T top() const;

      bool empty(){      // return true if empty.
         return elems.empty();
      }
};

template <class T>
void Stack<T>::push(T const& elem) {
   // append copy of passed element
   elems.push_back(elem);
}

template <class T>
void Stack<T>::pop () {
   if (elems.empty()) {
      throw out_of_range("Stack<>::pop(): empty stack");
   }

   // remove last element
   elems.pop_back();
}

template <class T>
T Stack<T>::top() const{
   if (elems.empty()) {
      throw out_of_range("Stack<>::top(): empty stack");
   }

   // return copy of last element
   return elems.back();
}

#endif /* STACK_H_ */
