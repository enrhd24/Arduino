/*
 * TestGcc.c
 *
 * Created: 2023-04-17 오후 10:44:03
 * Author : enrhd
 * http://choavrweb.blogspot.com/p/avrstudio7-mega2560program.html
 */ 

 #include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	DDRB = 0xFF;

	while(1)

	{
		PORTB = 0x01;
		_delay_ms(500);
		PORTB = 0x00;
		_delay_ms(500);

	}
	
	return 0;
}

#ifndef F_CPU
#define F_CPU 16000000L
#endif

#include <util/delay.h>
#include <avr/io.h> // AVR 입출력 라이브러리

#define LEDON       (PORTB |= (1 << 5))
#define LEDOFF      (PORTB &= ~(1 << 5))
#define LEDTOGGLE   ((PINB & (1 << 5)) ? LEDOFF : LEDON)

int main( void )
{
	char var=0;
	DDRB = (1<<5);              // LED 핀 출력설정
	DDRD &= ~(1<<7);            // 스위치 핀 입력설정
	PORTD |= (1<<7);            // 스위치 핀 풀업
	while(1) {
		var = PIND & (1<<7);    // 스위치 핀 입력
		if(var) LEDON;
		else LEDOFF;
	}
}


#include <avr/io.h>
#include <util/delay.h>
void msec_delay(int msec);

unsigned char pattern[8]
 = = {0xFE, 0xFD, 0xFB, 0xF7, 0xEF, 0xDF, 0xBF, 0x7F};
	 
	 int main()
	 {
		 int i=0;
		 DDRB = 0xFF; // 포트 B를 출력으로 설정
		 PORTB = pattern[i]; // 처음 패턴으로 LED를 켠다.
		 while(1)
		 {
			 _delay_ms(1000); // 약 1sec 지연
			 if(++i==8) i = 0; // 마지막 패턴에서 인덱스 리셋
			 PORTB = pattern[i]; // i-번째 패턴으로 점등
		 }
	 }
	
	