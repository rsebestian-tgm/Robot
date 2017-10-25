
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

void umdrehen(){			//getestet und funktioniert
	motor(0,-100);
	motor(1,100);
	msleep(4000);
}

void nachOben(){			//nicht getestet
	/**
	while(!Link oben){			Wie machen, dass der Link weiﬂ
		msleep(1);				ob er oben ist?
		while(sensor rechts = schwarz){
			motor(0,90);
			motor(1,100);
			msleep(1);
		}
		while(sensor links = schwarz){
			motor(0,100);
			motor(1,90);
			msleep(1);
		}
	}*/
}	

void zumLPlanter(){			//nicht getestet
	while(/*Link nicht bei Planter*/1){
		while(analog(1) < 0){		//Wert f¸r schwarze Linie herausfinden
			motor(0,90);
			motor(1,100);
			msleep(1);
		}
		while(analog(0) < 0){		//Wert f¸r schwarze Linie herausfinden
			motor(0,100);
			motor(1,90);
			msleep(1);
		}
	msleep(1);
	}
}
