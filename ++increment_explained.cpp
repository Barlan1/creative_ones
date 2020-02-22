#include <iostream>
using namespace std;
  //Program 1
    int main()
    {
        int  a = 1;
        
        cout<<++a<<a++<<++a + ++a + ++a + ++a<<a<<a++<<a++<<++a;
		 //a. explain
		 //b. last ++a increment to 2;
		 //c. then second last  (a++) becomes 2;
		 //d. third last a++ becomes 3 (how: takes input from second last and last(a++<<++a)
		 //e. now a will be 4;
		 //f. we are inside additions.
		 //g. there are four ++a; it incement value of upto 8;
		 //h. it will show effect in next a++ i.e. second element from the first; 
		 //i. so value of second a++ from first becomes 8; ( ++ it will show effect in first)
		 //j. so value of a at first element is 9 ( got incremented by calling a in first element);
		 //k. now value of a will be 10 due to ++a at first element;
		 // In a single cout statement
		 //1. now all free a, and ++a will be assigned to 10 at run time;
		 //2. now we calculate the additions;
		 //3. for additions i.e 4 times ++a will be calculated based on steps a. to e.
		 // so till now a becomes 4;
		 //after entering addition 
		 // value will be calulated from left end i.e first of the 4 element of additions
		 // here a is already 4;
		 // so ++a will be 5;
		 //next ++a = 6;
		 //now time for first addition (+)
		 // ++a + ++a = 12; ( why: at run time adition will provide last value to a.)
		 // so both element will have same value which is 6 ( the end value);
		 // now 12 + (++a)= 12 + 7= 19;
		 //now 27 + (++a)= 19 + 8= 27;
		 // our answer will be 10 8 27 10 3 2 10;
    }

