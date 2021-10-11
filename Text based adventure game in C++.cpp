#include<iostream>
#include<string>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
#include<chrono>
#include<thread>
using namespace std;
int main(){
char test[]="You are a young man with the dreams of adventures\n"
"you go on expedition to the ancient pyramids with a team of well renowned archaeologists.\n"
"While exploring the ancient reins of pyramids you find yourself lost from the rest of the groups\n";

for(int i=0;i<=sizeof(test);i++){
    cout<<test[i];
    Sleep(100);
}
int i=1;
while(i<5){
    cout<<"You come across two paths in the sand"<<endl;
    Sleep(1000);
    cout<<"On the left you see a path with foot prints"<<endl;
    Sleep(1000);
    cout<<"On the right you see a path with tyre marks"<<endl;
    cout<<"Left or Right?"<<endl;
    string path;
    cin>>path;
if(path=="left"){
cout<<"You follow the path to find a local tribe ahead"<<endl;
Sleep(100);
cout<<"You can ask for them help or continue going ahead in the path"<<endl;
Sleep(100);
cout<<"Help or continue?"<<endl;
string path7;
cin>>path7;
 if(path7=="continue"){
cout<<"You continue until you see a group of people ahead"<<endl;
cout<<"You confront them but quickly realize that they are hostile natives"<<endl;
cout<<"fight or run?"<<endl;
string path8;
cin>>path8;
if(path8=="fight"){
cout<<"You prepare to face a massive battle until one of the natives approaches you"<<endl;
cout<<"Quickly they believe in a fair fight and they give you a sword"<<endl;
cout<<"You are challenged to fight the best man from their tribe"<<endl;
cout<<"In panic you pick a rock and throw it on your opponent"<<endl;
cout<<"He falls and you flee for the jungle"<<endl;
cout<<"You run as fast as you can until you see a wooden cabin the woods"<<endl;
cout<<"Enter or continue?"<<endl;
string path9;
cin>>path9;
if(path9=="Enter"){
cout<<"You find your friends inside of the woods"<<endl;
cout<<"They tell you it was just a prank"<<endl;}
if(path9=="continue"){
       cout<<"You go throught the jungle but without any protection you find yourself  staking out in a cave waiting for help"<<endl;
       cout<<"With no food or water you die in days"<<endl;
} 
break;

}
if(path7=="help"){
    cout<<"They point you straight ahead in the wilderness telling you they saw some strangers walking towards that way"<<endl;
    cout<<"They tell you to follow the sun through the forest"<<endl;
    cout<<"Halfway through the clouds block the sun and you are faced with a tough decision"<<endl;
    cout<<"left or right?";
string path11;
cin>>path11;
 if(path11=="left"){
cout<<"On the left you find a broken road qith a gypsy waiting on ts side."<<endl;
cout<<"She instructs you to follow the path to find your friends"<<endl;
cout<<"follow or turn back?"<<endl;
string path10;
cin>>path10;
if(path10=="turn back"){
cout<<"You turn back but are lost as to where to go"<<endl;
cout<<"You lose interest in finding your friends and call a uber back home"<<endl;
cout<<"Congrats,I think?"<<endl;
break;

if(path10=="follow"){
cout<<"The gypsy did not lie to you"<<endl;
cout<<"You find your friends"<<endl;
cout<<"They tell you that they were playing Hide and seek"<<endl;
break;
}


 }

}if(path11=="right"){
cout<<"You find literally nothing on this path"<<endl;
cout<<"But you find a area to settle down near a river and become just like tarzan"<<endl;
cout<<"Congratulations!"<<endl;
break;
}

}



break;
 }
if(path=="right"){
cout<<"You follow the path until you come across a cart porked in the sand"<<endl;
Sleep(100);
cout<<"You can either explore the cart or continue on into the wilderness"<<endl;
Sleep(100);
cout<<"Search or continue?"<<endl;
string path2;
cin>>path2;
if(path2=="search"){
cout<<"You find that the car still has some gas in it"<<endl;
cout<<"You can either drive through the mud ahead or go through the shallow waters"<<endl;
cout<<"mud or water?"<<endl;
string path3;
cin>>path3;
if(path3=="mud"){
cout<<"You cross the mud successfully and find a strange cabin"<<endl;
cout<<"Do you want to enter or continue?"<<endl;
string path6;
cin>>path6;
if(path6=="enter"){
cout<<"Inside you find your friends lounging around a warm fire"<<endl;
cout<<"It was all a big prank"<<endl;
if(path6=="continue"){
cout<<"You continue through the desert and find no sign of any clues to your friends whereabouts "<<endl;
cout<<"While wandering through the desert you are bite by a rattlesnake"<<endl;
cout<<"You die the next day"<<endl; 
cout<<"try again!"<<endl;
}
}
}
if(path3=="water"){
cout<<"You attempt to cross the shallow water but hit a rock halfway through"<<endl;
cout<<"You fall in the water and you are eaten alive by alligators"<<endl;
cout<<"Try again!"<<endl;}
break;
}
if(path2=="continue"){
cout<<"You see some mud and shallow water ahead"<<endl;
cout<<"You must choose which way to move forward"<<endl;
cout<<"mud or water?"<<endl;
string path4;
cin>>path4;
if(path4=="mud"){
cout<<"You quickly realize the mud is quicksand and meet your demise"<<endl;
cout<<"Try again!"<<endl;

}
if(path4=="water"){
cout<<"You sprint through the water"<<endl;
cout<<"Dodging all the nasty beasts that may klurk within it"<<endl;
cout<<"You continue until you seee a path straight ahead and a path to your right"<<endl;
cout<<"straight or right?"<<endl;
string path5;
cin>>path5;
if(path5=="straight"){
cout<<"You go forward and follow the path until daybreak"<<endl;
cout<<"As you are walking in the darkness you suddenly feel a sharp pain in your leg"<<endl;
cout<<"You have fallen into a natives trap left to die"<<endl;
cout<<"Try again!"<<endl;
}
if(path5=="right"){
cout<<"You find a cabin in the woods"<<endl;
cout<<"You enter it looking for shelter for the night"<<endl;
cout<<"Inside you find your friends"<<endl;
cout<<"It was all a big prank!"<<endl; 
}
}
break;
}
  



}
else{
    cout<<"Invalid input"<<endl;
    cin>>path;
     int i=0;
}
}
}
}