#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    // opening a text file for writing
    ofstream my_file("abc.txt");

    // check if the file has been opened properly
    if (!my_file)
    {
        // print error msg
        cout << "error opening the file. " << endl;

        // terminate the main() function
        return 1;
    }

    // close the file
    my_file.close();

    return 0;
} 