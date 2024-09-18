//LAB 1- Designing a Pre processor.


#include <bits/stdc++.h>
using namespace std;

int main()
{
    string file_name;
    cout << "Enter the File name: ";
    cin >> file_name;

    ofstream write_file(file_name);
    if (write_file.is_open())
    {
        cout << "Enter data to write to the file (enter 'quit' to stop):\n";
        string line;
        while (true)
        {
            getline(cin, line);
            if (line == "quit")
            {
                break;
            }

            // Remove comments
            if (line.find("//") != string::npos)
            {
                line = line.substr(0, line.find("//"));
            }
            if (line.find("/*") != string::npos)
            {
                size_t start = line.find("/*");
                size_t end = line.find("*/", start);
                if (end != string::npos)
                {
                    line.erase(start, end - start + 2);
                }
            }

            // Write the line to the file if it's not empty and doesn't start with '#'
            if (!line.empty() && line.substr(0, 1) != "#")
            {
                write_file << line << endl;
            }
        }
        write_file.close();
        cout << "Data written to file successfully.\n";
    }
    else
    {
        cout << "Unable to open file for writing.\n";
    }

    ifstream read_file(file_name);
    if (read_file.is_open())
    {
        cout << "Reading data from the file:\n";
        string line;
        while (getline(read_file, line))
        {
            cout << line << endl;
        }
        read_file.close();
    }
    else
    {
        cout << "Unable to open file for reading.\n";
    }

    return 0;
}

