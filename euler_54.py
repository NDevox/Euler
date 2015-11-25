import time

time.clock()

hands = []
transcribe = {'1': 1, '2': 2, '3': 3, '4': 4, '5': 5,
              '6': 6, '7': 7, '8': 8, '9': 9, 'T': 10,
              'J': 11, 'Q': 12, 'K': 13, 'A': 14}

def player_1_is_winner(hand1, hand2):
    nums_hand1 = {}
    suits_hand1 = {}
    nums_hand2 = {}
    suits_hand2 = {}

    for hand in hand1:
        try:
            nums_hand1[transcribe[hand[0]]] += 1
        except KeyError:
            nums_hand1[transcribe[hand[0]]] = 1
        try:
            suits_hand1[hand[1]] += 1
        except KeyError:
            suits_hand1[hand[1]] = 1

    for hand in hand2:
        try:
            nums_hand2[transcribe[hand[0]]] += 1
        except KeyError:
            nums_hand2[transcribe[hand[0]]] = 1
        try:
            suits_hand2[hand[1]] += 1
        except KeyError:
            suits_hand2[hand[1]] = 1

    if len(nums_hand1) == 5:
        straight1 = sorted(list(nums_hand1.keys()))
        if straight1 == list(range(straight1[0], straight1[0]+5)) or straight1 == [1,2,3,4,14]:
            if len(nums_hand2) < 3 or len(suits_hand2) == 1:
                return 0
            else:
                return 1

    if len(nums_hand2) == 5:
        straight2 = sorted(list(nums_hand2.keys()))
        if straight2 == list(range(straight2[0], straight2[0]+5)) or straight2 == [1,2,3,4,14]:
            if len(nums_hand1) < 3 or len(suits_hand1) == 1:
                return 1
            else:
                return 0

    if len(nums_hand1) != len(nums_hand2):
        if len(nums_hand1) == 2:
            return 1
        if len(nums_hand2) == 2:
            return 0
        if len(suits_hand1) == 1:
            return 1
        if len(suits_hand2) == 1:
            return 0
        if len(nums_hand1) < len(nums_hand2):
            return 1
        else:
            return 0
    else:
        if len(nums_hand1) == 5:
            if max(nums_hand1.keys()) > max(nums_hand2.keys()):
                return 1
            elif max(nums_hand1.keys()) < max(nums_hand2.keys()):
                return 0
        else:
            pair1 = sorted(nums_hand1.keys(), key=lambda x: nums_hand1[x])[-1]
            pair2 = sorted(nums_hand2.keys(), key=lambda x: nums_hand2[x])[-1]
            if pair1 > pair2:
                return 1
            elif pair1 < pair2:
                return 0
            else:
                return 0
        return 0

wins = 0
with open('p054_poker.txt', 'r') as hands_file:
    for line in hands_file:
        l = line.split()
        wins += player_1_is_winner(l[:5], l[5:])

print(wins)

print(time.clock())