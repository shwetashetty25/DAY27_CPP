// reading from file
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    // open a text file for reading
    ofstream my_file("abc.txt", ios::app);

    // check the file for errors
    if (!my_file)
    {
        cout << "Failed to open the file foe opening." << endl;
        return 1;
    }

    // write multiple lines to the file
    my_file << "Line 4 " << endl; 
    my_file << "Line 5 " << endl;
    my_file << "Line 6" << endl;

    // close the file
    my_file.close();

    return 0;
}