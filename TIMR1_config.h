
#ifndef _TIMER1_CONFIG_H
#define _TIMER1_CONFIG_H

/*Range
#define TIMER1_NORMAL
#define TIMER1_CTC
#define TIMER1_FAST_PWM_10BIT
#define TIMER1_FAST_PWM_OCR1A
#define TIMER1_PHASE_PWM	
*/

#define TIMER1_MODE 		TIMER1_NORMAL
/*Range
//#define		NO_PRESCALLER			0
#define TIMER1_DIV_BY_1
#define TIMER1_DIV_BY_8
#define TIMER1_DIV_BY_64
#define TIMER1_DIV_BY_256
#define TIMER1_DIV_BY_1024
#define TIMER1_EXT_FALLING
#define TIMER1_EXT_RISING		
*/
#define TIMER1_PRESCALER  	TIMER1_DIV_BY_1024

/*Range
#define TIMER1_NO_ACTION
#define TIMER1_TOGGLE
#define TIMER1_SET
#define TIMER1_CLEAR		
*/

#define TIMER1_COM_EVENT   TIMER1_CLEAR


/*Range
#define TIMER1_CHANNEL_A
#define TIMER1_CHANNEL_B
*/

#define TIMER1_CTC_CHANNEL   TIMER1_CHANNEL_A


#endif
