import random
while True:
 randNo=random.randint(1,3)
 if randNo==1:
    comp='r'
 elif randNo==2:
     comp='p' 
 else:
    comp='s'
 while True:
       you = input("Your turn:rock(r),paper(p),scissor(s):")
       if you =='r' or you=='s' or you=='p':
           break
       else:
           print("Invalid input.Pease enter 'r','s' or 'p' ")
 print("Computer turn:rock(r),paper(p),scissor(s):")
 print(f"You chose {you}")
 print(f"Computer chose {comp}")
 def gameWin(comp,you):
        if comp=='r' and you=='s':
           return False
        elif comp=='s' and you=='r':
           return True
        elif comp=='p' and you=='r':
           return False   
        elif comp=='r' and you=='p':
           return True   
        elif comp=='s' and you=='p':
           return False   
        elif comp=='p' and you=='s':
           return True   
        else:
            return None
        
 result=gameWin(comp,you)
 if result== None:
    print("Tie!!")
 elif result== True:
    print("You win.")
    break
 else:
    print("You lose.Try again.")
print("Congratualtions!!!You have won the game.")