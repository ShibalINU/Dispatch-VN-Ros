#include <iostream>
#include <chrono>
#include <thread>
#include <string>

using namespace std;

// -------------------- Prototype --------------------
void Apartment_Interrogation_Scene();
void scene_combat_toxic();
void scene_street_fight();
void scene_bar_flambae();
void scene_billboard();
void epilogue_summary();

// -------------------- Global State --------------------
bool isMerciful = false;
bool isRomanticTensionActive = false;
bool didFailStreetFight = false;

int Blazer_Impression_Score = 0;
int Tactical_Efficiency_Score = 0;
int public_reputation = 0;

// Typing effect
void typeLine(const string &text, int speedMs = 40)
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
    isMerciful = false;
    isRomanticTensionActive = false;
    didFailStreetFight = false;
    Blazer_Impression_Score = 0;
    Tactical_Efficiency_Score = 0;
    public_reputation = 0;

    cout << "Dispatch: Robert's Pivot — Episode 1\n";
    cout << "------------------------------------\n";

    Apartment_Interrogation_Scene();
    scene_combat_toxic();
    scene_street_fight();
    scene_bar_flambae();
    scene_billboard();
    epilogue_summary();
    // ----------------------- GAME START --------------------------- //

    return 0;
}
// ----------------------- EPISODE DEFINITIONS --------------------------- //

void Apartment_Interrogation_Scene()
{
    int choice;
    typeLine("Robert: So, here's what's going to happen. ");
    typeLine("Robert: I'm going to hang you off the side of this building ");
    typeLine("Robert: and you're going to tell me where Shroud is or I'm going to drop you to your death. ");
    typeLine("Soothing Goon: Come on. I thought we were having a breakthrough.");
    typeLine("Robert:  Hey, we did. You know, for being a real piece of shit you're pretty easy to talk to");
    typeLine("Robert:  but the only breakthrough I need right now i-");
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
        isMerciful = false;
        typeLine("Robert: Sir. If you want something to scream about, I'll give you something to scream about");
        delaySpeak("//------Drops off from the ledge--------//");
        delaySpeak("//------Lands on top of a mattress--------//");
        typeLine("Soothing Goon: You piece of shit!");
    }
    else
    {
        isMerciful = true;
        delaySpeak("//------Pulls back the chair back--------//");
        typeLine("Honestly, it was talking talking to someone about this stuff");
        typeLine("I guess what i'm saying is, I'm really glad i kidnapped you tonight");
    }
}

void scene_combat_toxic()
{
    delaySpeak("//------Combat toxic scene--------//");
    typeLine("Wehre the dialogue at");
    cout << "2) Stomp\n";
    cout << "Choose (1-2): ";

    int choice;
    cin >> choice;

    if (choice == 1)
    {
        Tactical_Efficiency_Score += 1;
        if (isMerciful)
        {
            cout << "\nYou punt Toxic into safety netting — low harm.\n";
        }
        else
        {
            cout << "\nYou punt Toxic — flashy but effective.\n";
        }
    }
    else
    {
        Tactical_Efficiency_Score += 2;
        if (!isMerciful)
        {
            cout << "\nYou stomp — brutal efficiency.\n";
            public_reputation += 2;
        }
        else
        {
            cout << "\nYou stomp, despite your mercy — decisive but uneasy.\n";
            public_reputation += 1;
        }
    }
}

void scene_street_fight()
{
    delaySpeak("//------Street fight scene--------//");
    typeLine("Wehre the dialogue at");
    cout << "2) Left hand punch\n";
    cout << "Choose (1-2): ";

    int choice;
    cin >> choice;

    if (choice == 1)
    {
        didFailStreetFight = true;
        Tactical_Efficiency_Score -= 1;
        public_reputation -= 1;
        cout << "\nHe counters the telegraphed punch. You fall.\n";
    }
    else
    {
        Tactical_Efficiency_Score += 2;
        public_reputation += 1;
        cout << "\nYour left hand connects — clean and decisive.\n";
    }
}
void scene_bar_flambae()
{
    delaySpeak("//------Basr scene--------//");
    typeLine("Wehre the dialogue at");
    cout << "2) Throw alcohol\n";
    cout << "Choose (1-2): ";

    int choice;
    cin >> choice;

    if (choice == 1)
    {
        Blazer_Impression_Score += 1;
        cout << "\nYou throw water. The flames die safely.\n";
    }
    else
    {
        Blazer_Impression_Score += 3;
        public_reputation += 2;
        cout << "\nYou throw alcohol — the flames roar dramatically.\n";
    }
}
void scene_billboard()
{
    delaySpeak("//------Billboard scene--------//");
    typeLine("Wehre the dialogue at");
    cout << "2) Let the moment pass\n";
    cout << "Choose (1-2): ";

    int choice;
    cin >> choice;

    if (choice == 1)
    {
        isRomanticTensionActive = true;
        Blazer_Impression_Score += 2;
        cout << "\nYou kiss. Time stops...\n";
    }
    else
    {
        isRomanticTensionActive = false;
        cout << "\nYou hold back. A gentle tension remains.\n";
    }
}

void epilogue_summary()
{
    delaySpeak("//-------Epilogue-------//");
    typeLine("Wehre the dialogue at");

    if (isMerciful)
    {
        cout << "Path: Compassionate Leadership.\n";
    }
    else
    {
        cout << "Path: Pragmatic Efficiency.\n";
    }

    if (didFailStreetFight)
    {
        cout << "Your early mistake shaped your tactics.\n\n";
    }
    else
    {
        cout << "Your strong start built your confidence.\n\n";
    }

    cout << "Blonde Blazer Impression Score: " << Blazer_Impression_Score << "\n";

    if (Blazer_Impression_Score >= 4 && isRomanticTensionActive)
    {
        cout << "Outcome: Romance Route unlocked.\n\n";
    }
    else if (Blazer_Impression_Score >= 3)
    {
        cout << "Outcome: Public Legend.\n\n";
    }
    else
    {
        cout << "Outcome: Professional Respect.\n\n";
    }

    cout << "Public Reputation Score: " << public_reputation << "\n";

    cout << "\n--- End of Episode 1 ---\n";
}
