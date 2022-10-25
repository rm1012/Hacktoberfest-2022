import random

randNumber = random.randint(1,100)
print(randNumber)
userGuess= None
guesses = 0
while(userGuess != randNumber):
    userGuess= int(input("enter your guess no."))
    guesses += 1
    if (userGuess==randNumber):
        print("you guessed it right")
    else:
        print("U guessed it wrong")
        
    
print("u guessed the wrong number in {guesses} guesses")
