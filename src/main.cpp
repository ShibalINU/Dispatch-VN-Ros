#include <iostream>
#include <chrono>
#include <thread>
#include <string>
#include <limits>

using namespace std;

// -------------------- Prototype --------------------
void Apartment_Interrogation_Scene();
void combat_toxic();
void street_fight();
void bar_flambae();
void billboard();
void epilogue();

// -------------------- Global State --------------------
bool isMerciful = false;
bool isRomanticTensionActive = false;
bool didFailStreetFight = false;
int cont;

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
void delaySpeak(const string &line, int delayMs = 1050)
{
    cout << line << endl;
    this_thread::sleep_for(chrono::milliseconds(delayMs));
}

// Basic choice reader with validation
int readChoice()
{
    int choice;
    while (true)
    {
        if (cin >> choice)
        {
            return choice;
        }
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Please enter a valid number: ";
    }
}

int main()
{
    // ----------------------- MENU --------------------------- //
    int menuChoice;
    cout << "// ----------------------- MENU --------------------------- //" << endl;
    cout << "1) Play from beginning\n";
    cout << "2) Select scene\n";
    cout << "Select option: ";
    menuChoice = readChoice();

    // ----------------------- VARIABLES --------------------------- //
    isMerciful = false;
    isRomanticTensionActive = false;
    didFailStreetFight = false;
    Blazer_Impression_Score = 0;
    Tactical_Efficiency_Score = 0;
    public_reputation = 0;

    //-----All of the functions will run in order------//
    if (menuChoice == 1)
    {
        Apartment_Interrogation_Scene();
        combat_toxic();
        street_fight();
        bar_flambae();
        billboard();
        epilogue();
    }

    if (menuChoice == 2)
    {
        int scene;
        cout << "// -------------------- SCENE SELECT (SWITCH) --------------------" << endl;
        cout << "1) Apartment Interrogation\n";
        cout << "2) Combat Toxic\n";
        cout << "3) Street Fight\n";
        cout << "4) Bar Scene\n";
        cout << "5) Billboard Scene\n";
        cout << "Choose scene: ";
        scene = readChoice();

        // -------------------- SCENE SELECT (SWITCH) --------------------
        switch (scene)
        {
        case 1:
            Apartment_Interrogation_Scene();
            delaySpeak("//-------Scene end------//");
            typeLine("Do you want to continue? Yes [1] No [2]");
            cont = readChoice();
            // Continue option
            if (cont == 1)
            {
                combat_toxic();
                street_fight();
                bar_flambae();
                billboard();
                epilogue();
            }
            else
            {
                return 0;
            }
            break;
        case 2:
            combat_toxic();
            delaySpeak("//-------Scene end------//");
            typeLine("Do you want to continue? Yes [1] No [2]");
            cont = readChoice();
            if (cont == 1)
            {
                street_fight();
                bar_flambae();
                billboard();
                epilogue();
            }
            else
            {
                return 0;
            }
            break;
        case 3:
            street_fight();
            delaySpeak("//-------Scene end------//");
            typeLine("Do you want to continue? Yes [1] No [2]");
            cont = readChoice();
            if (cont == 1)
            {
                bar_flambae();
                billboard();
                epilogue();
            }
            else
            {
                return 0;
            }
            break;
        case 4:
            bar_flambae();
            delaySpeak("//-------Scene end------//");
            typeLine("Do you want to continue? Yes [1] No [2]");
            cont = readChoice();
            if (cont == 1)
            {
                billboard();
                epilogue();
            }
            else
            {
                return 0;
            }
            break;
        case 5:
            billboard();
            delaySpeak("//-------Scene end------//");
            typeLine("Do you want to continue? Yes [1] No [2]");
            cont = readChoice();
            if (cont == 1)
            {
                epilogue();
            }
            else
            {
                return 0;
            }
            break;
        default:
            cout << "Invalid selection.\n";
            break;
        }

        return 0;
    }
}
// ----------------------- EPISODE DEFINITIONS --------------------------- //

