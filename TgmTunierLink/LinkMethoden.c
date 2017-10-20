int gerade(int sec){
	motor(0,100);
	motor(1,100);
	wait_for_milliseconds(sec*1000);
}

int zurueck(int sec){
	motor(0,-100);
	motor(1,-100);
	wait_for_milliseconds(sec*1000);
}

int rechts(int sec){
	motor(0,100);
	motor(1,-100);
	wait_for_milliseconds(sec*1000);
}

int links(int sec){
	motor(0,-100);
	motor(1,100);
	wait_for_milliseconds(sec*1000);
}
