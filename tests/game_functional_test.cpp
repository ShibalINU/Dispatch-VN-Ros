#include <iostream>
#include <chrono>
#include <thread>
#include <string>

using namespace std;

void episode1_Apartment_Interrogation_Scene();

//----------------------- PRESS ENTER TO CONTINUE FUNCTION --------------------------- //
// i've eresearcha about chrono and thread to make this work but it requires g++ 8.10.0 or higher which is such a hassle
// This is good for the prototype for now
void say(const string &text)
{
    cout << text << endl;
    cout << "[Press ENTER to continue]";
    cin.ignore();
    cin.get();
}

int main()
{
    // ----------------------- VARIABLES --------------------------- //
    bool
        Is_Merciful = false,
        Relationship_Good = false;

    int
        Robert_Anger_Level = 0,
        TrustLevel = 0,
        User_Choice;

    cout << "Choose an episode: " << endl;
    cout << "[1] Episode: 1" << endl;
    cout << "[2] Episode: 2" << endl;
    cout << "[3] Episode: 3" << endl;
    cout << "[4] Episode: 4" << endl;
    cout << "[5] Episode: 5" << endl;
    cin >> User_Choice;

    switch (User_Choice)
    {
    case 1:
        episode1_Apartment_Interrogation_Scene();
        break;
    case 2:
        break;
    }
    return 0;
}
// ----------------------- EPISODE DEFINITIONS --------------------------- //

void episode1_Apartment_Interrogation_Scene()
{
    say("Obviously, I love him. He's my dad. ");
    say("What does that H mean? Just say what you want to say. ");
    say("It's just when you add obviously, it feels a little less obvious.");
    say("So I'll ask again. How do you really feel about your father? ");
}
