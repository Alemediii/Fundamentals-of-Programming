/*
 int a, b, c;
 bool theEnd ;

 bool one (int x, int y) ;
 void two (int & x, int y) ;
 int three (int x) ;

 Which of the next calls from inside the main() are legal?
 Which aren’t and why?

 a) if (one(a, b) ) { //this is a correct way of passing the parameter, and the condition will be
                     // met whenever function one is true
 b) two(a, b+3) // it is correct to make a make a quantity change of a parameter
 c) theEnd = one(c, 5) //it is valid, as the function returns [bool] a result, which will be a 
                      // boolean-status-variable, "true" or "false" 
 d) theEnd = two(c, 5) // it is not correct, as a void function, theEnd variable will not be equalized to any value
 e) two(a, three(a)) //it would be also correct, as the second parameter would be equal to the value
                    // that the function three returns
 f ) two(three(b), c) //same behaviour than the previous one, with the difference
                     // that the parameter can be modified
 g) if (three(a)) { //as an int function cannot be true or false, so we need to change the function,       
                   // or compare the three(a) result to a parameter
 h) b = three(two(a, 5)) //the function will not be executed, as it has more than one condition, and the
                        // parameter a will not be equal to anything, as function two is a void method
 i) two(4, c) //because of being a parameter by reference, we can pass the value, but it would not work because of passing it by reference  
             //as the only difference with passing the values as normal, is that the parameter can be modified
*/