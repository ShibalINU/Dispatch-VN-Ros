#include <iostream>
#include <string>
#include <cstdlib> // for system()
using namespace std;

int main()
{
    int episode;

    cout << "Select an episode (1-5): ";
    cin >> episode;

    // Validate user input

    // Build the command dynamically based on the chosen episode
    string command = "start cmd.exe /k \"echo You selected Episode " + to_string(episode) + " && pause\"";

    // Execute the command
    system(command.c_str());

    return 0;
}
