#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

// Episode function declarations
void episode1();
void episode2();
void episode3();
void episode4();
void episode5();

// Helper to open CMD window with multiline-safe output
void openCmdWithMessage(const string &message)
{
    string formattedText;

    // Convert '\n' into " & echo " for CMD compatibility
    for (char c : message)
    {
        if (c == '\n')
            formattedText += " & echo ";
        else
            formattedText += c;
    }

    // Build Windows command
    string command =
        "start cmd.exe /k \"echo " + formattedText + " & pause\"";

    system(command.c_str());
}

int main()
{
    int ep;

    cout << "Choose an episode (1-5): ";
    cin >> ep;

    switch (ep)
    {
    case 1:
        episode1();
        break;
    case 2:
        episode2();
        break;
    case 3:
        episode3();
        break;
    case 4:
        episode4();
        break;
    case 5:
        episode5();
        break;
    default:
        cout << "Invalid episode." << endl;
        break;
    }

    return 0;
}

// ----------------------- EPISODE DEFINITIONS --------------------------- //

void episode1()
{
    string scene =
        "EPISODE 1: The Awakening\n"
        "You wake up in a dim room. A door stands slightly open.\n"
        "Decision: Do you (A) open the door fully or (B) inspect the room first?)";

    openCmdWithMessage(scene);
}

void episode2()
{
    string scene =
        "EPISODE 2: The Corridor\n"
        "You walk into a silent corridor lit by flickering lights.\n"
        "Decision: Do you (A) walk forward or (B) call out to check if someone is there?)";

    openCmdWithMessage(scene);
}

void episode3()
{
    string scene =
        "EPISODE 3: The Encounter\n"
        "A shadowy figure appears at the far end.\n"
        "Decision: Do you (A) approach it or (B) hide behind a crate?)";

    openCmdWithMessage(scene);
}

void episode4()
{
    string scene =
        "EPISODE 4: The Choice\n"
        "You find two doors: one marked 'Truth' and one marked 'Safety'.\n"
        "Decision: Do you enter (A) Truth or (B) Safety?)";

    openCmdWithMessage(scene);
}

void episode5()
{
    string scene =
        "EPISODE 5: The Outcome\n"
        "Your choices have led you here. A final test awaits.\n"
        "Decision: Do you (A) confront your fears or (B) turn away?)";

    openCmdWithMessage(scene);
}
