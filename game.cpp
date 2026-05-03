#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

// ============================================================
//  STRUCTS
// ============================================================
struct Suspect {
    string name;
    string background;
    string dialogue[3];
};

struct Scene {
    string name;
    string difficulty;
    string story;
    string solution;
    Suspect suspects[5];
    int suspectCount;
    int killerIndex;
    string clues[6];
    int clueCount;
};

// ============================================================
//  GLOBALS
// ============================================================
int lives = 3;
int score = 0;

// ============================================================
//  UTILITY
// ============================================================
void printLine() { cout << "\n  ======================================================\n"; }
void printThin() { cout << "  ------------------------------------------------------\n"; }

void printTitle() {
    system("cls || clear");
    printLine();
    cout << "\n";
    cout << "        M U R D E R   A T   M I D N I G H T\n";
    cout << "           A Detective Mystery Game\n";
    cout << "\n";
    printLine();
    cout << "\n  You are Detective Ray Callahan.\n";
    cout << "  Four crime scenes. Four killers. One chance to\n";
    cout << "  prove you are the best detective in the city.\n";
    cout << "\n  Lives: 3    Score: 0\n";
    printLine();
    cout << "\n  Press ENTER to begin...";
    cin.ignore();
    cin.get();
}

void showStatus() {
    cout << "\n  [ Lives: " << lives << "  |  Score: " << score << " ]\n";
}

void gameOver() {
    system("cls || clear");
    printLine();
    cout << "\n        G A M E   O V E R\n\n";
    cout << "  You ran out of lives, Detective.\n";
    cout << "  The killer walks free tonight.\n";
    cout << "\n  Final Score: " << score << "\n";
    printLine();
}

void victoryScreen() {
    system("cls || clear");
    printLine();
    cout << "\n        C A S E   C L O S E D\n\n";
    cout << "  Outstanding work, Detective Callahan!\n";
    cout << "  All four killers are behind bars.\n";
    cout << "  The city is safe once again.\n";
    cout << "\n  Final Score: " << score << " / 400\n";
    if (score >= 350)      cout << "  Rank: MASTER DETECTIVE\n";
    else if (score >= 250) cout << "  Rank: SENIOR DETECTIVE\n";
    else if (score >= 150) cout << "  Rank: DETECTIVE\n";
    else                   cout << "  Rank: ROOKIE\n";
    printLine();
}

