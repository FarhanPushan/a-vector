
//reviewing how to make a vector 

#include <iostream>
#include <vector>


int main()
{


//this is supposed to create an empty vector
std::vector <int> vect;

//adding primitive data type int things to vector
vect.push_back(10);
vect.push_back(20);
vect.push_back(30);


//displaying contents of vector on screen
for (int x: vect)
    std::cout <<  x << " " << std::endl;
return 0;


}