void Apartment_Interrogation_Scene()
{
    int choice;
    typeLine("Robert: So, here's what's going to happen.");
    typeLine("Robert: I'm going to hang you off the side of this building");
    typeLine("Robert: and you're going to tell me where Shroud is or I'm going to drop you to your death.");
    typeLine("Soothing Goon: Come on. I thought we were having a breakthrough.");
    typeLine("Robert: Hey, we did. You know, for being a real piece of shit you're pretty easy to talk to");
    typeLine("Robert: but the only breakthrough I need right now is—");
    typeLine("Soothing Goon: I'm not TELLING YOU SHIT! YOU FUCKIN' loser!");
    typeLine("Robert: SEE, this is more like how I thought this would be.");
    delaySpeak("//-------Drags chair across the room------//");
    typeLine("Soothing Goon: I hope Shroud kills you just like he killed your father!");
    typeLine("Soothing Goon: You hear me? UGH!");
    typeLine("Soothing Goon: Are we outside?");
    typeLine("Robert: Windy up here tonight, huh?");
    typeLine("Soothing Goon: Why are we outside?");
    typeLine("Robert: No telling where you land.");
    typeLine("Soothing Goon: It smells like outside. [laughter]");
    delaySpeak("//-------Lifts chair over the ledge------//");
    typeLine("Soothing Goon: Fuc-Fuck-FUCK! WAIT! WAIT! WAIT!");
    typeLine("Robert: Hey! Hey! I have neighbors.");
    typeLine("Robert: Use your inside voice and just tell me where Shroud is?");
    typeLine("Soothing Goon: Okay, Okay, uh uh-- Steel- Steel Mill");
    typeLine("Soothing Goon: Llewelyn uh, Llewelyn Steel Works okay, Fuck.");
    typeLine("Robert: Are you sure?");
    typeLine("Soothing Goon: Yes! please, that's all I know!");
    typeLine("Robert: Stop screaming! Goddamnit.");
    typeLine("Soothing Goon: Help! HEEEEEEL--");
    typeLine("Robert: Hey, hey, I will pull you up if you quiet the fuck down.");
    delaySpeak("LET HIM DROP [1] PULL HIM BACK [2]");
    cout << "Choose (1-2): ";
    choice = readChoice();

    if (choice == 1)
    {
        isMerciful = false;
        typeLine("Robert: Sir. If you want something to scream about, I'll give you something to scream about");
        delaySpeak("//------Drops off from the ledge--------//");
        delaySpeak("//------Lands on top of a mattress--------//");
        typeLine("Soothing Goon: You piece of shit!");
        typeLine("Robert: Sir. Hey, you're welcome.");
    }
    else
    {
        isMerciful = true;
        delaySpeak("//------Pulls the chair back--------//");
        typeLine("Honestly, it was talking to someone about this stuff.");
        typeLine("I guess what I'm saying is, I'm really glad I kidnapped you tonight.");
    }
}

void handlePuntStomp()
{
    int subchoice;
    delaySpeak("PUNT [1] STOMP [2]");
    cout << "Choose (1-2): ";
    subchoice = readChoice();
    if (subchoice == 1)
    {
        delaySpeak("//------Robot breaks in and kicks goon--------//");
        delaySpeak("//------Shroud flies across--------//");
        typeLine("Soothing Goon: [Grunts] Uh, Ugh.");
        typeLine("Mecha Man: How was that one?");
        typeLine("Mecha Man: Did that satisfy your meeky fall fetish?");
        typeLine("Mecha Man: Just show me your lame ass superpower so we can get this over with");
    }
    else
    {
        delaySpeak("//------Robot falls on top of goon--------//");
        typeLine("Soothing Goon: [Grunts] Uh, Ugh.");
        typeLine("Mecha Man: Oops, looks like my Robot heard something about fall");
        typeLine("Mecha Man: Just show me your lame ass superpower so we can get this over with");
    }
}

