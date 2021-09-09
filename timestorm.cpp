#include <bits/stdc++.h>
#include "functions.hpp"
using namespace std;

int main(){
    ios::sync_with_stdio(0);

    int dis=135; // Distance from vortex
    bool time_loop = true;
    bool ship = true;
    bool looped = false;
    int talked_to_couson = 0;

    while(dis > 0 && time_loop==true && ship==true){
        // ----------------------------------------------
        int sleeping_pod=question_2(dis, "You woke up in a healing pod. You feel disoriented after the torture you\nendured before you were extracted from the enemy base by your team\ndays ago.", "Step out from the pod.", "Sit down on the pod to catch your breath. Then step down slowly.");
        if (sleeping_pod==1){
            
            dis-=2;
            int daniel=question_2(dis, "As you were standing up, you noticed a glaring alarm, which led you to\nwonder what is going on. You jumped out from the sleeping pod, which woke Daniel up.\nYou didn't even notice he was watching you\nsleep.", "Ask Daniel why he is watching you sleep.", "Go outside to check out what the alarm is for.");
            if (daniel==1){

                dis-=2;
                int daniel_look=question_2(dis, "Daniel: \"I'm just looking out for you in case you need help.\nYou were pretty banged up because of our last mission.\"", "Reply: \"Maybe, it's more than that. Everytime I ask for\nyour help, you say, 'Yes.' You don't even ask why. Why? Be honest.\"", "Thank him, then go outside to check out what the alarm is for.");
                if (daniel_look==1){
                    dis-=2;
                    cout<<"\n"<<"====================================";
                    cout<<"\n"<<"Distance from time vortex: "<<dis<<" km";
                    cout<<"\n"<<"====================================";
                    cout<<"\n\"Some of my favorite people are people like you,\" he said as he inhaled deeply, \n\"Focused on the greater good, even at your own expense.\nYou'll keep running\nat the problem full-tilt until you solve it or slam headlong into a brick wall.\"\n";
                    cout<<"You ask, \"But how does that...\"\n";
                    cout<<"He quickly interrupts, \"Because when people like you run into\nthose walls, you should have there to pick you back up.\"\nThen both of you decided to go to the command center to check\nout what the alarm is all about.\n\n";
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
            cout<<"\n"<<"Quitting game. Goodbye!";
            return 0;
        }
    
        // ----------------------------------------------
        int command_center = command_center_prompt(dis);
        if (command_center==1){

            dis-=2;
            int nausea = nauseous_prompt(dis, looped, "You start to feel a little bit more nauseous, probably because you haven't really\nrecovered much from the torture you endured.", "Head back to bunk bed to rest.", "Go to the lab to get checked out", "Continue to search the whole place for clues as to was is currently happening", "Realize that you are time looping.");
            looped = true;
            if (nausea==1){
                dis-=2;
                cout<<"\n"<<"You fell asleep on your bunk bed.";
            } else if (nausea==2){
                dis-=2;
                lab_scene("you");
            } else if (nausea==3){
                dis-=2;
                search_scene();
            } else if (nausea==4){

                dis-=2;
                int realize_loop = question_3(dis, "Okay, now you realize you are time looping. What do you do?", "Detonate time drive (note: you need the time drive to continue your mission).", "Decide to turn on Agent Coulson (he is a robot version of the late Agent Phil Coulson)","Check out the time drive");
                if (realize_loop==1){
                    cout<<"\n"<<"You decided to blow up the time drive. Unfortunately, the ship can't navigate anywhere, and you realized you need the time drive to break out the time anomaly.\nThe team is now awaiting for their impending doom as you guys are heading towards the time vortex.\n\n";
                    ship=false;
                } else if (realize_loop==2){
                    dis-=2;
                    int coulson = coulson_prompt(dis, talked_to_couson);
                    talked_to_couson++;
                    if (coulson==1){
                        dis-=2;
                        cout<<"\n"<<"You guys decided to try to fix the time drive so it can buy you guys more time in between loops.\nHowever, in the process, the some part of the time drive blew up.";
                        lab_scene("you");
                    } else if (coulson==2){

                        int solve_faster = question_2(dis, "You both agreed to gather the team around because more heads are better than one. You explained to the crew that you guys are in a time loop and that you need to break out in order to survive.\nDeke: \"I know guys but fixing the drive is the only way to jump out the time loop\".\nEnoch sentient chronicom, suggested that you guys can use his Electrochron Displacement Mechanism (EDM).\nEnoch: Chronicoms use it to regulate energy stability It could do the same for the Time Drive. It's compatible.\"\nJemma: \"It's not that simple It would like removing a human being's heart. Taking it out would—\"\nCoulson: \"would kill him.\"","Reply: \"No, this is not an option.\"", "Suggest to look for another angle.");
                        if (solve_faster==1){
                            enoch_sacrifice();
                            time_loop = false;
                        } else if (solve_faster==2){
                            enoch_sacrifice();
                            time_loop = false;
                        } else if (solve_faster==-1){
                            cout<<"/n"<<"game. Quitting game. Goodbye!";
                            return 0;
                        }


                    } else if (coulson==-1){
                        cout<<"/n"<<"game. Quitting game. Goodbye!";
                        return 0;
                    }
                } else if (realize_loop==3){

                    dis-=2;
                    int saw_deke = question_2(dis, "Deke was already there and ask you to leave because he needs space", "Detonate time drive (note: you need the time drive to continue your mission).", "Decide to turn on Agent Coulson (he is a robot version of the late Agent Phil Coulson)");                  
                    if (saw_deke==1){
                        cout<<"\n"<<"You decided to blow up the time drive. Unfortunately, the ship can't navigate anywhere, and you realized you need the time drive to break out the time anomaly.\nThe team is now awaiting for their impending doom as you guys are heading towards the time vortex.\n\n";
                        dis = 0;
                    } else if (saw_deke==2){
                        dis-=2;
                        int coulson = coulson_prompt(dis, talked_to_couson);
                        talked_to_couson++;
                        if (coulson==1){
                            dis-=2;
                            cout<<"\n"<<"You guys decided to try to fix the time drive so it can buy you guys more time in between loops.\nHowever, in the process, the some part of the time drive blew up.";
                            lab_scene("you");
                        } else if (coulson==2){

                            int solve_faster = question_2(dis, "You both agreed to gather the team around because more heads are better than one. You explained to the crew that you guys are in a time loop and that you need to break out in order to survive.\nDeke: \"I know guys but fixing the drive is the only way to jump out the time loop\".\nEnoch sentient chronicom, suggested that you guys can use his Electrochron Displacement Mechanism (EDM).\nEnoch: Chronicoms use it to regulate energy stability It could do the same for the Time Drive. It's compatible.\"\nJemma: \"It's not that simple It would like removing a human being's heart. Taking it out would—\"\nCoulson: \"would kill him.\"","Reply: \"No, this is not an option.\"", "Suggest to look for another angle.");
                            if (solve_faster==1){
                                enoch_sacrifice();
                                time_loop = false;
                            } else if (solve_faster==2){
                                enoch_sacrifice();
                                time_loop = false;
                            } else if (solve_faster==-1){
                                cout<<"/n"<<"game. Quitting game. Goodbye!";
                                return 0;
                            }
                    } else if (saw_deke==-1){
                        cout<<"/n"<<"game. Quitting game. Goodbye!";
                        return 0;
                    }
                } else if (realize_loop==-1){
                    cout<<"/n"<<"Quitting game. Goodbye!";
                    return 0;
                }

            } else if (nausea==-1){
                cout<<"/n"<<"game. Quitting game. Goodbye!";
                return 0;
            }

        } else if (command_center==2){
            solar_rad_mack_scene("You decided to help May monitor the status of the ship.");
            looped = true;
        } else if (command_center==3){
            solar_rad_mack_scene("You suggested to continue brainstorming with the team.");
            looped = true;
        } else if (command_center==-1){
            cout<<"/n"<<"Quitting game. Goodbye!";
            return 0;
        }

        // ----------------------------------------------



    }
    }

    if(dis<=0){
        cout<<"\n\n"<<"The team is now awaiting for their impending doom as you guys are heading towards the time vortex.";
    }

}