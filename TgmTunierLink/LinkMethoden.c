int gerade(int sec){
	motor(0,100);
	motor(1,100);
	msleep(sec);
}

int zurueck(int sec){
	motor(0,-100);
	motor(1,-100);
	msleep(sec);
}

int rechts(int sec){
	motor(0,100);
	motor(1,-100);
	msleep(sec);
}

int links(int sec){
	motor(0,-100);
	motor(1,100);
	msleep(sec);
}

int umdrehen(){
	motor(0,-100);
	motor(1,100);
	msleep(4);
}