void combat_toxic()
{
    int choice;
    delaySpeak("//------Combat toxic scene--------//");
    typeLine("Mecha man: Hey, um can i get a copy of that video when we're throguh here?");
    delaySpeak("Mecha man:  It's over shroud [1] Prepare to die [2] I'm here to fuck you up [3]");
    cin >> choice;

    if (isMerciful == true)
    {
        if (choice == 1)
        {
            typeLine("Mecha man: Cause it's over, shroud");
            typeLine("Mecha man: And it would be nice to watch that back at a different angle");
            typeLine("Soothing Goon: Oh no, it's over shroud");
            typeLine("Soothing Goon: All this buildup face to face with you father's killer");
            typeLine("Soothing Goon: And you come in here with that lame shit?");
            typeLine("Mecha man: Uh, where the fuck is shroud?");
            typeLine("Soothing Goon: He'll be here in a bit");
            typeLine("Soothing Goon: Oh hey, after our conversation I asked him about your dad");
            typeLine("Soothing Goon: Fun little tidbit, he was very well hydrated");
            typeLine("Soothing Goon: It trurns out right after shroud shot him in the chest-");
            typeLine("Soothing Goon: You should've made me let me fall cause i will fuck you up-");
            delaySpeak("PUNT [1] STOMP [2]");
            cin >> choice;
            if (choice == 1)
            {
                delaySpeak("//------Robot breaks in and kicks goonn--------//");
                delaySpeak("//------Shroud flies across--------//");
                typeLine("Soothing Goon: [Grunts] Uh, Ugh.");
                typeLine("Mecha Man: How was that one?");
                typeLine("Mecha Man: Did that satisfy you meeky fall fetish?");
                typeLine("Mecha Man: Just show me your lame ass superpower so we can get this over with");
            }
            else
            {
                delaySpeak("//------Robot falls on top of goon--------//");
                typeLine("Soothing Goon: [Grunts] Uh, Ugh.");
                typeLine("Mecha Man: Oops, looks like my Robot heard something about fall");
                typeLine("Mecha Man:  Just show me your lame ass superpower so we can get this over with");
            }
        }
        else if (choice == 2)
        {
            typeLine("Mecha man: Cause prepare to die, shroud");
            typeLine("Mecha man: And it would be nice to watch that back at a different angle");
            typeLine("Soothing Goon: Oh no, it's over shroud");
            typeLine("Soothing Goon: All this buildup face to face with you father's killer");
            typeLine("Soothing Goon: And you come in here with that lame shit?");
            typeLine("Mecha man: Uh, where the fuck is shroud?");
            typeLine("Soothing Goon: He'll be here in a bit");
            typeLine("Soothing Goon: Oh hey, after our conversation I asked him about your dad");
            typeLine("Soothing Goon: Fun little tidbit, he was very well hydrated");
            typeLine("Soothing Goon: It trurns out right after shroud shot him in the chest-");
            typeLine("Soothing Goon: You should've made me let me fall cause i will fuck you up-");
            delaySpeak("PUNT [1] STOMP [2]");
            cin >> choice;
            if (choice == 1)
            {
                delaySpeak("//------Robot breaks in and kicks goonn--------//");
                delaySpeak("//------Shroud flies across--------//");
                typeLine("Soothing Goon: [Grunts] Uh, Ugh.");
                typeLine("Mecha Man: How was that one?");
                typeLine("Mecha Man: Did that satisfy you meeky fall fetish?");
                typeLine("Mecha Man: Just show me your lame ass superpower so we can get this over with");
            }
            else
            {
                delaySpeak("//------Robot falls on top of goon--------//");
                typeLine("Soothing Goon: [Grunts] Uh, Ugh.");
                typeLine("Mecha Man: Oops, looks like my Robot heard something about fall");
                typeLine("Mecha Man:  Just show me your lame ass superpower so we can get this over with");
            }
        }
        else
        {
            typeLine("Mecha man: Cause i'm here to fuck you up, shroud");
            typeLine("Mecha man: And it would be nice to watch that back at a different angle");
            typeLine("Soothing Goon: Oh no, it's over shroud");
            typeLine("Soothing Goon: All this buildup face to face with you father's killer");
            typeLine("Soothing Goon: And you come in here with that lame shit?");
            typeLine("Mecha man: Uh, where the fuck is shroud?");
            typeLine("Soothing Goon: He'll be here in a bit");
            typeLine("Soothing Goon: Oh hey, after our conversation I asked him about your dad");
            typeLine("Soothing Goon: Fun little tidbit, he was very well hydrated");
            typeLine("Soothing Goon: It trurns out right after shroud shot him in the chest-");
            typeLine("Soothing Goon: You should've made me let me fall cause i will fuck you up");
            delaySpeak("PUNT [1] STOMP [2]");
            cin >> choice;
            if (choice == 1)
            {
                delaySpeak("//------Robot breaks in and kicks goonn--------//");
                delaySpeak("//------Shroud flies across--------//");
                typeLine("Soothing Goon: [Grunts] Uh, Ugh.");
                typeLine("Mecha Man: How was that one?");
                typeLine("Mecha Man: Did that satisfy you meeky fall fetish?");
                typeLine("Mecha Man: Just show me your lame ass superpower so we can get this over with");
            }
            else
            {
                delaySpeak("//------Robot falls on top of goon--------//");
                typeLine("Soothing Goon: [Grunts] Uh, Ugh.");
                typeLine("Mecha Man: Oops, looks like my Robot heard something about fall");
                typeLine("Mecha Man:  Just show me your lame ass superpower so we can get this over with");
            }
        }
    }
    else
    {
        if (choice == 1)
        {
            typeLine("Mecha man: Cause it's over, shroud");
            typeLine("Mecha man: And it would be nice to watch that back at a different angle");
            typeLine("Soothing Goon: Oh no, it's over shroud");
            typeLine("Soothing Goon: All this buildup face to face with you father's killer");
            typeLine("Soothing Goon: And you come in here with that lame shit?");
            typeLine("Mecha man: Uh, where the fuck is shroud?");
            typeLine("Soothing Goon: He'll be here in a bit");
            typeLine("Soothing Goon: Oh hey, after our conversation I asked him about your dad");
            typeLine("Soothing Goon: Fun little tidbit, he was very well hydrated");
            typeLine("Soothing Goon: It trurns out right after shroud shot him in the chest-");
            typeLine("Soothing Goon: After that you let me go i swore that i will fuck you up");
            delaySpeak("PUNT [1] STOMP [2]");
            cin >> choice;
            if (choice == 1)
            {
                delaySpeak("//------Robot breaks in and kicks goonn--------//");
                delaySpeak("//------Shroud flies across--------//");
                typeLine("Soothing Goon: [Grunts] Uh, Ugh.");
                typeLine("Mecha Man: I shouldn't have used that perfectly good mattres to break your fall?");
                typeLine("Soothing Goon: Perfectly Good? I've had better!");
                typeLine("Mecha Man: Just show me your lame ass superpower so we can get this over with");
            }
            else
            {
                delaySpeak("//------Robot falls on top of goon--------//");
                typeLine("Soothing Goon: [Grunts] Uh, Ugh.");
                typeLine("Mecha Man: Is that what the mattress felt when I dropped you off?");
                typeLine("Soothing Goon: You son of a bitch! I WILL FUCKING KILL YOU");
                typeLine("Mecha Man: oh no, So scary.");
                typeLine("Mecha Man: Just show me your lame ass superpower so we can get this over with");
            }
        }
        else if (choice == 2)
        {
            typeLine("Mecha man: Cause prepare to die, shroud");
            typeLine("Mecha man: And it would be nice to watch that back at a different angle");
            typeLine("Soothing Goon: Oh no, it's over shroud");
            typeLine("Soothing Goon: All this buildup face to face with you father's killer");
            typeLine("Soothing Goon: And you come in here with that lame shit?");
            typeLine("Mecha man: Uh, where the fuck is shroud?");
            typeLine("Soothing Goon: He'll be here in a bit");
            typeLine("Soothing Goon: Oh hey, after our conversation I asked him about your dad");
            typeLine("Soothing Goon: Fun little tidbit, he was very well hydrated");
            typeLine("Soothing Goon: It trurns out right after shroud shot him in the chest-");
            typeLine("Soothing Goon: After that you let me go i swore that i will fuck you up");
            delaySpeak("PUNT [1] STOMP [2]");
            cin >> choice;
            if (choice == 1)
            {
                delaySpeak("//------Robot breaks in and kicks goonn--------//");
                delaySpeak("//------Shroud flies across--------//");
                typeLine("Soothing Goon: [Grunts] Uh, Ugh.");
                typeLine("Mecha Man: How was that one?");
                typeLine("Mecha Man: Did that satisfy you meeky fall fetish?");
                typeLine("Mecha Man: Just show me your lame ass superpower so we can get this over with");
            }
            else
            {
                delaySpeak("//------Robot falls on top of goon--------//");
                typeLine("Soothing Goon: [Grunts] Uh, Ugh.");
                typeLine("Mecha Man: Oops, looks like my Robot heard something about fall one I let go");
                typeLine("Mecha Man:  Just show me your lame ass superpower so we can get this over with");
            }
        }
        else
        {
            typeLine("Mecha man: Cause i'm here to fuck you up, shroud");
            typeLine("Mecha man: And it would be nice to watch that back at a different angle");
            typeLine("Soothing Goon: Oh no, it's over shroud");
            typeLine("Soothing Goon: All this buildup face to face with you father's killer");
            typeLine("Soothing Goon: And you come in here with that lame shit?");
            typeLine("Mecha man: Uh, where the fuck is shroud?");
            typeLine("Soothing Goon: He'll be here in a bit");
            typeLine("Soothing Goon: Oh hey, after our conversation I asked him about your dad");
            typeLine("Soothing Goon: Fun little tidbit, he was very well hydrated");
            typeLine("Soothing Goon: It trurns out right after shroud shot him in the chest-");
            delaySpeak("PUNT [1] STOMP [2]");
            cin >> choice;
            if (choice == 1)
            {
                delaySpeak("//------Robot breaks in and kicks goonn--------//");
                delaySpeak("//------Shroud flies across--------//");
                typeLine("Soothing Goon: [Grunts] Uh, Ugh.");
                typeLine("Mecha Man: How was that one?");
                typeLine("Mecha Man: Did that satisfy you meeky fall fetish?");
                typeLine("Mecha Man: Just show me your lame ass superpower so we can get this over with");
            }
            else
            {
                delaySpeak("//------Robot falls on top of goon--------//");
                typeLine("Soothing Goon: [Grunts] Uh, Ugh.");
                typeLine("Mecha Man: Oops, looks like my Robot heard something about fall one I let go");
                typeLine("Mecha Man:  Just show me your lame ass superpower so we can get this over with");
            }
        }
    }
}

