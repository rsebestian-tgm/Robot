int main(){
	
	shut_down_in(119);
	wait_for_light(1);

	while(digital(2)<450){
		folgen();
	}
	
}
