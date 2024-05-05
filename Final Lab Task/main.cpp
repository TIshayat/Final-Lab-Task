#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    string t;

string myText;

ifstream MyReadFile("FinalLab.txt");


while (getline (MyReadFile, myText))
{

  if (myText == "#include <iostream>")
  cout << "Header File" << endl;

  else if(myText == "using namespace std;")
  cout << "Namespace Declaration" << endl;

}

string myText2;


ifstream MyReadFile2("keywords.txt");

while (getline (MyReadFile2, myText2))
{
    if (myText2 == "int")
    cout << "keyword" << endl;

    else if (myText2 == "cout")
    cout << "keyword" << endl;

}


    return 0;
}
