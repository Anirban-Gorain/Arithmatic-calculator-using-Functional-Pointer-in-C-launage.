#include<stdio.h>
#include<conio.h>
# define _size 4
// Declaration of defined functions.
float _add(float , float );
float _sub(float , float );
float _div(float , float );
float _mul(float , float );
int main(void)
{
   // In a functional pointer array assign all the functions.
   float (*_functions[_size])(float, float) = {_add, _sub, _div, _mul};
   // Taking two values for perform arithmetic according to the user choice.
   float _first_Number;
   float _second_Number;
   printf("Enter your first number");
   scanf("%f", &_first_Number);
   printf("Enter your second number");
   scanf("%f", &_second_Number);
   // Taking user choice for call right function according to the user.
   int _user_Choice;
   printf("Enter 1 for Addition, 2 for subtraction, 3 for division, 4 for multiplication:");
   scanf("%d", &_user_Choice);
   printf("%f", (*_functions[_user_Choice - 1])(_first_Number, _second_Number));
   return 0;
}
// All the functions are.
float _add(float _first_Number, float _second_Number){
       return _first_Number + _second_Number;
}
float _sub(float _first_Number, float _second_Number){
       return _first_Number - _second_Number;
}
float _div(float _first_Number, float _second_Number){
       return _first_Number / _second_Number;
}
float _mul(float _first_Number, float _second_Number){
       return _first_Number * _second_Number;
}