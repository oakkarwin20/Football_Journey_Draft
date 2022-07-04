//Story should have beginning and 3 possible endings.

#include <iostream>

using std::cout;
using std::cin;
using namespace std;

int main() {

    int playerChoice;
    int anyKey;

    cout << "================================================================================\n"
        "                                     FOOTBALL JOURNEY\n"
        "================================================================================\n";
    cout << "Welcome to the debut match of your career!\n";
    cout << "You are a young new talented striker on a world class soccer team (Giran).\n"
        "This is the first step in your story.\n"
        "===========================================================================\n"
        "(1) for more backstory.\n"
        "(2) to start the game.\n";

    cin >> playerChoice;

    /** Choice #1
    *   Backstory
    */

    if (playerChoice == 1) {

        cout << "===========================================================================\n";
        cout << "You were always a popular player in the Under-21 youth teams\n"
            "finding it easy to stand out amongst the squad.\n"
            "Physically, you could run faster than others.\n"
            "Technically, your skills were better, scoring and assisting goals regularly\n"
            "practice wasn't really challenging at that level.\n"
            "All of that made you believe that eventually, your time would come.\n"
            "A chance to join the senior members of the team\n"
            "and play at the most competitive level.\n"
            "Not only that but to decorate your home with all the trophies that you desire.\n"
            "And now, that dream seems so close within reach...\n"
            "Enduring the hardships of extended training hours throughout your whole life,\n"
            "your chance to impress the world has finally come.\n";
        cout << "===========================================================================\n";
        cout << "(3) to remember the day before...\n";
        
        cin >> anyKey;
    }

    //====================================================================================================================================================

    /** Player presses 2
    *   stepping out onto the pitch
    */

    cout << "===========================================================================\n";
    cout << "As you step out of the dressing room and onto the pitch,\n"
        "you hear the roars of the crowd. Fans screaming left and right.\n"
        "You could barely hear yourself think. The piercing stares of the opposition\n"
        "didn't help either. Sure, there are pre-match greetings and displays\n"
        "of sportsmanship at the start. But as soon as that whistle goes,\n"
        "you're going to war! With a few moments before kick-off.\n"
        "You struggle to keep your nerves under control.\n"
        "On a freezing winter evening like this, you could slowly feel the \n"
        "stiffness creeping into your body. Shuddering under your breath\n"
        "you try to remember how you got here in the first place.\n";
    cout << "===========================================================================\n";
    cout << "(3) to close your eyes and think\n";

    cin >> anyKey;

    cout << "===========================================================================\n";
    cout << "A couple of days ago, you watched your team's starting striker get tackled\n"
        "heavily at the end of the last game. Limping off the pitch, the injury was not\n"
        "even a question. The substitute striker hadn't recovered from the flu, leaving the\n"
        "squad with no player in that position. You wondered how the coach would react, but you\n"
        "realized there was a chance for you to start. To no surprise, you were called in\n"
        "for a training session the following day.\n";
    cout << "===========================================================================\n";
    cout << "(1) to remember the training session.\n";
    cout << "(2) to start the match.\n";

    cin >> playerChoice;

    //remembering training session

    if (playerChoice == 1) {

        cout << "===========================================================================\n";
        cout << "After the first hour, you were exhausted from practice, you could feel the difference\n"
            "in rigor and intensity. Kira, an older and experienced teammate that normally plays to\n"
            "your left pulls you aside for a quick word of advice: give it your best and try not to\n"
            "overthink, this game rewards risk and bravery but there are always consequences to be wary\n"
            "of. By the end of the day, the coach announced that you were the designated replacement for "
            "the team.\n";
        cout << "(3) to start the match\n"; //"I won't let you down!" - on Twine

        cin >> anyKey;

    }

    //====================================================================================================================================================

    //match starts

    cout << "===========================================================================\n";
    cout << "The whistle blows and you open your eyes. Your coach yells at you\n"
        "PAY ATTENTION THE GAME IS STARTING! Just like that the battle has begun.\n"
        "One step after another, you try to run as fast as you can. The opposition\n"
        "starts with the ball meaning you have to chase it down. Everywhere it goes\n"
        "you're one step behind, trying your best to help the team win the game.\n"
        "After an eternity of playing tag with the ball, you finally go on the offense.\n "
        "You receive the ball in a decent position and you see two options available.\n";
    cout << "---------------------------------------------\n";
    cout << "(1) A small chance to shoot and score\n";
    cout << "---------------------------------------------\n";
    cout << "(2) A safer pass to Kira on the left\n";
    cout << "===========================================================================\n";

    cin >> playerChoice;

    //====================================================================================================================================================

    /** Shoot by yourself - Ending 1
    * Coach will have a bad reaction
    * Coach sequence #1
    */

    if (playerChoice == 1) {

        cout << "You decide to take the risk and go for glory. Ignoring your teammate\n"
            "on your left, you put all the power you have into the shot. It blasts\n"
            "high above the goal and into the crowds. Disappointed with yourself, you\n"
            "look to Kira and apologize only to be offered words of encouragement.\n"
            "But in the distant background, you see the coach turning red yelling\n"
            "WHAT ARE YOU DOING?? Feeling anxious about your decisions, how will you react?\n";
        cout << "===========================================================================\n";
        cout << "(1) Decide to let it go and play on\n";
        cout << "===========================================================================\n";
        cout << "(2) Stop and react to the coach's backlash\n";
        cout << "===========================================================================\n";

        cin >> playerChoice;

        /** How will you reach to the coach?
        * Ignore the Coach
        */

        if (playerChoice == 1) {

            cout << "The rest of the first half went by pretty quickly after that\n"
                "the referee finally blew the whistle and half-time arrived.\n"
                "Exhausted, you try to catch your breath and walk towards the dressing room\n"
                "for a break. But a player from the other team pushes you from behind and insults\n"
                " you in a foreign language. How will you react?\n";
            cout << "===========================================================================\n";
            cout << "(4) Get up and push them back\n";
            cout << "===========================================================================\n";
            cout << "(5) Confront them without resorting to violence\n\n";
            cout << "===========================================================================\n";

            cin >> playerChoice;

        }

       //====================================================================================================================================================

       /**
       *  Reacting to coach's backlash
       */

        if (playerChoice == 2) {

            cout << "Frustrated with the coach's reactions to your performance, you yell back as\n"
                "you step towards the pitchside. The closer you got, the more apparent it became that\n"
                "your coach wasn't going to back down either. Your teammates start to intervene in an\n"
                "attempt to calm the both of you down but that only makes matters worse. The match comes\n"
                "to a temporary halt as things between you and the coach heats up. After publicly\n"
                "criticizing you, a substitute was chosen to replace you. Realizing what you had just\n"
                "done, you walk into the dressing room. Feeling embarrassed and frustrated.";
            cout << "===========================================================================\n";
            cout << "(3) Enter the dressing room\n";
            cout << "===========================================================================\n";

            cin >> playerChoice;

            cout << "During half-time, Kira temporarily sits beside you to offer some wisdom\n"
                "in this game, it is crucial to maintain professionalism and control your\n"
                "emotions because it is a volatile environment with such high stakes. You learned\n"
                "lesson the hard way today, don't forget it. The rest of the team leaves you behind\n"
                "for the second half, feeling frustrated as you remain alone in the dressing room.";
            cout << "===========================================================================\n";
            cout << "(6) Change into winter clothes and watch the rest of the game from the bench\n";
            cout << "===========================================================================\n";

            cin >> playerChoice;

        }

       //====================================================================================================================================================
       // Watch team from bench + interview sequence   
       //====================================================================================================================================================

        if (playerChoice == 4) {

            /** You shoot and miss
            * Opposing team player provokes you
            * Push other player option
            */

            cout << "The player falls down, but the other teammates start running towards you\n"
                " cursing and pushing back. Fans start booing and throwing things onto the pitch\n"
                " as cans, bottles, and random objects pollute the pitchside. The referee finally\n"
                " sorts things out and declares that the match officials were right behind you from\n"
                " the very start and saw the whole incident. They decide to give both you and the\n"
                " opposing player a red card. Sent off on your very first match, you slowly walk\n"
                " away from the pitch. Feeling embarrassed and frustrated.\n";
            cout << "===========================================================================\n";
            cout << "(3) to continue!\n";
            cout << "===========================================================================\n";

            cin >> anyKey;

            cout << "During half-time, Kira temporarily sits beside you to offer some wisdom;\n"
                "in this game, it is crucial to maintain professionalism and control your emotions\n"
                "because it is a volatile environment with such high stakes. You learned a lesson\n"
                "the hard way today, don't forget it.\n"
                "The rest of the team leaves you behind for the second half\n"
                "feeling frustrated as you remain alone in the dressing room.\n";
            cout << "===========================================================================\n";
            cout << "(4) Change into winter clothes and watch the rest of the game from the bench\n";
            cout << "===========================================================================\n";

            cin >> playerChoice;


            /*Interview sequence starts
            * option to choose yes or no to interview
            */

            cout << "The team eventually loses the match after all the commotion you caused. The entire stadium boos you\n"
                "and the team as everyone starts walking off the field. Morale is low and the squad is upset. After the game,\n"
                "reporters approach you requesting a post-match interview.\n";

            cout << "===========================================================================\n";
            cout << "(1) Ignore them\n";
            cout << "===========================================================================\n";
            cout << "(2) I can spare a couple minutes\n";
            cout << "===========================================================================\n";

            cin >> playerChoice;

            /*Interview sequence starts
            * ignore interview
            */

            if (playerChoice == 1) {
                cout << "You pull yourself away from the public and regroup with the team. The bus ride home is a lonely journey\n"
                    "as you sit in the corner alone, wondering if you could have made any decisions differently...\n";

                cout << "================================================================================\n"
                    "                                     THE END\n"
                    "================================================================================\n";

            }

            /*Interview sequence starts
            * participate in interview
            */

            if (playerChoice == 2) {
                cout << "Reporter: Congratulations on your debut match, you showed glimpses of quality. Would you like to comment\n"
                    "on your reactions during the game?\n";

                cout << "===========================================================================\n";
                cout << "(1) Blame others\n";
                cout << "===========================================================================\n";
                cout << "(2) Be professional\n";
                cout << "===========================================================================\n";

                cin >> playerChoice;

                /*Interview sequence starts
                * Blame others - bad ending
                */

                if (playerChoice == 1) {

                    cout << "I thought I played pretty well and shouldn't have been taken off, if the others had better performances,\n"
                        "the game was an easy win.\n\n"
                        "The coach and the rest of the team react badly to your comments.Disappointed with your attitude,\n"
                        "the fans also retaliate.You end up with bad publicity and ultimately you are dropped from the first team.\n"
                        "Your career might've been more successful if you made wiser decisions.\n";

                    cout << "================================================================================\n"
                        "                                     THE END\n"
                        "================================================================================\n";

                    /*Interview sequence starts
                    * be professional - good ending
                    */

                } if (playerChoice == 2) {

                    cout << "The whole team had a good performance but we were unlucky today, we'll come back stronger next time.\n"
                        "The coach and the rest of the team react well to your comments.Impressed with your attitude, the fans also\n"
                        "remain supportive of your efforts.You were notified to resume training with the first team. Given timeand the\n"
                        "right opportunity, your career might become as successful as you always dreamt of.\n";

                    cout << "================================================================================\n"
                        "                                     THE END\n"
                        "================================================================================\n";
                }

            }

            //====================================================================================================================================================
            // GAME OVER
            // shot selfishly + bad reaction to opponent + interview sequence
            //====================================================================================================================================================


        }

        /** Opposing team player provokes you
        * Confront player w/o violence option
        */

        if (playerChoice == 5) {

            cout << "You stand back up and walk towards the player. Both teams, filled with anger,\n"
                "start running towards you, cursing and pushing all around. Fans boo and throw things\n"
                "onto the pitch as cans, bottles, and random objects pollute the pitchside. Before you\n "
                "could even react, you had become stuck in the middle of this mess until Kira pulled you\n"
                "out of the clutter. It took a couple of minutes before the referee finally sorted things\n"
                "out. The match officials were right behind you from the very start and saw the whole incident.\n"
                "They decide to give the opposing player a red card and praise your reaction given the circumstances\n"
                "Overwhelmed with the occurrences on your very first match, you slowly walk away from the pitch and\n"
                "into the dressing room for the half time break.\n";
            cout << "===========================================================================\n";
            cout << "(3) Head into half time break.\n";
            cout << "===========================================================================\n";
            
            cin >> anyKey;

            cout << "The coach congratulates you at halftime for a decent performance but decides to replace you with a more\n"
                "experienced player. “You have room for improvement but you impressed me out there. You also choose the right\n"
                "decisions in crucial moments, good job. Undoubtedly, you are disappointed not to have finished the match but\n"
                "you realize this is a good starting point for your career.Additionally, you also learned an important lesson about\n"
                "specific consequences that can result from various actions\n.";
            cout << "===========================================================================\n";
            cout << "(3) Change into warmer clothes and watch the rest of the game from the bench\n";
            cout << "===========================================================================\n";
                
        }

       //====================================================================================================================================================
       // Pass to Kira sequence, opponent pushes next
       //====================================================================================================================================================

    }  
    
    if (playerChoice == 2) {

        /** 
        * Kira scores but opposing team player still provokes you
        */
        
        cout << "Kira expertly collects the ball and scores in the top corner. The stadium erupts and the fans go wild.\n"
            "Your team, delighted with the goal, comes up to celebrate in a huddle. The only noise around you can hear\n"
            "is celebration, but Kira urges the team to stay grounded and hardworking.\n";
        
        cout << "The rest of the first half went by pretty quickly after that, the referee finally blew the whistle and half-time arrived.\n"
            "Exhausted, you try to catch your breath and walk towards the dressing room for a break. But a player from the other\n"
            "team pushes you from behind and insults you in a foreign language.\n"
            "How will you react ?\n";
        
        cout << "===========================================================================\n";
        cout << "(3) Get up and push them back\n";
        cout << "===========================================================================\n";
        cout << "(4)  Confront them without resorting to violence\n";
        cout << "===========================================================================\n";

        if (playerChoice == 3) {

            /** Kira scores
            * Opposing team player provokes you
            * Push other player option
            */

            cout << "The player falls down, but the other teammates start running towards you\n"
                " cursing and pushing back. Fans start booing and throwing things onto the pitch\n"
                " as cans, bottles, and random objects pollute the pitchside. The referee finally\n"
                " sorts things out and declares that the match officials were right behind you from\n"
                " the very start and saw the whole incident. They decide to give both you and the\n"
                " opposing player a red card. Sent off on your very first match, you slowly walk\n"
                " away from the pitch. Feeling embarrassed and frustrated.\n";
            cout << "===========================================================================\n";
            cout << "(3) to continue!\n";
            cout << "===========================================================================\n";

            cin >> anyKey;

            cout << "During half-time, Kira temporarily sits beside you to offer some wisdom;\n"
                "in this game, it is crucial to maintain professionalism and control your emotions\n"
                "because it is a volatile environment with such high stakes. You learned a lesson\n"
                "the hard way today, don't forget it.\n"
                "The rest of the team leaves you behind for the second half\n"
                "feeling frustrated as you remain alone in the dressing room.\n";
            cout << "===========================================================================\n";
            cout << "(4) Change into winter clothes and watch the rest of the game from the bench\n";
            cout << "===========================================================================\n";

            cin >> playerChoice;

            /*Interview sequence starts
            * option to choose yes or no to interview
            */

            cout << "The team eventually loses the match after all the commotion you caused. The entire stadium boos you\n"
                "and the team as everyone starts walking off the field. Morale is low and the squad is upset. After the game,\n"
                "reporters approach you requesting a post-match interview.\n";

            cout << "===========================================================================\n";
            cout << "(1) Ignore them\n";
            cout << "===========================================================================\n";
            cout << "(2) I can spare a couple minutes\n";
            cout << "===========================================================================\n";

            cin >> playerChoice;

            /*Interview sequence starts
            * ignore interview
            */

            if (playerChoice == 1) {
                cout << "You pull yourself away from the public and regroup with the team. The bus ride home is a lonely journey\n"
                    "as you sit in the corner alone, wondering if you could have made any decisions differently...\n";

                cout << "================================================================================\n"
                    "                                     THE END\n"
                    "================================================================================\n";

            }

            /*Interview sequence starts
            * participate in interview
            */

            if (playerChoice == 2) {
                cout << "Reporter: Congratulations on your debut match, you showed glimpses of quality. Would you like to comment\n"
                    "on your reactions during the game?\n";

                cout << "===========================================================================\n";
                cout << "(1) Blame others\n";
                cout << "===========================================================================\n";
                cout << "(2) Be professional\n";
                cout << "===========================================================================\n";

                cin >> playerChoice;

                /*Interview sequence starts
                * Blame others - bad ending
                */

                if (playerChoice == 1) {

                    cout << "I thought I played pretty well and shouldn't have been taken off, if the others had better performances,\n"
                        "the game was an easy win.\n\n"
                        "The coach and the rest of the team react badly to your comments.Disappointed with your attitude,\n"
                        "the fans also retaliate.You end up with bad publicity and ultimately you are dropped from the first team.\n"
                        "Your career might've been more successful if you made wiser decisions.\n";

                    cout << "================================================================================\n"
                        "                                     THE END\n"
                        "================================================================================\n";

                    /*Interview sequence starts
                    * be professional - good ending
                    */

                } 
                
                if (playerChoice == 2) {

                    cout << "The whole team had a good performance but we were unlucky today, we'll come back stronger next time.\n"
                        "The coach and the rest of the team react well to your comments.Impressed with your attitude, the fans also\n"
                        "remain supportive of your efforts.You were notified to resume training with the first team. Given timeand the\n"
                        "right opportunity, your career might become as successful as you always dreamt of.\n";

                    cout << "================================================================================\n"
                        "                                     THE END\n"
                        "================================================================================\n";
                }
            }
        }

        /** Kira scores
        * Opposing team player provokes you
        * Confront player w/o violence option
        */

        if (playerChoice == 4) {

            cout << "You stand back up and walk towards the player. Both teams, filled with anger,\n"
                "start running towards you, cursing and pushing all around. Fans boo and throw things\n"
                "onto the pitch as cans, bottles, and random objects pollute the pitchside. Before you\n "
                "could even react, you had become stuck in the middle of this mess until Kira pulled you\n"
                "out of the clutter. It took a couple of minutes before the referee finally sorted things\n"
                "out. The match officials were right behind you from the very start and saw the whole incident.\n"
                "They decide to give the opposing player a red card and praise your reaction given the circumstances\n"
                "Overwhelmed with the occurrences on your very first match, you slowly walk away from the pitch and\n"
                "into the dressing room for the half time break.\n";
            cout << "===========================================================================\n";
            cout << "(3) Head into half time break.\n";
            cout << "===========================================================================\n";

            cin >> anyKey;

            cout << "The coach congratulates you at halftime for a decent performance but decides to replace you with a more\n"
                "experienced player. “You have room for improvement but you impressed me out there. You also choose the right\n"
                "decisions in crucial moments, good job. Undoubtedly, you are disappointed not to have finished the match but\n"
                "you realize this is a good starting point for your career. Additionally, you also learned an important lesson about\n"
                "specific consequences that can result from various actions\n.";
            cout << "===========================================================================\n";
            cout << "(3) Change into warmer clothes and watch the rest of the game from the bench\n";
            cout << "===========================================================================\n";

            cin >> anyKey;

            cout << "Your team eventually wins the match with a goal from Kira. Your performance did not represent your fullest potential\n"
                "but your hard work was recognized by the squad and the fans. The coach notifies you to resume training with the first team.\n"
                "Given time and the right opportunity, your career might become as successful as you always dreamt of.\n";

            cout << "================================================================================\n"
                "                                     THE END\n"
                "================================================================================\n";

        }
    }
}