// ============================================================
//  PLAY SCENE
// ============================================================
void playScene(Scene s) {
    system("cls || clear");
    printLine();
    cout << "\n  SCENE: " << s.name << "   [" << s.difficulty << "]\n";
    printLine();
    cout << "\n" << s.story << "\n";
    printThin();
    showStatus();

    // Determine how many clues to show based on difficulty
    int cluesShown;
    if      (s.difficulty == "Easy")      cluesShown = s.clueCount;
    else if (s.difficulty == "Medium")    cluesShown = max(1, (s.clueCount * 3) / 4);
    else if (s.difficulty == "Hard")      cluesShown = max(1, s.clueCount / 2);
    else                                  cluesShown = max(1, s.clueCount / 4);

    vector<string> collectedClues;
    bool investigatedOnce = false;
    int sceneScore = 100;
    bool sceneSolved = false;

    while (!sceneSolved && lives > 0) {
        cout << "\n  What do you want to do?\n";
        cout << "  [1] Investigate the scene\n";
        cout << "  [2] Interrogate a suspect\n";
        cout << "  [3] Review clues collected\n";
        cout << "  [4] Make an accusation\n";
        cout << "\n  Your choice: ";

        int choice;
        cin >> choice;

        // Input validation
        if (cin.fail() || choice < 1 || choice > 4) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "\n  Invalid choice. Enter 1-4.\n";
            continue;
        }

        // ── INVESTIGATE ──────────────────────────────────────
        if (choice == 1) {
            if (investigatedOnce) {
                sceneScore -= 10;
                cout << "\n  (Score -10 for extra investigation)\n";
            }
            investigatedOnce = true;
            collectedClues.clear();
            cout << "\n  You search the scene carefully...\n";
            printThin();
            for (int i = 0; i < cluesShown; i++) {
                cout << "  CLUE " << (i + 1) << ": " << s.clues[i] << "\n";
                collectedClues.push_back(s.clues[i]);
            }
            if (cluesShown < s.clueCount)
                cout << "\n  (Some evidence is too obscure to find at this difficulty.)\n";
        }

        // ── INTERROGATE ──────────────────────────────────────
        else if (choice == 2) {
            cout << "\n  SUSPECTS:\n";
            for (int i = 0; i < s.suspectCount; i++)
                cout << "  [" << (i + 1) << "] " << s.suspects[i].name
                     << " — " << s.suspects[i].background << "\n";
            cout << "\n  Who do you want to interrogate? ";
            int si;
            cin >> si;
            if (cin.fail() || si < 1 || si > s.suspectCount) {
                cin.clear();
                cin.ignore(1000, '\n');
                cout << "\n  Invalid suspect number.\n";
                continue;
            }
            Suspect& suspect = s.suspects[si - 1];
            cout << "\n  --- Interrogating: " << suspect.name << " ---\n";
            printThin();
            // Show 2 or 3 dialogue lines depending on difficulty
            int dialogueLines = (s.difficulty == "Easy") ? 2 : 3;
            for (int d = 0; d < dialogueLines; d++) {
                if (!suspect.dialogue[d].empty())
                    cout << "  " << suspect.name << ": \"" << suspect.dialogue[d] << "\"\n";
            }
            printThin();
        }

        // ── REVIEW CLUES ─────────────────────────────────────
        else if (choice == 3) {
            if (collectedClues.empty()) {
                cout << "\n  You haven't investigated yet. No clues collected.\n";
            } else {
                cout << "\n  --- CLUES COLLECTED ---\n";
                for (int i = 0; i < (int)collectedClues.size(); i++)
                    cout << "  " << (i + 1) << ". " << collectedClues[i] << "\n";
            }
        }

        // ── ACCUSE ───────────────────────────────────────────
        else if (choice == 4) {
            cout << "\n  SUSPECTS:\n";
            for (int i = 0; i < s.suspectCount; i++)
                cout << "  [" << (i + 1) << "] " << s.suspects[i].name << "\n";
            cout << "\n  Who do you accuse? ";
            int acc;
            cin >> acc;
            if (cin.fail() || acc < 1 || acc > s.suspectCount) {
                cin.clear();
                cin.ignore(1000, '\n');
                cout << "\n  Invalid accusation.\n";
                continue;
            }
            acc--; // convert to 0-indexed

            if (acc == s.killerIndex) {
                // CORRECT
                cout << "\n  *** CORRECT! ***\n";
                cout << "\n  " << s.solution << "\n";
                score += sceneScore;
                cout << "\n  Scene Score: +" << sceneScore << "   Total: " << score << "\n";
                sceneSolved = true;
                cout << "\n  Press ENTER to continue to next scene...";
                cin.ignore();
                cin.get();
            } else {
                // WRONG
                lives--;
                sceneScore -= 20;
                cout << "\n  *** WRONG! ***  " << s.suspects[acc].name
                     << " is not the killer.\n";
                cout << "  Lives remaining: " << lives << "\n";
                if (lives <= 0) {
                    cout << "\n  The real killer was: "
                         << s.suspects[s.killerIndex].name << "\n";
                    cout << "  " << s.solution << "\n";
                }
            }
        }
    }
}

// ============================================================
//  SCENE DEFINITIONS
// ============================================================

