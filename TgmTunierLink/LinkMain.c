int main(){
	while(1){
		while(analog(2) > 600){
				motor(0,-30);
				motor(1,100);
				msleep(1);
			}
			while(analog(3) > 600){
				motor(0,100);
				motor(1,-100);
				msleep(1);
			}
		motor(0,100);
		motor(1,50);
		msleep(1);
	}
}
