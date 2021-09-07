#include <bits/stdc++.h>
#include "functions.hpp"
using namespace std;

int main(){
    ios::sync_with_stdio(0);

    int dis=94; // Distance from vortex
    bool time_loop = true;
    bool ship = true;
    while(dis > 0 && time_loop==true && ship==true){
        // ----------------------------------------------
        int sleeping_pod=question_2(dis, "You woke up in a healing pod. You feel disoriented after the torture you endured before you were rescued by your team days ago.", "Step out from the pod.", "Sit down on the pod to catch your breath. Then step down slowly.");
        if (sleeping_pod==1){
            
            dis-=2;
            int daniel=question_2(dis, "As you were standing up, you noticed a glaring alarm, which led you to wonder what is going on.\nYou jumped out from the sleeping pod, which woke Daniel up. You didn't even notice he was watching you sleep.", "Ask daniel why he is watching you sleep.", "Go outside to check out what the alarm is for.");
            if (daniel==1){

                dis-=2;
                int daniel_look=question_2(dis, "Daniel: \"I'm just looking out for you in case you need help. You were pretty banged up because of our last mission.\"", "Reply: \"Maybe, it's more than that. Everytime I ask for your help, you say, 'Yes'. You don't even ask why. Why? Be honest.\"", "Thank him, then go outside to check out what the alarm is for.");
                if (daniel_look==1){
                    dis-=2;
                    cout<<"\"Some of my favorite people are people like you,\" he said as he inhaled deeply, \n\"Focused on the greater good, even at your own expense. You'll keep running at the problem full-tilt until you solve it or slam headlong into a brick wall.\"\n";
                    cout<<"You ask, \"But how does that...\"\n";
                    cout<<"He quickly interrupts, \"Because when people like you run into those walls, you should have there to pick you back up.\"\n\n";
                } else if (daniel_look==2){

                    dis-=2;
                    // Skip to next if group
                } else if (daniel_look==-1){
                    cout<<"\n"<<"Quitting game. Goodbye!";
                    return 0;
                }
                
            } else if (daniel==2){
                    dis-=2;
                    // Skip to next if group
            } else if (daniel==-1){
                cout<<"\n"<<"Quitting game. Goodbye!";
                return 0;
            }

        } else if (sleeping_pod==2){
            dis-=3;
            // Skip to next if group
        } else if (sleeping_pod==-1){
            cout<<"\n"<<"Seems you are trying to play the game or cheat. Quitting game. Goodbye!";
            return 0;
        }
    
        // ----------------------------------------------
        int command_center = command_center_scene(dis);
        if (command_center==1){
            
        } else if (command_center==2){
            
        } else if (command_center==3){
            
        } else if (command_center==-1){
            cout<<"/n"<<"Quitting game. Goodbye!";
            return 0;
        }

    }
}