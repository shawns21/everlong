#include <iostream>
using namespace std;
#include <string.h>

void winScreen(){

cout <<  R"(   
                
                
                        
              ,.  _~-.,               .
           ~'`_ \/,_. \_
          / ,"_>@`,__`~.)             |           .
          | |  @@@@'  ",! .           .          '
          |/   ^^@     .!  \          |         /
          `' .^^^     ,'    '         |        .             .
           .^^^   .          \                /          .
          .^^^       '  .     \       |      /       . '
.,.,.     ^^^             ` .   .,+~'`^`'~+,.     , '
&&&&&&,  ,^^^^.  . ._ ..__ _  .'             '. '_ __ ____ __ _ .. .  .
%%%%%%%%%^^^^^^%%&&;_,.-=~'`^`'~=-.,__,.-=~'`^`'~=-.,__,.-=~'`^`'~=-.,
&&&&&%%%%%%%%%%%%%%%%%%&&;,.-=~'`^`'~=-.,__,.-=~'`^`'~=-.,__,.-=~'`^`'~=
%%%%%&&&&&&&&&&&%%%%&&&_,.;^`'~=-.,__,.-=~'`^`'~=-.,__,.-=~'`^`'~=-.,__,
%%%%%%%%%&&&&&&&&&-=~'`^`'~=-.,__,.-=~'`^`'~=-.,__,.-==--^'~=-.,__,.-=~'
##mjy#####*"'
_,.-=~'`^`'~=-.,__,.-=~'`^`'~=-.,__,.-=~'`^`'~=-.,.-=~'`^`'~=-.,__,.-=~'

~`'^`'~=-.,__,.-=~'`^`'~=-.,__,.-=~'`^`'~=-.,__,.-=~'`^`'~=-.,__,.-=~'`^ )";
                
     } 

int main()

{

string PlayerName;
int Door_Choice;
int First_Door_Choice;
string dont;
int pass_guess;
int first_pass_tries = 0;
int knock;
int dog_choice;
int rps;
string dont2;


srand (time(NULL));
int first_door_pass = rand() % 5 + 1;
int comp_rps = rand() % 3 + 1;


cout << R"(

_______________   _________________________.____    ________    _______    ________ 
\_   _____/\   \ /   /\_   _____/\______   \    |   \_____  \   \      \  /  _____/ 
 |    __)_  \   Y   /  |    __)_  |       _/    |    /   |   \  /   |   \/   \  ___ 
 |        \  \     /   |        \ |    |   \    |___/    |    \/    |    \    \_\  \
/_______  /   \___/   /_______  / |____|_  /_______ \_______  /\____|__  /\______  /
        \/                    \/         \/        \/       \/         \/        \/ 
        
)" ;

cout << "Goal: \n\n";
cout << "GET OUT OF THE ROOM\n\n";
cout << "ENTER YOUR NAME: \n\n";
getline(cin, PlayerName);

cout << "\nYou are in a small room with three doors, " << PlayerName << "\n";
cout << "The door on the left is a prison door, the right door looks like it would be in a dungeon, and the middle door is pretty normal.\n\n";

cout << "Which door do you approach?\n\n";
cout << "1) LEFT\n";
cout << "2) RIGHT\n";
cout << "3) MIDDLE\n\n";
cin >> Door_Choice;

if (Door_Choice == 1){

        cout << R"(
  ______________
|\ ___________ /|
| |  _ _ _ _  | |
| | | | | | | | |
| | |-+-+-+-| | |
| | |-+-+=+%| | |
| | |_|_|_|_| | |
| |    ___    | |
| |   [___] ()| |

| |         ||| |
| |         ()| |
| |           | |
| |           | |
| |           | |
|_|___________|_| 


)" ;

cout << "Its locked shut, what do you do?\n\n";
cout << "1) Look Through the bars\n";
cout << "2) Knock on it\n\n";
cin >> First_Door_Choice;

