#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

 write out 10 nouns.
 for each of the 10 nouns, write out 3 actions it might perform, in plain english.
 write out how you'd call that action in pseudo code, in the space between each block comment
 
 If the action requires multiple words, use camelCaseToNameIt
 don't forget the semi-colon after each statement
 
 When you finish, commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].

Make a pull request after you make your first commit and pin the pull request link to our DM thread.

send me a DM to check your pull request

 Wait for my code review.
 */

/*
 example)
 Noun:       arm
 action 1:   the arm extends
 action 2:   the arm flexes
 action 3:   the arm rotates conter-clockwise
 */
arm.extend();
arm.flex();
arm.rotateCounterClockwise(); //demonstrates CamelCase

/*
 1)
 Noun: missile
 action 1: the missile launches
 action 2: the missile locks onto a target
 action 3: the missile explodes
 */
missile.launch();
missile.lockTarget();
missile.explode();

/*
 2)
 Noun: monkey
 action 1: the monkey eats a banana
 action 2: the monkey throws a rock
 action 3: the monkey climbs a tree
 */
monkey.eatBanana();
monkey.throwRock();
monkey.climbTree();  
/*
 3)
 Noun: laptop
 action 1: the laptop powers on
 action 2: the laptop fans power on
 action 3: the laptops brightness decreases
 */
laptop.powerOn();
laptop.fanPowerOn();
laptop.brightnessDown();

/*
 4)
 Noun: laser
 action 1: the laser fires
 action 2: block the laser beam
 action 3: the laser beam collides with the ground
 */
laser.shoot();
laser.block();
laser.destroy();
/*
 5)
 Noun: light
 action 1: dim the light
 action 2: turn the light on
 action 3: turn the light off
 */
light.dim();
light.powerOn();
light.powerOff();

/*
 6)
 Noun: burrito
 action 1: roll the burrito
 action 2: heat the burrito
 action 3: deliver the burrito
 */
burrito.roll();
burrito.setTemperature();
burrito.deliver();
/*
 7)
 Noun: player
 action 1: the player wins
 action 2: the player loses
 action 3: the player restarts the game
 */
player.winGame();
player.loseGame();
player.restartGame();

/*
 8)
 Noun: dog
 action 1: the dog chases its tail
 action 2: the dog barks
 action 3: the dog goes to bed
 */
dog.chaseTail();
dog.bark();
dog.goToSleep();
/*
 9)
 Noun: maid
 action 1: the maid washes clothes
 action 2: the maid folds clothes
 action 3: the maid puts the clothes away
 */
maid.washClothes();
maid.foldClothes();
maid.returnClothesToDresser();

/*
 10)
 Noun: beer
 action 1: the beer sizzles
 action 2: the beer gets lukewarm
 action 3: the beer evaporates
 */
beer.sizzle();
beer.setTemperatureLukewarm();
beer.evaporate();

#endif

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}