Scene makeScene1() {
    Scene s;
    s.name       = "Westbridge Public Library";
    s.difficulty = "Easy";
    s.story =
        "  Professor Harold Voss is found dead between the shelves\n"
        "  of the Rare Books section, struck on the head with a\n"
        "  heavy encyclopaedia. The library was closed to the public\n"
        "  but four people had special after-hours access. There are\n"
        "  no signs of forced entry — the killer was already inside.\n";
    s.solution =
        "CASE SOLVED: Mrs. Norma Finch, the head librarian, killed\n"
        "  Prof. Voss after he threatened to expose her theft of rare\n"
        "  first editions. Her keycard log placed her on the same floor\n"
        "  at the time of death, and ink from the stolen books was\n"
        "  found on her gloves.";
    s.suspectCount = 4;
    s.killerIndex  = 1; // Norma Finch

    // Suspect 0
    s.suspects[0].name       = "James Alderton";
    s.suspects[0].background = "Graduate student, was returning a book";
    s.suspects[0].dialogue[0] = "I was at the front desk the whole time, ask the security camera.";
    s.suspects[0].dialogue[1] = "Professor Voss and I disagreed on research, but I'd never hurt him.";
    s.suspects[0].dialogue[2] = "I heard a loud thud around 9 PM but thought it was books falling.";

    // Suspect 1 — KILLER
    s.suspects[1].name       = "Norma Finch";
    s.suspects[1].background = "Head librarian, 20 years at the library";
    s.suspects[1].dialogue[0] = "I was in my office doing inventory all evening. I saw nothing.";
    s.suspects[1].dialogue[1] = "The Professor was a valued patron. This is a terrible tragedy.";
    s.suspects[1].dialogue[2] = "I don't know why my keycard shows the rare books floor — it must be an error.";

    // Suspect 2
    s.suspects[2].name       = "Dr. Priya Nanda";
    s.suspects[2].background = "Visiting academic, researching manuscripts";
    s.suspects[2].dialogue[0] = "I left at 8:30 PM. You can check the sign-out log.";
    s.suspects[2].dialogue[1] = "Harold and I were old friends. I'm devastated.";
    s.suspects[2].dialogue[2] = "";

    // Suspect 3
    s.suspects[3].name       = "Carl Bowen";
    s.suspects[3].background = "Security guard on night duty";
    s.suspects[3].dialogue[0] = "I was doing rounds on the ground floor. Never went upstairs.";
    s.suspects[3].dialogue[1] = "The keycard logs show everyone's movements — check those.";
    s.suspects[3].dialogue[2] = "";

    s.clueCount   = 5;
    s.clues[0] = "A heavy encyclopaedia (Vol. 7) is found near the body with blood on its spine.";
    s.clues[1] = "The keycard log shows Norma Finch accessed the Rare Books floor at 9:02 PM.";
    s.clues[2] = "Three rare first editions are missing from their locked cabinet.";
    s.clues[3] = "Black ink stains are found on a pair of cotton gloves in the librarian's office.";
    s.clues[4] = "The security camera on floor 2 was manually switched off at 8:55 PM.";

    return s;
}

Scene makeScene2() {
    Scene s;
    s.name       = "Harmon University Research Lab";
    s.difficulty = "Medium";
    s.story =
        "  Dr. Elena Cross, lead scientist of Project NOVA, is found\n"
        "  dead in Lab 4B — poisoned by a compound only available in\n"
        "  the lab's restricted chemical storage. Her research data has\n"
        "  been wiped from the server. Five colleagues had lab access\n"
        "  that night. Someone wanted her breakthrough buried forever.\n";
    s.solution =
        "CASE SOLVED: Dr. Marcus Webb poisoned Dr. Cross and wiped\n"
        "  her data to steal credit for the NOVA project. His login\n"
        "  accessed the restricted storage at 11 PM, and traces of\n"
        "  the compound were found in his coat pocket.";
    s.suspectCount = 5;
    s.killerIndex  = 2; // Marcus Webb

    s.suspects[0].name       = "Dr. Yuki Tanaka";
    s.suspects[0].background = "Junior researcher, Elena's protege";
    s.suspects[0].dialogue[0] = "Dr. Cross was like a mentor to me. Why would I hurt her?";
    s.suspects[0].dialogue[1] = "I was running simulations in Lab 2 all night. Check the logs.";
    s.suspects[0].dialogue[2] = "Someone must have stolen my keycard at some point — it went missing briefly.";

    s.suspects[1].name       = "Prof. Sandra Hill";
    s.suspects[1].background = "Department head, rival researcher";
    s.suspects[1].dialogue[0] = "Elena and I competed, yes, but professionally. Not like this.";
    s.suspects[1].dialogue[1] = "I was in a faculty meeting until midnight. Twelve witnesses.";
    s.suspects[1].dialogue[2] = "Check who accessed the chemical storage — that will tell you everything.";

    // Suspect 2 — KILLER
    s.suspects[2].name       = "Dr. Marcus Webb";
    s.suspects[2].background = "Co-researcher on Project NOVA";
    s.suspects[2].dialogue[0] = "I left the lab at 10 PM. I have a gym receipt to prove it.";
    s.suspects[2].dialogue[1] = "Elena and I worked perfectly together. No issues whatsoever.";
    s.suspects[2].dialogue[2] = "I don't know anything about the server wipe. Sounds like a hack.";

    s.suspects[3].name       = "Ravi Okafor";
    s.suspects[3].background = "Lab technician, handles chemical storage";
    s.suspects[3].dialogue[0] = "I locked the chemical storage at 9 PM and went home. It's on CCTV.";
    s.suspects[3].dialogue[1] = "Only senior researchers have the override code for the storage.";
    s.suspects[3].dialogue[2] = "Dr. Webb asked me the storage override code last week. Said he forgot his.";

    s.suspects[4].name       = "Lisa Cheng";
    s.suspects[4].background = "IT administrator, manages the servers";
    s.suspects[4].dialogue[0] = "The server wipe was done with Dr. Cross's own credentials. Someone stole them.";
    s.suspects[4].dialogue[1] = "I was at home. My remote access logs confirm I never touched those servers.";
    s.suspects[4].dialogue[2] = "Dr. Webb asked me to restore his lab login last week — said he got locked out.";

    s.clueCount   = 6;
    s.clues[0] = "The victim was poisoned by Compound X-7, stored only in restricted Chemical Storage B.";
    s.clues[1] = "Login records show Dr. Marcus Webb accessed Chemical Storage B at 11:03 PM.";
    s.clues[2] = "The project server was wiped using Dr. Cross's stolen credentials at 11:45 PM.";
    s.clues[3] = "Traces of Compound X-7 are found in a vial inside Dr. Webb's coat pocket.";
    s.clues[4] = "The gym receipt Webb mentioned is timestamped 10:15 PM — but the gym is 5 mins from the lab.";
    s.clues[5] = "A backup copy of NOVA data is found in a folder named 'MW_Personal' on the server.";

    return s;
}