if (First_Door_Choice == 1) {
    
    cout << "\n look through the bars, and hear a voice yell,\n\n              'WRONG MOVE'     \n\n";
    cout << "A giant spear drives through r head\n\n";
    cout << "YOU ARE DEAD " << PlayerName << "\n";
    return 0;


} else if (First_Door_Choice == 2){

    cout << "\nYou knock on the door and hear a loud voice echo around the room,\n\n";
    cout << "                    'WHATS THE PASSWORD?'             \nThe voice yells.\n\n";
    cin.ignore();
    getline(cin, dont);
    cout << "\n" << dont << "???? That wasnt even close.\n";  
    cout << "I'll tell you what, I have a number in my head from 1 to 5, guess it in three tries and i'll let you through'\n\n"; 
    
do{

    cout << "Guess the number: ";
    cin >> pass_guess;
    first_pass_tries++;

    if (first_pass_tries == 3){

           cout << "\nSorry man out of tries\n";
           cout << "A giant spear drives through your head\n\n";
           cout << "YOU ARE DEAD " << PlayerName << "\n";
    return 0;

   }

   else if (first_door_pass != pass_guess){
        cout << "\nWrong, try again\n\n";
   }

    else {

            cout << "You got it!\n";

            winScreen();
            
            cout << "\n\nThe door swings wide open and you see a beautiful sunset,\n";
            cout << "\n\nYOU WIN " << PlayerName << "\n";



            return 0;
        }

} while (pass_guess != first_door_pass);

return 0;

}

else {

        cout << "ONLY ENTER 1 or 2!!!!\n\n";
}

}


