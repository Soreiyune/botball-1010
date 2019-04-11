const int tophat = 0;
const int black  = 2000;

const int Rmotor = 0;
const int Lmotor = 1;
const int power  = 1000;

void SinLine(int time){
int t = seconds() + time
while(t > seconds()){
	
	if(analog(tophat) < black){
		mav(Rmotor, power-500);
		mav(Lmotor, power);		
		msleep(1);
	}
	else{
		mav(Rmotor, power);
		mav(Lmotor, power-500);
		msleep(1);
	}
}

}

int main(){
	sinLine(4);
}
