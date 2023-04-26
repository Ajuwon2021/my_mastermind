# Welcome to My Mastermind
***

## Task
The task is to implement the game Mastermind.

## Description
Mastermind is a code-breaking game in which the player tries to guess a secret code of a certain length, 
made up of digits. The player is allowed a certain number of attempts to guess the code,
and after each guess the player is given feedback on how many digits they guessed correctly and 
how many digits were correct but in the wrong position.

## Installation
To compile the program, run the following command:
    gcc -o my_mastermind my_mastermind.c

## Usage
To run the program, use the following command:
./my_mastermind [-c CODE] [-t ATTEMPTS]
The -c flag allows you to specify a custom secret code, 
and the -t flag allows you to specify the number of attempts the player has to guess the code.
If these flags are not provided, a random secret code will be generated and the player will have 10 attempts.

### The Core Team
<span><i>Made at <a href='https://qwasar.io'>Qwasar SV -- Software Engineering School</a></i></span>
<span><img alt='Qwasar SV -- Software Engineering School's Logo' src='https://storage.googleapis.com/qwasar-public/qwasar-logo_50x50.png' width='20px'></span>
