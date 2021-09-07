#include <bits/stdc++.h>
#include <limits>
using namespace std;

int question_3(int dis, string scenario, string a, string b, string c){
    int answer;
    cout<<"\n"<<"====================================";
    cout<<"\n"<<"Distance from time vortex: "<<dis<<" km";
    cout<<"\n"<<"====================================";
    cout<<"\n"<<scenario<<"\n";
    cout<<"\n\n"<<"(1) "<<a;
    cout<<"\n"  <<"(2) "<<b;
    cout<<"\n"  <<"(3) "<<c;


    cout<<"\n"  <<"Your response: ";
    int tries=3;
    while (answer!=1 && answer!=2 && answer!=3 && tries!=0) {
        cin>>answer;
        if(answer!=1 && answer!=2 && answer!=3 && tries!=0){
            --tries;
            if (tries!=0){
                cout<<tries<<" attempts left: ";
            }
        };
    }
    if (tries<=0){
        return -1;
    }
    cout<<"\n";
    return answer;
}

int question_2(int dis, string scenario, string a, string b){
    int answer;
    cout<<"\n"<<"====================================";
    cout<<"\n"<<"Distance from time vortex: "<<dis<<" km";
    cout<<"\n"<<"====================================";
    cout<<"\n"<<scenario<<"\n";
    cout<<"\n"<<"(1) "<<a;
    cout<<"\n"<<"(2) "<<b;


    cout<<"\n"  <<"Your response: ";
    int tries=3;
    while (answer!=1 && answer!=2 && tries!=0) {
        cin>>answer;
        if(answer!=1 && answer!=2 && tries!=0){
            --tries;
            if (tries!=0){
                cout<<tries<<" attempts left: ";
            }
        };
    }
    if (tries<=0){
        return -1;
    }
    cout<<"\n";
    return answer;
}

int command_center_scene(int dis){
    cout<<"\n"<<"====================================";
    cout<<"\n"<<"Distance from time vortex: "<<dis<<" km";
    cout<<"\n"<<"====================================";
    cout<<"You arrived at the command center to reunite with the team.\nAs you arrive, everyone was frantic, trying to mitigate all damages the Zephyr ship had endured from the abnormal time jump.";
    cout<<"\n"<<"May: \"I've got damage to nearly all systems. Trying to get a read on our locations.\"";
    cout<<"\n"<<"You: \"What's happening?\"";
    cout<<"\n"<<"Mack: \"Time drive overloaded.\"";
    cout<<"\n"<<"You stepped near the window, gazed outside and wonder where you are right now.";
    cout<<"\n"<<"Deke (ran towards command center): \"I don't wanna alarm anyone, but we are trapped in a time storm.\"";
    cout<<"\n"<<"Daniel: \"Are you just taking unrelated words and puttting them together?\"";
    cout<<"\n"<<"Deke: \"No, Bugsy! This is real. Just like what Simmons said. We time jumped within a time jump and tore a hole in space-time. And now, we are being PULLED IN A VORTEX like we are being drained.\"";
    cout<<"\n"<<"You: \"If we are going down that drain?\"";
    cout<<"\n"<<"May: \"We would cease to exist.\"";
    cout<<"\n"<<"Deke: \"No! We'll ceased to have ever existed, or be reduced to the size of an atom. Honestly, I have no idea how the science works here.\"";
    cout<<"\n"<<"Mack: \"So it's pulling us in?\"";
    cout<<"\n"<<"Deke: \"Yes! We are "<<dis<<" kilometers away.\"";
    cout<<"\n\n"<<"(1) Close the cockpit door.";
    cout<<"\n"  <<"(2) Scan the ship monitors for abnormalities.";
    cout<<"\n"  <<"(3) Continue to brainstorm with team.";


    cout<<"\n"  <<"Your response: ";
    int tries=3, answer;
    while (answer!=1 && answer!=2 && answer!=3 && tries!=0) {
        cin>>answer;
        if(answer!=1 && answer!=2 && answer!=3 && tries!=0){
            --tries;
            if (tries!=0){
                cout<<tries<<" attempts left: ";
            }
        };
    }
    if (tries<=0){
        return -1;
    }
    cout<<"\n";
    return answer;
}

void lab_scene(string victim){
    cout<<"You rushed to the ship's lab to get ";
    if(victim=="you"){
        cout<<"yourself checked out.\n";
    } else {
        cout<<"Mack patched up.";
        cout<<"\n"<<"You: \"Jemma!\"";
        cout<<"\n"<<"You: \"What happened!\"";
        cout<<"\n"<<"Mack: \"I'm sure it looks worse than it is.\"";
        cout<<"\n"<<"Jemma: \"Mack, you are literally blind.\"";
        cout<<"\n"<<"You: \"It's a radiation flare.\"";
        cout<<"\n"<<"May [in comms]: \"Just got hit by another radiation flare. The starboard side hallway is on fire.\"";
        cout<<"\n"<<"You: \"I got it.\"";
        cout<<"\n"<<"Jump drive starts to malfunction again. It's going to jump again within the time jump.";
    }
}




/*
int asdf=question_2(dis, "Scenario", "Choice A", "Choice B");
if (asdf==1){
    
} else if (asdf==2){
    
} else if (asdf==-1){
    cout<<"/n"<<"Seems you are trying to play the game or cheat the game. Quitting game. Goodbye!";
    return 0;
}

*/