void street_fight()
{
    delaySpeak("//------Street fight scene--------//");
    typeLine("Mecha man: Hey, Assholes");
    typeLine("Mecha man: Yeah, all you asshole, pretty disrespectful to be doing that infront of me");
    typeLine("Red Ski: Hey! Who you calling asshole, asshole!? ");
    typeLine("Orange Ski: I'll handle this idiot keep loading");
    typeLine("Orange Ski: and who the fuck are you?");
    typeLine("Mecha man: Well right now, i'm someone who's got nothing to lose, that's probably bad news for you");
    typeLine("Orange Ski: Well what nothing you have, you're about to fucking lose again");
    typeLine("Mecha man: whatever the case ");
    typeLine("Mecha man: I'm enough to deal with a pack of fucking skittles idiots like you");
    delaySpeak("PUNCH WITH RIGHT [1] PUNCH WITH LEFT [2]");
    cout << "Choose (1-2): ";

    int choice = readChoice();

    if (choice == 1)
    {
        didFailStreetFight = true;
        Tactical_Efficiency_Score -= 1;
        public_reputation -= 1;
        delaySpeak("//------Orange ski Dodges--------//");
        delaySpeak("//------Mecha Man Gets struck by the crowbar and falls down--------//");
        delaySpeak("//------Gets beat up by the group--------//");
        delaySpeak("//------Random person flies and drags enemies away--------//");
        typeLine("Blonde Blazer: The guys I threw, he landed on the roof right? ");
        typeLine("Green ski from a distance*: All good!");
        typeLine("Blonde Blazer: Hi I'm Blonde Blazer ");
        typeLine("Mecha Man: Oh I know you you're famous");
        typeLine("Blonde Blazer: I'm not famous, I'm just a hero for hire");
        delaySpeak("//------Bus with Blonde Blazer Poster passses by--------//");
        typeLine("Mecha Man: Yeah I doubt that");
        typeLine("Blonde Blazer: You look like you could use a drink.");
    }
    else
    {
        Tactical_Efficiency_Score += 2;
        Blazer_Impression_Score += 1;
        public_reputation += 1;
        delaySpeak("//------Knocks Orsange ski to ground--------//");
        delaySpeak("//------Mecha Man Gets punched by Red Ski and falls down--------//");
        delaySpeak("//------Gets beat up by the group--------//");
        delaySpeak("//------Random person flies and drags enemies away--------//");
        typeLine("Blonde Blazer: The guys I threw, he landed on the roof right? ");
        typeLine("Green ski from a distance*: All good!");
        typeLine("Blonde Blazer: Hi I'm Blonde Blazer ");
        typeLine("Mecha Man: Oh I know you you're famous");
        typeLine("Blonde Blazer: I'm not famous, I'm just a hero for hire");
        delaySpeak("//------Bus with Blonde Blazer Poster passses by--------//");
        typeLine("Mecha Man: Yeah I doubt that");
        typeLine("Blonde Blazer: You look like you could use a drink.");
    }
}

