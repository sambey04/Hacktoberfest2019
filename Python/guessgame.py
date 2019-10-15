#this is a guessing the no. game
import random
secretno=random.randint(1,20)
print("I guessed a number between 1 to 20","You need to guess what I guessed")
#ask the user to guess the no. giving a chance of 6 times
for guessesTaken in range(1,6):
    print("Guess any no.")
    guess=int(input())
    if guess<secretno:
        print("Your guess is low")
    elif guess>secretno:
        print("Your guess is high")
    else:
        print("Congrats You guessed the correct number")
        break
if guess==secretno:
    print("You guessed the number in "+str(guessesTaken)+"times")
else:
    print("Sorry You failed...I was thinking of "+str(secretno))
    
