# This is a simple, text based waiting game. I thought it would be something silly
# The setting is like you're at a coffee shop waiting for coffee to be made, but it randomizes the amount of time

from random import randint
from time import sleep
from os import system

# I'll keep it under a minute so that way you're not waiting forever
timer_start = 0
timer_end = randint(5, 60)

print('What kind of coffee would you like today?')
order = input('Order:\t')
print('Coming right up, just hang around, we\'ll have your order soon')
sleep(1)
system('clear')

while timer_start != timer_end:
    # This bit just adds a cute little loading animation
    if timer_start % 2:
        print("...")
    elif timer_start % 3: 
        print("......")
    else:
        print("...........")
    
    # Sleeps for the second, then adds 1 to the counter
    sleep(1)
    system('clear')
    timer_start += 1

print('Alright, here\'s your {}. The wait time was {} seconds'.format(order, timer_end))