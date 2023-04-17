const int LED1 = 13;
int on_off = 0;

const int LED2 = 10;
int t_hight = 0;

unsigned long t1_prev = 0;
const unsigned long t1_delay = 500;

unsigned long t2_prev = 0;
const unsigned long t2_delay = 4;

void setup(){
	pinMode(LED1,OUTPUT);
}

void loop(){
    unsigned long t1_now = millis();
    unsigned long t2_now = millis();
  
    if(t1_now - t1_prev >= t1_delay){
    t1_prev = t1_now;
    
    on_off++;
    if(on_off >1){on_off = 0;}
    digitalWrite(LED1,on_off);
  }
  
    if(t2_now - t2_prev >= t2_delay){
    t2_prev = t2_now;
    
    t_hight++;
    if(t_hight >255){t_hight = 0;}
    analogWrite(LED2,t_hight);
  }
}