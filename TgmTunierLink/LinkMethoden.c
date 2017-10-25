void folgen(){
	while(analog(0) > 800){
		motor(0,90);
		motor(1,100);
		msleep(1);
	}
	while(analog(1) > 800){
		motor(0,100);
		motor(1,90);
		msleep(1);
	}
	motor(0,100);
	motor(1,100);
	msleep(1);
}

void gerade(int sec){ 		//getestet und funktioniert
	motor(0,100);
	motor(1,100);
	msleep(sec);
}

void zurueck(int sec){		//getestet und funktioniert
	motor(0,-100);
	motor(1,-100);
	msleep(sec);
}

void rechts(int sec){		//getestet und funktioniert
	motor(0,100);
	motor(1,-100);
	msleep(sec);
}

void links(int sec){		//getestet und funktioniert
	motor(0,-100);
	motor(1,100);
	msleep(sec);
}
