#This program contains a function that enables you calculate the prime numbers in a given set of numbers.
E.g to calculate prime numbers from between 1 and 100,the following steps will guide us
1.We define our function
2.We call it and use it in our program
     Soln
1.>>>def prime_calc(p):
     for i in range(2,p):
        if(p%i==0):
           return False
     return True
2.>>>for i in range(1,100):
     if prime_calc(i):
        print(i)
