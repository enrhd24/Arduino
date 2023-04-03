const int LED = 13;
int on_off = 0;

unsigned long t1_prev = 0;
const unsigned long t1_delay = 500;

void setup(){
	pinMode(LED,OUTPUT);
}

void loop(){
    unsigned long t1_now = millis();
  
    if(t1_now - t1_prev >= t1_delay){
    t1_prev = t1_now;
    
    on_off++;
    if(on_off >1){on_off = 0;}
    digitalWrite(LED,on_off);
  }
}