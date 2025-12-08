#include <iostream>
#include <chrono>
#include <thread>
#include <string>

using namespace std;

void episode1_Apartment_Interrogation_Scene();

// Typing effect
void typeLine(const string &text, int speedMs = 60)
{
    for (char c : text)
    {
        cout << c << flush;
        this_thread::sleep_for(chrono::milliseconds(speedMs));
    }
    cout << endl;
}

// delay dialogue
void delaySpeak(const string &line, int delayMs = 900)
{
    cout << line << endl;
    this_thread::sleep_for(chrono::milliseconds(delayMs));
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
    int
        choice,
        characterHp = 100;
    bool Is_Merciful;
    typeLine("Obviously, I love him. He's my dad. ");
    typeLine("What does that H mean? Just say what you want to say. ");
    typeLine("It's just when you add obviously, it feels a little less obvious.");
    typeLine("So I'll ask again. How do you really feel about your father? ");
    typeLine("Why do you even care? ");
    typeLine("Why not? ");
    typeLine("Okay dingus? ");
    delaySpeak("//-------Pulls out a gun------// ");
    delaySpeak("Shoot him in the face [1], Hold back [2]");
    cin >> choice;

    if (choice == 1)
    {
        Is_Merciful = false;
        delaySpeak("//------Drops Dead--------//");
        typeLine("Stupid son of a bitch");
    }
    else
    {
        Is_Merciful = true;
        delaySpeak("//------Puts the gun back--------//");
        typeLine("WOAH RELAX, you wanna talk right?? Let's talk this out first");
        typeLine("Well then, who killed my brother?");
        typeLine("It wasn't me, i swear I was just a witness");
        typeLine("I'm supposed to believe that?");
        delaySpeak("//------Reaches for the gun--------//");
        typeLine("WOAH PLEASE RELAX");
        typeLine("Are you gonna tell me or you'll meet my brother tonight ");
        typeLine("Please, check this out");
        delaySpeak("//------Hands phone--------//");
        delaySpeak("Grab phone [1], reject[2]");
        cin >> choice;
        if (choice == 1)
        {
            characterHp -= 10;
            delaySpeak("//------Gets punched in the face--------//");
            delaySpeak("//------Character hp: ", characterHp);
            typeLine("Son of a bitch!");
            delaySpeak("//------Runs towards the exit--------//");
            delaySpeak("Chase [1], Leave him be[2]");
            cin >> choice;
        }
    }
}
