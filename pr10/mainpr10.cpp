#include <iostream>
#include <cmath>
#include "Header.h"
using namespace std;



int main()
{

    setlocale(LC_ALL, "Russian");
    type5 equation1(2, -4);
    equation1.Get_answer();
    equation1.show();
    
    

   
    type6 equation2(1, -5, 6);
    equation2.Get_answer();
    equation2.show();
    
    

    return 0;
}