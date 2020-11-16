// basic file operations
/*#include <iostream>
#include <fstream>
using namespace std;

int main () {
  ofstream myfile;
  myfile.open ("file.txt");
  myfile << "Writing this to a file.\n";
  myfile.close();
  return 0;
}*/

#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include "ReadFile.h"

using namespace std;

int main()
{ 

   ReadFile readfile("/Users/paolomazzon/Desktop/Progettic++/OPENGL/leggifile/file.txt");
}