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
    typeLine("Robert: So, here's what's going to happen. ");
    typeLine("Robert:  I'm going to hang you off the side of this building and you're going to tell me where Shroud is or I'm going to drop you to your death. ");
    typeLine("Soothing Goon: Come on. I thought we were having a breakthrough.");
    typeLine("Robert:  Hey, we did. You know, for being a real piece of shit you're pretty easy to talk to, but the only breakthrough I need right now i-");
    typeLine("Soothing Goon:  I'm not TELLING YOU SHIT! YOU FUCKIN' loser! ");
    typeLine("Robert: SEE, this is more like how I thought this would be. ");
    delaySpeak("//-------Drags chair accross the room------// ");
    typeLine("Soothing Goon: I hope Shroud kills you just like he killed your father!");
    typeLine("Soothing Goon: You hear me? UGH!");
    typeLine("Soothing Goon: Are we outside?");
    typeLine("Robert: Windy up here tonight, huh? ");
    typeLine("Soothing Goon: Why Are we outside?");
    typeLine("Robert:  No telling where you land.  ");
    typeLine("Soothing Goon: It smells like outside. [laughter]");
    delaySpeak("//-------Lifts Chair over the ledge------// ");
    typeLine("Soothing Goon: Fuc-Fuck-FUCK! WAIT! WAIT! WAIT!");
    typeLine("Robert:  Hey! Hey! I have neighbors.");
    typeLine("Robert:  Use your inside voce and just tell me where Shroud is? ");
    typeLine("Soothing Goon: Okay, Okay, uh uh-- Steel- Steel Mill");
    typeLine("Soothing Goon: Llewelyn uh, Llewelyn Steel Works okay, Fuck.");
    typeLine("Robert: Are you sure?");
    typeLine("Soothing Goon: Yes! please, that's all I know!");
    typeLine("Robert: Stop screaming! Goddamnit.");
    typeLine("Soothing Goon: Help! HEEEEEEL--");
    typeLine("Robert: Hey, hey, I will pull you up if you quiet the fuck down.");
    delaySpeak("LET HIM DROP [1] PULL HIM BACK [2]");
    cin >> choice;

    if (choice == 1)
    {
        Is_Merciful = false;
        typeLine("Robert: Sir. If you want something to scream about, I'll give you something to scream about");
        delaySpeak("//------Drops off from the ledge--------//");
        typeLine("Robert: You piece of shit!");
    }
    else
    {
        Is_Merciful = true;
        delaySpeak("//------Puts the gun back--------//");
        typeLine("Soothing Goon: WOAH RELAX, you wanna talk right?? Let's talk this out first");
        typeLine("Robert: Well then, who killed my brother?");
        typeLine("Soothing Goon: It wasn't me, i swear I was just a witness");
        typeLine("Robert: I'm supposed to believe that?");
        delaySpeak("//------Reaches for the gun--------//");
        typeLine("Soothing Goon: WOAH PLEASE RELAX");
        typeLine("Robert: Are you gonna tell me or you'll meet my brother tonight ");
        typeLine("Soothing Goon: Please, check this out");
        delaySpeak("//------Hands phone--------//");
        delaySpeak("Grab phone [1], reject[2]");
        cin >> choice;
        if (choice == 1)
        {
            characterHp -= 10;
            delaySpeak("//------Gets punched in the face--------//");
            delaySpeak("//------Character hp: ", characterHp);
            typeLine("Robert: Son of a bitch!");
            delaySpeak("//------Runs towards the exit--------//");
            delaySpeak("Chase [1], Leave him be[2]");
            cin >> choice;
        }
        else
        {
            delaySpeak("//------Gets punched in the face--------//");
            delaySpeak("//------Character hp: ", characterHp);
            typeLine("Robert: Son of a bitch!");
            delaySpeak("//------Runs towards the exit--------//");
            delaySpeak("Chase [1], Leave him be[2]");
            cin >> choice;
        }
    }
}
