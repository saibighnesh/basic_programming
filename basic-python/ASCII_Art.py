import pyfiglet
from termcolor import colored

valid_colors=("yellow","green","cyan","magenta","red","blue","white")

msg=input("what do you want to print?")
color=input("What color? Please select a color from given -> yellow,green,cyan,magenta,red,blue,white ").lower()

if color not in valid_colors:
	color="magenta"

ascii_art=pyfiglet.figlet_format(msg)
text=colored(ascii_art,color=color,attrs=["blink"])
print(text)