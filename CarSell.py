for o in range(int(input())):
	number = int(input())
	li = list(map(int, input().rstrip().split()))
	num = 0
	s = 0
	c = 1000000007
	li.sort(reverse=True)
	for i in li:
		if(i):
			d = i - num
			if(d<=0):
				b = 0
			else:
				b = ((i%c)-(num%c))%c
				b = b%c
		else:
			b = 0
		if(b<=0):
			b = 0
		num = ((num%c)+(1%c))%c
		num = num%c
		s = ((s%c)+(b%c))%c
		s = s%c
	print(s%c)