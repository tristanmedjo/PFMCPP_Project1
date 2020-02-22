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
 action 1: the missile is fired
 action 2: the missile locks onto a target
 action 3: the missile explodes
 */
missile.fire();
missile.selectTarget();
missile.explode

/*
 2)
 Noun: apple
 action 1: the apple is eaten
 action 2: the apple is sliced
 action 3: the apple is thrown
 */
apple.eat();
apple.slice();
apple.toss();  //looks like throw is already a defined function
/*
 3)
 Noun: laptop
 action 1: the laptop is powered on
 action 2: the laptops fans turn on
 action 3: the laptops brightness turns down
 */
laptop.powerOn();
laptop.fanPowerOn();
laptop.brightnessDown();

/*
 4)
 Noun: knife
 action 1: the knife is dropped
 action 2: the knife is used to cut fruit
 action 3: the knife is thrown
 */
knife.drop();
knife.cutFruit();
knife.toss();
/*
 5)
 Noun: light
 action 1: the light is dimmed
 action 2: the light is turned on
 action 3: the light is turned off
 */
light.dim();
light.powerOn();
light.powerOff();

/*
 6)
 Noun: burrito
 action 1: the burrito is rolled
 action 2: the buritto is heated up
 action 3: the burrito is consumed
 */
burrito.roll();
burrito.setTemperature();
burrito.consume();
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
 action 1: take the dog for a walk
 action 2: feed the dog
 action 3: clean the dog
 */
dog.walk();
dog.feed();
dog.clean();
/*
 9)
 Noun: clothes
 action 1: wash clothes
 action 2: fold clothes
 action 3: put the clothes away
 */
clothes.wash();
clothes.fold();
clothes.placeInDresser();

/*
 10)
 Noun: beer
 action 1: take the cap off the beer
 action 2: drink the beer
 action 3: recycle the bottle of beer
 */
beer.removeCap();
beer.drink();
beer.recycleBottle();

#endif

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}
