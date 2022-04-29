# IC1-project
## Exploiting a simple app in C language with Python

- This project is a simple demonstraiton of how easy it is to attack  a badly written app. 
# Exploit 1 - Buffer overflow
Python scrpt insterts payload into a variable. The payload is big enough to write outside of the allocated variable and overwrites another variable as well. The variable suddenly happens to appear as true value in if statment. This gives us message about the overflow.

# Exploit 2 - Integer overflow
Python script inserts a value greater than INT_MAX (4 bit). After reading back from the file the language C has undefined behaviour for integer overflow. When reading the value of INT_MAX+1, retured is -1. In this case, a message is showed - integer overflow.

# Exploit 3 - String format attack
Python script inserts a harmful parameters - %x. This creates a behaviour which is very easyly misused. %x returnes addresses which are in the stackpointer. In case if the attacker used %n parameter, he would be even able to execute a harmful code. Unfortunately, this wasn't implemented in the scripts.
