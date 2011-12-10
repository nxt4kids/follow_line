
bool dark(){
	return(COLORSENSOR < 4);
}

void print(){
	ClearScreen();
	NumOut(0, 0, COLORSENSOR);
}

void runProgram(){
	Wait(100);
	print();
	if(dark()){
		OnFwd(OUT_C, 80);
		Off(OUT_A);
	}
	else {
		OnFwd(OUT_A, 80);
		Off(OUT_C);
	}
}