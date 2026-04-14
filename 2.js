// By considering the terms in the Fibonacci sequence whose values do not exceed four million,
//  find the sum of the even-valued terms.

function evenFibo() {
	let a = 1;
	let b = 2;
	let f;
	let s = 2;

	while (a + b <= 4000000)
	{
		f = a + b;
		if (f % 2 == 0)
			s += f;
		a = b;
		b = f;
		console.log("f = " + f);
	}
	console.log("sum = " + s);
}

evenFibo();