let names = [
	'Liam',
	'Noah',
	'William',
	'James',
	'Oliver',
	'Benjamin',
	'Elijah',
	'Lucas'
];

let lastNames = [
	'SMITH',
	'JOHNSON',
	'WILLIAMS',
	'JONES',
	'BROWN',
	'DAVIS',
	'MILLER',
	'WILSON'
];

let randomizerName = Math.floor(Math.random() * 8);
let randomizerLastName = Math.floor(Math.random() * 8);

let finale = `Your name is ${names[randomizerName]} ${lastNames[randomizerLastName]}`;