else if (Door_Choice == 2){

cout << R"(  
        
      ______
   ,-' ;  ! `-.
  / :  !  :  . \
 |_ ;   __:  ;  |
 )| .  :)(.  !  |
 |"    (##)  _  |
 |  :  ;`'  (_) (
 |  :  :  .     |
 )_ !  ,  ;  ;  |
 || .  .  :  :  |
 |" .  |  :  .  |
 |mt-2_;----.___|
 
 
 )";

 cout << "\n\nThere is a small hole in the middle, and you can slightly hear a sound coming from it,\n\n";
 cout << "Do you get closer to listen to the door or knock instead?\n";
 cout << "\n1)Knock";
 cout << "\n2)Get Closer\n\n";
 cin >> knock;

if (knock == 1){

        cout << "\n\n              'hElloO ThERe'           \n\n";
        
        cout << "You hear in a scraggly voice\n\n";
        cout << "  'OuT oF ALl tHe DoGs, wHicH iS ThE bEst oNE?'\n\n";
        cout << "1)Shiba Inu\n";
        cout << "2)German Shepherd\n";
        cout << "3)bUlLdOg\n";
        cout << "4)Shih Tzu\n";
        cout << "5)Dobermann\n";
        cout << "6)Golden Retriever\n";
        cout << "7)Poodle\n";
        cout << "8)Pomeranian\n\n";

        cin >> dog_choice;

        switch (dog_choice){

        case 1:
        cout << "\n               'wROnG'                       ";
        cout << "\n\n A giant trap door opens under  and you fall to your death\n\n";
        cout << "YOU ARE DEAD " << PlayerName << "\n";
        break;
        case 2:
        cout << "\n               'wROnG'                       ";
        cout << "\n\n A giant trap door opens under  and you fall to your death\n\n";
        cout << "YOU ARE DEAD " << PlayerName << "\n";
        break;
        case 3:
        cout << "\n               'YeAH i AgrEe'          ";
        cout << "\n\nThe door opens slightly\n";
        cout << "You open the old dungeon door to see a beautiful sunset";
        
        winScreen();

        cout << "\n\nYOU WIN " << PlayerName << "\n";

        break;

        case 4:
        cout << "\n               'wROnG'                       ";
        cout << "\n\n A giant trap door opens under  and you fall to your death\n\n";
        cout << "YOU ARE DEAD " << PlayerName << "\n";
        break;
        case 5:
        cout << "\n               'wROnG'                       ";
        cout << "\n\n A giant trap door opens under  and you fall to your death\n\n";
        cout << "YOU ARE DEAD " << PlayerName << "\n";       
        break;
        case 6:
        cout << "\n               'wROnG'                       ";
        cout << "\n\n A giant trap door opens under  and you fall to your death\n\n";
        cout << "YOU ARE DEAD " << PlayerName << "\n";
        break;
        case 7:
        cout << "\n               'wROnG'                       ";
        cout << "\n\n A giant trap door opens under  and you fall to your death\n\n";
        cout << "YOU ARE DEAD " << PlayerName << "\n";       
        break;
        case 8:
        cout << "\n               'wROnG'                       ";
        cout << "\n\n A giant trap door opens under  and you fall to your death\n\n";
        cout << "YOU ARE DEAD " << PlayerName << "\n";      
        break; 
        
        } 

} 

else if (knock == 2) {

cout << "You go up to the small hole and hear a scraggly voice talking\n\n";
cout <<  "'" << PlayerName << PlayerName << PlayerName << " mAN Do I LikE BulLdOgS " << PlayerName << PlayerName << PlayerName << "'\n\n";
cout << "The being on the otherside stops muttering because it notices you";



        cout << "\n\n              'hElloO ThERe, WeRe YoU LisTEnIng?'           \n\n";
        cout << "How do you answer?\n";
        cin.ignore();
        getline(cin, dont2);

        cout << "                   'IT DoEsNT ReALy MatTer iF yOu wErE'\n\n";

        cout << "  'OuT oF ALl tHe DoGs, wHicH iS ThE bEst oNE?'\n\n";
        cout << "1)Shiba Inu\n";
        cout << "2)German Shepherd\n";
        cout << "3)bUlLdOg\n";
        cout << "4)Shih Tzu\n";
        cout << "5)Dobermann\n";
        cout << "6)Golden Retriever\n";
        cout << "7)Poodle\n";
        cout << "8)Pomeranian\n\n";

        cin >> dog_choice;

        switch (dog_choice){

        case 1:
        cout << "\n               'wROnG'                       ";
        cout << "\n\nA giant trap door opens under  and you fall to your death\n\n";
        cout << " YOU ARE DEAD " << PlayerName << "\n";
        break;
        case 2:
        cout << "\n               'wROnG'                       ";
        cout << "\n\nA giant trap door opens under  and you fall to your death\n\n";
        cout << "YOU ARE DEAD " << PlayerName << "\n";
        break;
        case 3:
        cout << "\n               'YeAH i AgrEe'          ";
        cout << "\n\nThe door opens slightly\n";
        cout << "You open the old dungeon door to see a beautiful sunset";
        
        winScreen();

        cout << "\n\nYOU WIN " << PlayerName << "\n";

        break;

        case 4:
        cout << "\n               'wROnG'                       ";
        cout << "\n\nA giant trap door opens under  and you fall to your death\n\n";
        cout << " YOU ARE DEAD " << PlayerName << "\n";
        break;
        case 5:
        cout << "\n               'wROnG'                       ";
        cout << "\n\nA giant trap door opens under  and you fall to your death\n\n";
        cout << "YOU ARE DEAD " << PlayerName << "\n";       
        break;
        case 6:
        cout << "\n               'wROnG'                       ";
        cout << "\n\nA giant trap door opens under  and you fall to your death\n\n";
        cout << "YOU ARE DEAD " << PlayerName << "\n";
        break;
        case 7:
        cout << "\n               'wROnG'                       ";
        cout << "\n\nA giant trap door opens under  and you fall to your death\n\n";
        cout << "YOU ARE DEAD " << PlayerName << "\n";       
        break;
        case 8:
        cout << "\n               'wROnG'                       ";
        cout << "\n\nA giant trap door opens under  and you fall to your death\n\n";
        cout << "YOU ARE DEAD " << PlayerName << "\n";      
        break; 
        }

}

else{
cout << "ONLY CHOOSE 1 OR 2!!!!!";
}



}

else if (Door_Choice == 3){

cout << R"( 
            __________
           |  __  __  |
           | |  ||  | |
           | |  ||  | |
           | |__||__| |
           |  __  __()|
           | |  ||  | |
           | |  ||  | |
           | |  ||  | |
           | |  ||  | |
           | |__||__| |
           |__________|)";



cout << "\n\nAs you approach the door, the knob turns into a shape of a hand\n";
cout << "These three gestures are shown in quick succession\n\n";


cout << R"(      
        
       ,--.--._
------" _, \___)
        / _/____)
        \//(____)
------\     (__)
       `-----
       
    _______
---'   ____)____
          ______)
          _______)
         _______)
---.__________)

 __      __
( _\    /_ )
 \ _\  /_ / 
  \ _\/_ /_ _
  |_____/_/ /|
  (  (_)__)J-)
  (  /`.,   /
   \/  ;   /
    | === |

       
       )";

cout << "\n\nWhat do you choose?\n\n";
cout << "1)Rock\n";
cout << "2)Paper\n";
cout << "3)Scissors\n\n";

cin >> rps;

if (rps == 2){

cout << "\nYou chose: ";

cout <<   R"( 

    _______
---'   ____)____
          ______)
          _______)
         _______)
---.__________)
  
  )";
    
}


else if (rps == 1){

cout << "\nYou chose: ";

cout <<   R"( 

       ,--.--._
------" _, \___)
        / _/____)
        \//(____)
------\     (__)
       `-----
  
  )";

}

