#include <iostream>
using namespace std;

void draw_triangle(int size, char c);

void draw_diamond(int size, char c);
void draw_shape(int size, char c);

int main(){

  //Simplified version of main, notice that char and size are fixed for now
  char c = '*';
  int size = 4;

  draw_shape(size, c);

  return 0;
}

void draw_shape(int size, char c){ //A simplified version of draw_shape

  draw_triangle(size, c);
  draw_diamond(size, c);
}

void draw_triangle(int size, char c){
  //complete version of draw_triangle function


}

void draw_diamond(int size, char c){
  //complete version of draw_diamond function

  
}
