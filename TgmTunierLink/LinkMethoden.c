int gerade(int sec){
	motor(0,100);
	motor(1,100);
	wait_for_milliseconds(sec);
}

int zurueck(int sec){
	motor(0,-100);
	motor(1,-100);
	wait_for_milliseconds(sec);
}

int rechts(int sec){
	motor(0,100);
	motor(1,-100);
	wait_for_milliseconds(sec);
}

int links(int sec){
	motor(0,-100);
	motor(1,100);
	wait_for_milliseconds(sec);
}

int umdrehen(){
	motor(0,-100);
	motor(1,100);
	wait_for_milliseconds(4);
}
