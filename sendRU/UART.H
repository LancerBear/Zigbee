#ifndef __UART_H__
#define __UART_H__

extern void InitUart();   //��ʼ������
extern void Uart0_SendCh(char ch);
extern void Uart_Send_String(unsigned char *Data,int len);

#endif