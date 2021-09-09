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

int command_center_prompt(int dis){
    cout<<"\n"<<"====================================";
    cout<<"\n"<<"Distance from time vortex: "<<dis<<" km";
    cout<<"\n"<<"====================================";
    cout<<"\n"<<"You arrived at the command center to reunite with the team.\nAs you arrive, everyone was frantic, trying to mitigate all damages the Zephyr ship had endured from the abnormal time jump.";
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
    if(victim!="search"){
        cout<<"\n"<<"You rushed to the ship's lab to get ";
        if(victim=="you"){
            cout<<"yourself checked out.\n";
        } else {
            cout<<"Mack patched up.";
            cout<<"\n"<<"You: \"Jemma!\"";
            cout<<"\n"<<"You: \"What happened!\"";
            cout<<"\n"<<"Mack: \"I'm sure it looks worse than it is.\"";
            cout<<"\n"<<"Jemma: \"Mack, you are literally blind.\"";
            cout<<"\n"<<"You: \"It's a radiation flare.\"";
        }
    }
    cout<<"\n"<<"May [in comms]: \"Just got hit by another radiation flare. The starboard side hallway is on fire.\"";
    cout<<"\n"<<"You: \"I got it.\"";
    cout<<"\n"<<"Jump drive starts to malfunction again. It's going to jump again within the time jump.";
    cout<<"\n\n";
}

void solar_rad_mack_scene(string activity){
    cout<<"\n"<<activity;
    cout<<"\n"<<"Mack was heading towards the cockpit.\nAfter a few moments, a solar radiation flare hit the front of the ship, causing Mack's serious injuries.";
    lab_scene("Mack");
}

int nauseous_prompt(int dis, bool looped, string scenario, string a, string b, string c, string d){
    int answer;
    cout<<"\n"<<"====================================";
    cout<<"\n"<<"Distance from time vortex: "<<dis<<" km";
    cout<<"\n"<<"====================================";
    cout<<"\n"<<scenario<<"\n";
    cout<<"\n\n"<<"(1) "<<a;
    cout<<"\n"  <<"(2) "<<b;
    cout<<"\n"  <<"(3) "<<c;
    if (looped){
        cout<<"\n"  <<"(4) "<<d;
    }


    cout<<"\n"  <<"Your response: ";
    int tries=3;
    if(!looped){
        while (answer!=1 && answer!=2 && answer!=3 && tries!=0) {
            cin>>answer;
            if(answer!=1 && answer!=2 && answer!=3 && tries!=0){
                --tries;
                if (tries!=0){
                    cout<<tries<<" attempts left: ";
                }
            };
        }
    } else {
        while (answer!=1 && answer!=2 && answer!=3 && answer!=4 && tries!=0) {
            cin>>answer;
            if(answer!=1 && answer!=2 && answer!=3 && answer!=4 && tries!=0){
                --tries;
                if (tries!=0){
                    cout<<tries<<" attempts left: ";
                }
            };
        }

    }

    if (tries<=0){
        return -1;
    }
    cout<<"\n";
    return answer;
}

void search_scene(){
    cout<<"\n"<<"You search every room on the ship for clues. Your last stop was the lab.";
    lab_scene("search");

}

