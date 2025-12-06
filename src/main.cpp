#include <iostream>
#include <cstdlib> // for system()

int main()
{
    int episode;

    std::cout << "Select an episode (1-5): ";
    std::cin >> episode;

    // Validate user input
    if (episode < 1 || episode > 5)
    {
        std::cout << "Invalid episode number." << std::endl;
        return 0;
    }

    // Build the command dynamically based on the chosen episode
    std::string command =
        "start cmd.exe /k \"echo You selected Episode " + std::to_string(episode) +
        " && pause\"";

    // Execute the command
    system(command.c_str());

    return 0;
}
