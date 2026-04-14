// Among the first 196 thousand square numbers, what is the sum of all the odd squares?
function oddSquare() {
	let sum = 0;
	for (let i = 1; i <= 196000; i = i + 2)
		sum += i * i;
	console.log("sum = " + sum)
}

oddSquare();