Scene makeScene3() {
    Scene s;
    s.name       = "Riverside Mall Parking Lot";
    s.difficulty = "Hard";
    s.story =
        "  Tony Marsh, a local businessman, is found strangled in his\n"
        "  car in Level 3 of the Riverside Mall parking lot. His\n"
        "  briefcase containing a large cash sum is missing. Security\n"
        "  footage of Level 3 was looped — someone knew the system.\n"
        "  Four people were seen entering Level 3 that evening.\n";
    s.solution =
        "CASE SOLVED: Officer Dana Cole strangled Tony Marsh to\n"
        "  seize the cash he was carrying — evidence in an ongoing\n"
        "  bribery case she was secretly suppressing. She looped the\n"
        "  security footage using her police access codes and fled\n"
        "  before backup arrived.";
    s.suspectCount = 4;
    s.killerIndex  = 3; // Dana Cole

    s.suspects[0].name       = "Ray Gutierrez";
    s.suspects[0].background = "Tony's business partner";
    s.suspects[0].dialogue[0] = "Tony owed me money, sure, but I'd never go this far.";
    s.suspects[0].dialogue[1] = "I was in the mall food court. Dozens of people saw me.";
    s.suspects[0].dialogue[2] = "Check Tony's phone — he was meeting someone that night. Not me.";

    s.suspects[1].name       = "Megan Tso";
    s.suspects[1].background = "Tony's personal assistant";
    s.suspects[1].dialogue[0] = "He told me he had a private meeting. He didn't say with who.";
    s.suspects[1].dialogue[1] = "I drove him there and waited on Level 1. I never went up.";
    s.suspects[1].dialogue[2] = "Someone powerful wanted that briefcase gone. This goes higher than you think.";

    s.suspects[2].name       = "Derek Lam";
    s.suspects[2].background = "Mall security manager";
    s.suspects[2].dialogue[0] = "The footage loop was done with a police override code — not our system.";
    s.suspects[2].dialogue[1] = "I reported the camera anomaly the moment we found it. Check my report time.";
    s.suspects[2].dialogue[2] = "None of my team have access to Level 3 override. Only law enforcement does.";

    // Suspect 3 — KILLER
    s.suspects[3].name       = "Officer Dana Cole";
    s.suspects[3].background = "First officer on the scene";
    s.suspects[3].dialogue[0] = "I arrived after the call came in. Purely routine response.";
    s.suspects[3].dialogue[1] = "I don't know anything about camera loops. That's an IT issue.";
    s.suspects[3].dialogue[2] = "Tony Marsh had a long list of enemies. Don't waste time on me.";

    s.clueCount = 5;
    s.clues[0] = "The security footage loop used a police department override code.";
    s.clues[1] = "Tony's phone shows a deleted call log — partially recovered, shows a city area code.";
    s.clues[2] = "Mud on the victim's car door matches soil from the embankment behind Level 3 — accessible only from the stairwell exit.";
    s.clues[3] = "Officer Cole's body camera was switched off 11 minutes before she radioed in the discovery.";

    // Only 3 are shown on Hard (50% of 5 = 2-3)
    s.clues[4] = "A partial boot print near the car matches standard police-issue footwear, size 7.";

    return s;
}

