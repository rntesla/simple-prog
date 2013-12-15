#include <iostream>

using namespace std; 

int main(int argc, char ** argv)
{

  if (argc >= 2){
    cout << "Hello World, and hello " <<  argv[1] << "!" << endl;
  } else {
    cout << "Hello World!" << endl;
  }

}
