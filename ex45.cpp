#include <iostream>
using namespace std;

void draw_triangle(int size, char c);
//This function draws a triangle of size 'size' using character 'c'
void draw_diamond(int size, char c);
//This function first calls draw_triangle, then add_bottom to draw the diamond
void draw_shape(int size, char c);
//This function actually draws an upside down triangle of size 'size' - 1
//as the bottom of the diamond
void draw_bottom(int size, char c);
//This function actually draws an upside down triagle of size 'size' - 1
//as the bottom of the diamond

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

  for(int i = 1; i <= size; i++){
    for (int j = 1; j <= i; j++){
      cout << c;

    }
    cout << endl;

  }
}

void draw_diamond(int size, char c){
  //complete version of draw_diamond function

  draw_triangle(size, c);
  draw_bottom(size, c);
}

void draw_bottom(int size, char c){

  for(int i = 1; i < size; i++){
    for(int j = 1; j <= (size-i); j++){
      cout << c;

    }
    cout << endl;

  }
}
