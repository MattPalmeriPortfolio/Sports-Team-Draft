# Sports-Team-Draft

Contents
---------------------
* File Contents
* Introduction
* Algorithm
* Requirements

## File Contents
	
	Determine_Sports_Team_Draft_Order.cpp (program file containing code)

## Introduction
Book practice project from Problem Solving With C++ Chapter 4. Project 9.
This program randomly determines which teams pick in which order for the draft for your sports league. Demonstrates ability to take in input and adjust random chances in c++.
Written using Microsoft Visual Studio. 

## Algorithm

		1. receive input for which teams have picked
			1a. go through each team individually, accepting a char of Y or N and setting a bool value based on the input
		2. run a rand() function, % 40 (+1) to check which ball was picked
			2a. if the ball picked matches one of the value ranges for a team already picked, continue picking balls
			2b. else, finish and output that team;
		3. repeat step 2 up to 4 times, until every team has picked
			3a. set bool values each time so the function knows which teams have already been picked
		4. output results to screen
		5. prompt user whether to continue
    
## Requirements
No requirements or modules needed for running this program.
