/*
 * TestGcc.c
 *
 * Created: 2023-04-17 오후 10:44:03
 * Author : enrhd
 * http://choavrweb.blogspot.com/p/avrstudio7-mega2560program.html
 */ 

#define F_CPU 16000000L
#include <util/delay.h>
#include <avr/io.h> // AVR 입출력 라이브러리
#define LED_PIN PB2 // LED가 연결된 핀 번호 10

int main(void)
{
	DDRB |= (1 << LED_PIN); // LED_PIN을 출력 핀으로 설정

	while (1)
	{
		PORTB |= (1 << LED_PIN); // LED_PIN을 HIGH(1)로 설정하여 LED를 켬
		_delay_ms(1000);
	}

	return 0;
}