else {

cout << "\nYou chose: ";

cout <<   R"( 

 __      __
( _\    /_ )
 \ _\  /_ / 
  \ _\/_ /_ _
  |_____/_/ /|
  (  (_)__)J-)
  (  /`.,   /
   \/  ;   /
    | === |
  
  )";

}



if (rps == 1 && comp_rps == 2){

cout << "\nThe door knob chose: ";

cout <<   R"( 

    _______
---'   ____)____
          ______)
          _______)
         _______)
---.__________)
  
  )";

cout << "\n\nThe hand starts to shake furiously\n";

cout << "The door knobs hand grows largers and larger and it crushes your head with its finger\n\n";
        
cout <<  R"( 
           ___________    ____
    ______/   \__//   \__/____\
  _/   \_/  :           //____\\
 /|      :  :  ..      /        \
| |     ::     ::      \        /
| |     :|     ||     \ \______/
| |     ||     ||      |\  /  |
 \|     ||     ||      |   / | \
  |     ||     ||      |  / /_\ \
  | ___ || ___ ||      | /  /    \
   \_-_/  \_-_/ | ____ |/__/      \
                _\_--_/    \      /
               /____             /
              /     \           /
              \______\_________/
     )";

cout << "\n\n YOU ARE DEAD " << PlayerName << "\n";

}


else if (rps == 1 && comp_rps == 3){

cout << "\nThe door knob chose: ";

cout <<   R"( 

 __      __
( _\    /_ )
 \ _\  /_ / 
  \ _\/_ /_ _
  |_____/_/ /|
  (  (_)__)J-)
  (  /`.,   /
   \/  ;   /
    | === |
  
  )";

cout << "\n\nThe hand starts to shake furiously\n";
cout << "The door cracks open and you see the view of a beautiful sunset";

winScreen();

cout << "\n\nYOU WIN" << PlayerName << "\n";

}

else if (rps == 2 && comp_rps == 1){

cout << "\nThe door knob chose: ";

cout <<   R"( 

       ,--.--._
------" _, \___)
        / _/____)
        \//(____)
------\     (__)
       `-----
  
  )";

cout << "\n\nThe hand starts to shake furiously\n";
cout << "The door cracks open and you see the view of a beautiful sunset";

winScreen();

cout << "\n\nYOU WIN" << PlayerName << "\n";


}

else if (rps == 2 && comp_rps == 3){

cout << "\nThe door knob chose: \n";

cout <<   R"( 

 __      __
( _\    /_ )
 \ _\  /_ / 
  \ _\/_ /_ _
  |_____/_/ /|
  (  (_)__)J-)
  (  /`.,   /
   \/  ;   /
    | === |
  
  )";

cout << "\n\nThe hand starts to shake furiously\n";
cout << "The door knobs hand grows largers and larger and it crushes your head with its finger\n\n";
        
cout <<  R"( 
           ___________    ____
    ______/   \__//   \__/____\
  _/   \_/  :           //____\\
 /|      :  :  ..      /        \
| |     ::     ::      \        /
| |     :|     ||     \ \______/
| |     ||     ||      |\  /  |
 \|     ||     ||      |   / | \
  |     ||     ||      |  / /_\ \
  | ___ || ___ ||      | /  /    \
   \_-_/  \_-_/ | ____ |/__/      \
                _\_--_/    \      /
               /____             /
              /     \           /
              \______\_________/
     )";

cout << "\n\nYOU ARE DEAD " << PlayerName << "\n";


}

else if (rps == 3 && comp_rps == 1){


cout << "\nThe door knob chose: \n";

cout <<   R"( 

       ,--.--._
------" _, \___)
        / _/____)
        \//(____)
