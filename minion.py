## The minion game

def minion_game(string):
	string.upper()
	player_1_pionts = 0
	player_2_piont2 = 0
	for i in range(len(string)):
		if string[i] in "AEIOU":
			player_1_pionts += len(string) - i
		else:
			player_2_pionts += len(string) - i

	if (player_1_pionts > player_2_pionts):
		print("Kevin"+" "+str(player_1_pionts))
	else:
		print("Stuart"+" "+str(player_2_pionts))
	if(player_1_pionts == player_2_pionts):
		print("Draw")

if __name__ == '__main__':
	s = input()
	minion_game(s)