void bar_flambae()
{
    delaySpeak("//------Bar scene--------//");
    typeLine("Blonde Blazer: I gotta say blazer that does sound intriguing-");
    typeLine("Mecha Man: That's actually-");
    delaySpeak("//------Spits drink on Blazer--------//");
    typeLine("Blonde Blazer: Not water...");
    typeLine("Mecha Man: This is like pure alcohol?!");
    typeLine("Blonde Blazer: Well it is actually *Wipes face");
    typeLine("Mecha Man: You drink hard liquor from a pint glass?");
    typeLine("Blonde Blazer: I actually drink straight from the glass");
    typeLine("Blonde Blazer: I'm gonna go clean up");
    typeLine("Mecha Man: I'm so sorry");
    typeLine("Blonde Blazer: I will be right back");
    delaySpeak("//------Blazer stands up and goes to the rest room--------//");
    delaySpeak("//------A guy screams from across the room--------//");
    typeLine("Flambae: [Distant scream] Hey! Bitch!");
    delaySpeak("//------Mechaman looks--------//");
    typeLine("Flambae: I'm talking to you bitch!");
    typeLine("Mecha Man: I turned around because someone screamed, not cause I'm a bitch or anything");
    typeLine("Flambae: Last time i checked this is a bar for superheroes");
    typeLine("Mecha Man: No way! Is that your Superpower? telling people obvious shit?");
    delaySpeak("//-------Coupe snickers--------//");
    typeLine("Mecha Man:  Are you the villain i just fucked up, a couple of years ago?");
    typeLine("Flambae: I am not a villain, I am flambae, a suprehero.");
    typeLine("Flambae: Now Mecha Dick get the fuck out of here cause you're not a superhero anymore");
    typeLine("Flambae: We can do this the easy way or the hard w-");
    delaySpeak("THROW WATER [1] THROW ALCOHOL [2]");
    cout << "Choose (1-2): ";
    int choice = readChoice();

    if (choice == 1)
    {
        Blazer_Impression_Score += 3;
        public_reputation -= 1;
        delaySpeak("//-----Throws water on Flambae--------//");
        delaySpeak("//-----Flames gets put out--------//");
        typeLine("Mecha Man:  There, easy way");
        delaySpeak("//-----Flambae visibly gets irritated--------//");
        typeLine("Mecha Man: Are you gonna punch me now?");
        delaySpeak("//-----Flambae rushes towards Mecha man--------//");
        typeLine("Flambae: Raaa!");
        delaySpeak("//-----Slides on water and brakes teeth on the Bar counter--------//");
    }
    else
    {
        Blazer_Impression_Score += 3;
        public_reputation -= 2;
        delaySpeak("//-----Throws alcohol on Flambae--------//");
        delaySpeak("//-----Flambaes hair catches on fire--------//");
        typeLine("Mecha Man:  Sorry, Which  way was that?");
        delaySpeak("//-----Flambae runs outside while burning--------//");
    }
}

