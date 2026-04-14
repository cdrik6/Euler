def main():
	"""
	By considering the terms in the Fibonacci sequence from 1,2,3 ... whose values do not exceed four million,
		find the sum of the even-valued terms.
	"""
	a = 1
	b = 2	
	s = 2
	while True:
		f = a + b
		if f > 4000000:
			break
		if f % 2 == 0:
			s += f
		a = b
		b = f	
	print(f"sum = {s}")


if __name__ == "__main__":
	main()

# best solution 4*b + a = even fibo