------\     (__)
       `-----
  
  )";

cout << "\n\nThe hand starts to shake furiously\n";
cout << "The door knobs hand grows largers and larger and it crushes your head with its finger\n\n";
        
cout <<  R"( 
           ___________    ____
    ______/   \__//   \__/____\
  _/   \_/  :           //____\\
 /|      :  :  ..      /        \
| |     ::     ::      \        /
| |     :|     ||     \ \______/
| |     ||     ||      |\  /  |
 \|     ||     ||      |   / | \
  |     ||     ||      |  / /_\ \
  | ___ || ___ ||      | /  /    \
   \_-_/  \_-_/ | ____ |/__/      \
                _\_--_/    \      /
               /____             /
              /     \           /
              \______\_________/
     )";

cout << "\n\nYOU ARE DEAD " << PlayerName << "\n";


}

else if (rps == 3 && comp_rps == 2){

cout << "\nThe door knob chose: ";

cout <<   R"( 

    _______
---'   ____)____
          ______)
          _______)
         _______)
---.__________)

  
  )";

cout << "\n\nThe hand starts to shake furiously\n";
cout << "The door cracks open and you see the view of a beautiful sunset\n\n";

winScreen();


cout << "\n\nYOU WIN" << PlayerName << "\n";
}


else if (rps == 1 && comp_rps == 1) {

cout << "\nThe door knob chose: ";

cout <<   R"( 

       ,--.--._
------" _, \___)
        / _/____)
        \//(____)
------\     (__)
       `-----
  
  )";


cout << "\nYou put up the same hand signs\n";

cout << "The hand starts to shake furiously\n";

cout << "The door knobs hand grows largers and larger and it crushes your head with its finger\n\n";
        
cout <<  R"( 
           ___________    ____
    ______/   \__//   \__/____\
  _/   \_/  :           //____\\
 /|      :  :  ..      /        \
| |     ::     ::      \        /
| |     :|     ||     \ \______/
| |     ||     ||      |\  /  |
 \|     ||     ||      |   / | \
  |     ||     ||      |  / /_\ \
  | ___ || ___ ||      | /  /    \
   \_-_/  \_-_/ | ____ |/__/      \
                _\_--_/    \      /
               /____             /
              /     \           /
              \______\_________/
     )";

cout << "\n\nYOU ARE DEAD " << PlayerName << "\n";


}


else if (rps == 2 && comp_rps == 2) {

cout << "\nThe door knob chose: ";

cout <<   R"( 

    _______
---'   ____)____
          ______)
          _______)
         _______)
---.__________)

  
  )";


cout << "\nYou put up the same hand signs\n";

cout << "The hand starts to shake furiously\n";

cout << "The door knobs hand grows largers and larger and it crushes your head with its finger\n\n";
        
cout <<  R"( 
           ___________    ____
    ______/   \__//   \__/____\
  _/   \_/  :           //____\\
 /|      :  :  ..      /        \
| |     ::     ::      \        /
| |     :|     ||     \ \______/
| |     ||     ||      |\  /  |
 \|     ||     ||      |   / | \
  |     ||     ||      |  / /_\ \
  | ___ || ___ ||      | /  /    \
   \_-_/  \_-_/ | ____ |/__/      \
                _\_--_/    \      /
               /____             /
              /     \           /
              \______\_________/
     )";

cout << "\n\nYOU ARE DEAD " << PlayerName << "\n";


}

else if(rps == 3 && comp_rps == 3){

cout << "\nThe door knob chose: \n";

cout <<   R"( 

 __      __
( _\    /_ )
 \ _\  /_ / 
  \ _\/_ /_ _
  |_____/_/ /|
  (  (_)__)J-)
  (  /`.,   /
   \/  ;   /
    | === |
  
  )";

cout << "\n\nThe hand starts to shake furiously\n";
cout << "The door knobs hand grows largers and larger and it crushes your head with its finger\n\n";
        
cout <<  R"( 
           ___________    ____
    ______/   \__//   \__/____\
  _/   \_/  :           //____\\
 /|      :  :  ..      /        \
| |     ::     ::      \        /
| |     :|     ||     \ \______/
| |     ||     ||      |\  /  |
 \|     ||     ||      |   / | \
  |     ||     ||      |  / /_\ \
  | ___ || ___ ||      | /  /    \
   \_-_/  \_-_/ | ____ |/__/      \
                _\_--_/    \      /
               /____             /
              /     \           /
              \______\_________/
     )";

cout << "\n\nYOU ARE DEAD " << PlayerName << "\n";

}

else {
cout << "You can only choose 1, 2 or 3!!!!";

} 

}

else {
cout << "You can only choose 1, 2 or 3!!!!";

} 






}