Scene makeScene4() {
    Scene s;
    s.name       = "Grand Harmon Auditorium";
    s.difficulty = "Very Hard";
    s.story =
        "  Celebrated conductor Maestro Aldric Vane collapses mid-\n"
        "  performance and dies backstage. The cause: a fast-acting\n"
        "  toxin laced into his personal water bottle. The auditorium\n"
        "  was packed, but only five people had backstage access.\n"
        "  Everyone has a motive. Almost no one is telling the truth.\n";
    s.solution =
        "CASE SOLVED: Cellist Irina Sobol poisoned Maestro Vane.\n"
        "  He had been blackmailing her over a forged music degree\n"
        "  for three years. She laced his water bottle during the\n"
        "  pre-show rehearsal using a toxin she had obtained through\n"
        "  her pharmacist brother. Her fingerprints were found on\n"
        "  the bottle's inner seal.";
    s.suspectCount = 5;
    s.killerIndex  = 1; // Irina Sobol

    s.suspects[0].name       = "Felix Drummond";
    s.suspects[0].background = "Stage manager, 10 years with the orchestra";
    s.suspects[0].dialogue[0] = "Everyone loved the Maestro. This makes no sense to me.";
    s.suspects[0].dialogue[1] = "I was managing lighting cues all night. I barely went backstage.";
    s.suspects[0].dialogue[2] = "Irina was alone in the Maestro's room during the warm-up. I saw her leave.";

    // Suspect 1 — KILLER
    s.suspects[1].name       = "Irina Sobol";
    s.suspects[1].background = "Principal cellist, 3 years with the orchestra";
    s.suspects[1].dialogue[0] = "I admired the Maestro deeply. He gave me this opportunity.";
    s.suspects[1].dialogue[1] = "I was tuning backstage the whole time. Other musicians saw me.";
    s.suspects[1].dialogue[2] = "I did go in for a moment to return his baton — the door was open.";

    s.suspects[2].name       = "Margaret Vane";
    s.suspects[2].background = "Maestro's wife, present at the performance";
    s.suspects[2].dialogue[0] = "Our marriage had problems — but I did not do this.";
    s.suspects[2].dialogue[1] = "I was in the front row the entire evening. Ask anyone.";
    s.suspects[2].dialogue[2] = "Aldric was being blackmailed. He never told me by whom.";

    s.suspects[3].name       = "Oliver Kress";
    s.suspects[3].background = "Young violinist, recently demoted by the Maestro";
    s.suspects[3].dialogue[0] = "Yes, he demoted me. I was angry. But murder? No.";
    s.suspects[3].dialogue[1] = "I was with three other musicians in the green room all night.";
    s.suspects[3].dialogue[2] = "Ask Irina what she was doing in his room before the show.";

    s.suspects[4].name       = "Dr. Simon Hale";
    s.suspects[4].background = "Orchestra's private physician";
    s.suspects[4].dialogue[0] = "I identified the toxin — it's pharmacy-grade. Not something I'd use.";
    s.suspects[4].dialogue[1] = "I was in the audience until he collapsed, then rushed backstage.";
    s.suspects[4].dialogue[2] = "Whoever did this had access to controlled substances. Follow that trail.";

    s.clueCount = 6;
    // Very Hard: only 25% shown = 1-2 clues
    s.clues[0] = "Fingerprints matching Irina Sobol are found on the inner seal of the water bottle.";
    s.clues[1] = "The toxin used is pharmacy-grade, traceable to a compounding pharmacy in the east district.";
    s.clues[2] = "Irina's brother is a licensed pharmacist at an east district compounding pharmacy.";
    s.clues[3] = "A burner phone found in Irina's bag contains blackmail payment records to 'AV'.";
    s.clues[4] = "Stage manager Felix saw Irina leaving the Maestro's dressing room 20 mins before curtain.";
    s.clues[5] = "The Maestro's private journal mentions 'IS' in connection with document forgery fears.";

    return s;
}

// ============================================================
//  MAIN
// ============================================================
int main() {
    srand(time(0));

    printTitle();

    Scene scenes[4];
    scenes[0] = makeScene1();
    scenes[1] = makeScene2();
    scenes[2] = makeScene3();
    scenes[3] = makeScene4();

    for (int i = 0; i < 4; i++) {
        if (lives <= 0) break;
        playScene(scenes[i]);
    }

    if (lives <= 0) {
        gameOver();
    } else {
        victoryScreen();
    }

    cout << "\n  Thank you for playing!\n\n";
    return 0;
}