int coulson_prompt(int dis, int talked_to_coulson){
    cout<<"\n"<<"====================================";
    cout<<"\n"<<"Distance from time vortex: "<<dis<<" km";
    cout<<"\n"<<"====================================";
    cout<<"\n"<<"You rushed to get to Coulson's remote and turn him on.";
    if (talked_to_coulson==0){
        cout<<"\n"<<"You: \"Hey. Listen, okay. I need your help. You won't believe this, but I keep --\"";
        cout<<"\n"<<"Coulson: \"Repeating the same events over and over again? Yeah. How long did it take you to figure it out this time?\"";
        cout<<"\n"<<"You are confused.";
        cout<<"\n"<<"Coulson: \"I was really hoping not to have this conversation again, but if you forgot everything we went though, I guess that means you died again.\"";
        cout<<"\n"<<"You: \"I died?! Again?\"";
        cout<<"\n"<<"Coulson: \"And you always say it just like that. We're the only two who remember, so each time you die in one of these loops, you don't remember anything in the next reset, so then you have to learn everything all over again.\"";
        cout<<"\n"<<"You: \"That's awful.\"";
        cout<<"\n"<<"Coulson: \"It's annoying. Because who has to teach you every time? This guy. I've done it 14 times so far.\"";
        cout<<"\n"<<"You: \"We've done this 14 times?\"";
        cout<<"\n"<<"Coulson: \"Oh, no. No, no, no. You've died 14 times. We've been through this loop 87 times. Or I should say 87 that I know about.\"";
        cout<<"\n"<<"You: \"That you know about?\"";
        cout<<"\n"<<"Coulson: \"Cause you don't come power me up every time! But, it's okay. Not your fault.\"";
        cout<<"\n"<<"You: \"Why are we the only one's who remember these loops?\"";
        cout<<"\n"<<"Coulson: \"Ahh... Really not sure. You've had theories. The latest was that we're the only two  who started each loop in a futuristic sleeping pod.\"";
        cout<<"\n"<<"You both heard the time drive about to jump again.";
        cout<<"\n"<<"Coulson: \"Speaking of which.\"";
        cout<<"\n"<<"You: \"No, I'm not ready yet. Th--\"";
        cout<<"\n"<<"Coulson: \"Nothing we can do. You'll get used to it.\"";
        cout<<"\n"<<"Coulson smashes his remote through a glass pane and chuckles.";
        cout<<"\n"<<"Coulson: \"Please come wake me up this time, 'kay?\"\n\n";
        return 3;
    } else if (talked_to_coulson==1){
        cout<<"\n"<<"Coulson: \"Okay, time drive is stuck. It keeps looping back on itself over and over again.\"";
        cout<<"\n"<<"You: \"What about flying out?\"";
        cout<<"\n"<<"Coulson: \"We tried it. Technically, space is irrelevant here. So we narrow it down to fixing the drive.\"";
        cout<<"\n"<<"You: \"Okay, so, if the problem is that we never solve the riddle before time runs out, that means we have two options: we increase the time we have, or we solve faster.\"";
        cout<<"\n"<<"Coulson: \"Yes, any thoughts on what to do and how to do that?\"";
        cout<<"\n\n"<<"(1) Increase time between loops.";
        cout<<"\n"  <<"(2) Solve faster.";


        cout<<"\n"  <<"Your response: ";
        int tries=3, answer;
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
    } else {

        cout<<"\n"<<"Coulson: \"Okay, what do we do?\"";
        cout<<"\n\n"<<"(1) Increase time between loops.";
        cout<<"\n"  <<"(2) Solve faster.";


        cout<<"\n"  <<"Your response: ";
        int tries=3, answer;
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

}

void enoch_sacrifice(){
    cout<<"\n"<<"Jemma: \"Yeah, there has to be another solution. You can't just expect enough to sacrifice--.\"";
    cout<<"\n"<<"Enoch removed his EDM.";
    cout<<"\n"<<"Enoch: \"I believe this is what you need.\"";
    cout<<"\n"<<"You: \"Enoch, what did you do?\"";
    cout<<"\n"<<"Enoch: \"What needed to be done apparently.\"";
    cout<<"\n"<<"Jemma (crying): \"Enoch, you'll die.\"";
    cout<<"\n"<<"Enoch: \"And the rest of you will live. I would like to think you guys would do the same for me.\"";
    cout<<"\n"<<"Everyone was speechless. A few moments later, Jemma and Deke brought the EDM to the time drive.";
    cout<<"\n"<<"Enoch died and you guys were able to jump out the time loop.";
}