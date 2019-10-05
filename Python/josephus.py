def josephus( m, k):
	if(m==1):
		return 0
	else:
		return ((josephus(m-1,k) + k ) % m)


def main():
	print("How many people will participate ?")
	n = int(input())
	print("whats the size of the jump ?")
	k = int(input())
	print()
	print("Jhosepus has to sit on the",josephus(n,k)+1,"-th position")


main()