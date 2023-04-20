
void LED_lnit(void);
void LED_On(unsigned char Data);

int main(void){
	LED_lnit();
	for(;;){
		LED_ON(0x00);
		_delay_ms(100);
		LED_ON(0x01);
		_delay_ms(100);
	}
	
	return 0;
}

void LED_lnit(void){
	DDRD = 0xff;
}

void LED_ON(unsigned char Data){
	PORTD = Data;
}