void billboard()
{
    delaySpeak("//------Billboard scene--------//");
    typeLine("Robert: What is it?");
    typeLine("Blonde Blazer: I'm not quite drunk to tell you my origin story just yet.");
    typeLine("Blode Blazer: But, remind me to tell you someday ");
    typeLine("Robert: Definetly");
    delaySpeak("//------Blonde Blazer Looks at Robert intently--------//");
    delaySpeak("//------Blonde Softly puts touches Roberts' face--------//");
    typeLine("Blode Blazer: We can work with this.");
    delaySpeak("KISS HER [1] LET THE MOMENT PASS [2]");
    cout << "Choose: ";
    int choice = readChoice();

    if (choice == 1)
    {
        isRomanticTensionActive = true;
        Blazer_Impression_Score += 3;
        delaySpeak("//------Robert Stares back--------//");
        delaySpeak("//------Slowly leans closer Her lips--------//");
        delaySpeak("//------kisses--------//");
        typeLine("Blonde Blazer: No. This.... I'm.. I'm sorry if I gave the Wrong impression.");
        typeLine("Robert: Sorry I totally Misread that-");
        typeLine("Blonde Blazer: You didn't- I mean, you did.. But I definetly...");
        typeLine("Blonde Blazer: The way I went about things tonight");
        typeLine("Blonde Blazer: it was all a little loose. A little unprofessional.");
        typeLine("Robert: Unprofessional? I don't think it applies to this...");
        typeLine("Blonde Blazer: I'm actually here on official business.");
    }
    else
    {
        isRomanticTensionActive = false;
        Blazer_Impression_Score = 0;
        delaySpeak("//------Robert glances awkwardly--------//");
        delaySpeak("//-------Blazer pulls away awrkwardly-------//");
        typeLine("Blonde Blazer: it was all a little loose. A little unprofessional.");
        typeLine("Robert: Unprofessional? I don't think it applies to this...");
        typeLine("Blonde Blazer: I'm actually here on official business.");
    }
}

void epilogue()
{
    delaySpeak("//-------Epilogue-------//");

    if (isMerciful)
    {
        typeLine("Path: Compassionate Leadership.");
        cout << "\n";
    }
    else
    {
        typeLine("Path: Pragmatic Efficiency.");
        cout << "\n";
    }

    if (didFailStreetFight)
    {
        typeLine("Your early mistake shaped your tactics.");
        cout << "\n";
    }
    else
    {
        typeLine("Your strong start built your confidence.");
        cout << "\n";
    }

    cout << "Blonde Blazer Impression Score: " << Blazer_Impression_Score << endl;

    if (Blazer_Impression_Score >= 4 && isRomanticTensionActive)
    {
        cout << "Outcome: Romance Route unlocked." << endl;
    }
    else if (Blazer_Impression_Score >= 3)
    {
        cout << "Outcome: Public Legend." << endl;
    }
    else
    {
        cout << "Outcome: Professional Respect." << endl;
    }

    cout << "Public Reputation Score: " << public_reputation << endl;

    cout << "\n--- End of Episode 1 ---\n";
}
