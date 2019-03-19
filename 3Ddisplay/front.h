﻿#ifndef _front_H
#define _front_H


/******************************************************************************
* Filename: font.c
* Author  : Wu LianWei
******************************************************************************/






/******************************************************************************/
/* ASCII 6x8 ??                                                             */
/******************************************************************************/
unsigned char const ASCII_Table_6X8[95][5]={ 
0x00,0x00,0x00,0x00,0x00,//space 
0x00,0x00,0x4f,0x00,0x00,//! 
0x00,0x07,0x00,0x07,0x00,//" 
0x14,0x7f,0x14,0x7f,0x14,//# 
0x24,0x2a,0x7f,0x2a,0x12,//$ 
0x23,0x13,0x08,0x64,0x62,//% 
0x36,0x49,0x55,0x22,0x50,//& 
0x00,0x05,0x07,0x00,0x00,//' 
0x00,0x1c,0x22,0x41,0x00,//( 
0x00,0x41,0x22,0x1c,0x00,//) 
0x14,0x08,0x3e,0x08,0x14,//* 
0x08,0x08,0x3e,0x08,0x08,//+ 
0x00,0x50,0x30,0x00,0x00,//, 
0x08,0x08,0x08,0x08,0x08,//- 
0x00,0x60,0x60,0x00,0x00,//. 
0x20,0x10,0x08,0x04,0x02,/// 
0x3e,0x51,0x49,0x45,0x3e,//0 
0x00,0x42,0x7f,0x40,0x00,//1 
0x42,0x61,0x51,0x49,0x46,//2 
0x21,0x41,0x45,0x4b,0x31,//3 
0x18,0x14,0x12,0x7f,0x10,//4 
0x27,0x45,0x45,0x45,0x39,//5 
0x3c,0x4a,0x49,0x49,0x30,//6 
0x01,0x71,0x09,0x05,0x03,//7 
0x36,0x49,0x49,0x49,0x36,//8 
0x06,0x49,0x49,0x29,0x1e,//9 
0x00,0x36,0x36,0x00,0x00,//: 
0x00,0x56,0x36,0x00,0x00,//; 
0x08,0x14,0x22,0x41,0x00,//< 
0x14,0x14,0x14,0x14,0x14,//= 
0x00,0x41,0x22,0x14,0x08,//> 
0x02,0x01,0x51,0x09,0x06,//? 
0x32,0x49,0x79,0x41,0x3e,//@ 
0x7e,0x11,0x11,0x11,0x7e,//A 
0x7f,0x49,0x49,0x49,0x36,//B 
0x3e,0x41,0x41,0x41,0x22,//C 
0x7f,0x41,0x41,0x22,0x1c,//D 
0x7f,0x49,0x49,0x49,0x41,//E 
0x7f,0x09,0x09,0x09,0x01,//F 
0x3e,0x41,0x49,0x49,0x7a,//G 
0x7f,0x08,0x08,0x08,0x7f,//H 
0x00,0x41,0x7f,0x41,0x00,//I 
0x20,0x40,0x41,0x3f,0x01,//J 
0x7f,0x08,0x14,0x22,0x41,//K 
0x7f,0x40,0x40,0x40,0x40,//L 
0x7f,0x02,0x0c,0x02,0x7f,//M 
0x7f,0x04,0x08,0x10,0x7f,//N 
0x3e,0x41,0x41,0x41,0x3e,//O 
0x7f,0x09,0x09,0x09,0x06,//P 
0x3e,0x41,0x51,0x21,0x5e,//Q 
0x7f,0x09,0x19,0x29,0x46,//R 
0x46,0x49,0x49,0x49,0x31,//S 
0x01,0x01,0x7f,0x01,0x01,//T 
0x3f,0x40,0x40,0x40,0x3f,//U 
0x1f,0x20,0x40,0x20,0x1f,//V 
0x3f,0x40,0x38,0x40,0x3f,//W 
0x63,0x14,0x08,0x14,0x63,//X 
0x07,0x08,0x70,0x08,0x07,//Y 
0x61,0x51,0x49,0x45,0x43,//Z 
0x00,0x7f,0x41,0x41,0x00,//[ 
0x02,0x04,0x08,0x10,0x20,//\  '\\'
0x00,0x41,0x41,0x7f,0x00,//] 
0x04,0x02,0x01,0x02,0x04,//^ 
0x40,0x40,0x40,0x40,0x40,//_ 
0x01,0x02,0x04,0x00,0x00,//` 
0x20,0x54,0x54,0x54,0x78,//a 
0x7f,0x48,0x48,0x48,0x30,//b 
0x38,0x44,0x44,0x44,0x44,//c 
0x30,0x48,0x48,0x48,0x7f,//d 
0x38,0x54,0x54,0x54,0x58,//e 
0x00,0x08,0x7e,0x09,0x02,//f
0x48,0x54,0x54,0x54,0x3c,//g 
0x7f,0x08,0x08,0x08,0x70,//h 
0x00,0x00,0x7a,0x00,0x00,//i 
0x20,0x40,0x40,0x3d,0x00,//j 
0x7f,0x20,0x28,0x44,0x00,//k 
0x00,0x41,0x7f,0x40,0x00,//l 
0x7c,0x04,0x38,0x04,0x7c,//m 
0x7c,0x08,0x04,0x04,0x78,//n 
0x38,0x44,0x44,0x44,0x38,//o 
0x7c,0x14,0x14,0x14,0x08,//p 
0x08,0x14,0x14,0x14,0x7c,//q 
0x7c,0x08,0x04,0x04,0x08,//r 
0x48,0x54,0x54,0x54,0x24,//s 
0x04,0x04,0x3f,0x44,0x24,//t 
0x3c,0x40,0x40,0x40,0x3c,//u 
0x1c,0x20,0x40,0x20,0x1c,//v 
0x3c,0x40,0x30,0x40,0x3c,//w 
0x44,0x28,0x10,0x28,0x44,//x 
0x04,0x48,0x30,0x08,0x04,//y 
0x44,0x64,0x54,0x4c,0x44,//z 
0x08,0x36,0x41,0x41,0x00,//{ 
0x00,0x00,0x77,0x00,0x00,//| 
0x00,0x41,0x41,0x36,0x08,//} 
0x04,0x02,0x02,0x02,0x01 //~ 
};





/******************************************************************************/
/* ASCII 8x16 ??                                                            */
/******************************************************************************/
unsigned char const ASCII_Table_8X16[190][8]={ 

{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*" ",32*/

{0x00,0x00,0x00,0xF8,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x33,0x30,0x00,0x00,0x00},/*"!",33*/

{0x00,0x10,0x0C,0x06,0x10,0x0C,0x06,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*""",34*/

{0x40,0xC0,0x78,0x40,0xC0,0x78,0x40,0x00},
{0x04,0x3F,0x04,0x04,0x3F,0x04,0x04,0x00},/*"#",35*/

{0x00,0x70,0x88,0xFC,0x08,0x30,0x00,0x00},
{0x00,0x18,0x20,0xFF,0x21,0x1E,0x00,0x00},/*"$",36*/

{0xF0,0x08,0xF0,0x00,0xE0,0x18,0x00,0x00},
{0x00,0x21,0x1C,0x03,0x1E,0x21,0x1E,0x00},/*"%",37*/

{0x00,0xF0,0x08,0x88,0x70,0x00,0x00,0x00},
{0x1E,0x21,0x23,0x24,0x19,0x27,0x21,0x10},/*"&",38*/

{0x10,0x16,0x0E,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"'",39*/

{0x00,0x00,0x00,0xE0,0x18,0x04,0x02,0x00},
{0x00,0x00,0x00,0x07,0x18,0x20,0x40,0x00},/*"(",40*/

{0x00,0x02,0x04,0x18,0xE0,0x00,0x00,0x00},
{0x00,0x40,0x20,0x18,0x07,0x00,0x00,0x00},/*")",41*/

{0x40,0x40,0x80,0xF0,0x80,0x40,0x40,0x00},
{0x02,0x02,0x01,0x0F,0x01,0x02,0x02,0x00},/*"*",42*/

{0x00,0x00,0x00,0xF0,0x00,0x00,0x00,0x00},
{0x01,0x01,0x01,0x1F,0x01,0x01,0x01,0x00},/*"+",43*/

{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x80,0xB0,0x70,0x00,0x00,0x00,0x00,0x00},/*",",44*/

{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x01,0x01,0x01,0x01,0x01,0x01,0x01},/*"-",45*/

{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x30,0x30,0x00,0x00,0x00,0x00,0x00},/*".",46*/

{0x00,0x00,0x00,0x00,0x80,0x60,0x18,0x04},
{0x00,0x60,0x18,0x06,0x01,0x00,0x00,0x00},/*"/",47*/

{0x00,0xE0,0x10,0x08,0x08,0x10,0xE0,0x00},
{0x00,0x0F,0x10,0x20,0x20,0x10,0x0F,0x00},/*"0",48*/

{0x00,0x10,0x10,0xF8,0x00,0x00,0x00,0x00},
{0x00,0x20,0x20,0x3F,0x20,0x20,0x00,0x00},/*"1",49*/

{0x00,0x70,0x08,0x08,0x08,0x88,0x70,0x00},
{0x00,0x30,0x28,0x24,0x22,0x21,0x30,0x00},/*"2",50*/

{0x00,0x30,0x08,0x88,0x88,0x48,0x30,0x00},
{0x00,0x18,0x20,0x20,0x20,0x11,0x0E,0x00},/*"3",51*/

{0x00,0x00,0xC0,0x20,0x10,0xF8,0x00,0x00},
{0x00,0x07,0x04,0x24,0x24,0x3F,0x24,0x00},/*"4",52*/

{0x00,0xF8,0x08,0x88,0x88,0x08,0x08,0x00},
{0x00,0x19,0x21,0x20,0x20,0x11,0x0E,0x00},/*"5",53*/

{0x00,0xE0,0x10,0x88,0x88,0x18,0x00,0x00},
{0x00,0x0F,0x11,0x20,0x20,0x11,0x0E,0x00},/*"6",54*/

{0x00,0x38,0x08,0x08,0xC8,0x38,0x08,0x00},
{0x00,0x00,0x00,0x3F,0x00,0x00,0x00,0x00},/*"7",55*/

{0x00,0x70,0x88,0x08,0x08,0x88,0x70,0x00},
{0x00,0x1C,0x22,0x21,0x21,0x22,0x1C,0x00},/*"8",56*/

{0x00,0xE0,0x10,0x08,0x08,0x10,0xE0,0x00},
{0x00,0x00,0x31,0x22,0x22,0x11,0x0F,0x00},/*"9",57*/

{0x00,0x00,0x00,0x60,0x60,0x00,0x00,0x00},
{0x00,0x00,0x00,0x18,0x18,0x00,0x00,0x00},/*":",58*/

{0x00,0x00,0x00,0x80,0x00,0x00,0x00,0x00},
{0x00,0x00,0x80,0x60,0x00,0x00,0x00,0x00},/*";",59*/

{0x00,0x00,0x80,0x40,0x20,0x10,0x08,0x00},
{0x00,0x01,0x02,0x04,0x08,0x10,0x20,0x00},/*"<",60*/

{0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x00},
{0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x00},/*"=",61*/

{0x00,0x08,0x10,0x20,0x40,0x80,0x00,0x00},
{0x00,0x20,0x10,0x08,0x04,0x02,0x01,0x00},/*">",62*/

{0x00,0x70,0x48,0x08,0x08,0x08,0xF0,0x00},
{0x00,0x00,0x00,0x30,0x36,0x01,0x00,0x00},/*"?",63*/

{0xC0,0x30,0xC8,0x28,0xE8,0x10,0xE0,0x00},
{0x07,0x18,0x27,0x24,0x23,0x14,0x0B,0x00},/*"@",64*/

{0x00,0x00,0xC0,0x38,0xE0,0x00,0x00,0x00},
{0x20,0x3C,0x23,0x02,0x02,0x27,0x38,0x20},/*"A",65*/

{0x08,0xF8,0x88,0x88,0x88,0x70,0x00,0x00},
{0x20,0x3F,0x20,0x20,0x20,0x11,0x0E,0x00},/*"B",66*/

{0xC0,0x30,0x08,0x08,0x08,0x08,0x38,0x00},
{0x07,0x18,0x20,0x20,0x20,0x10,0x08,0x00},/*"C",67*/

{0x08,0xF8,0x08,0x08,0x08,0x10,0xE0,0x00},
{0x20,0x3F,0x20,0x20,0x20,0x10,0x0F,0x00},/*"D",68*/

{0x08,0xF8,0x88,0x88,0xE8,0x08,0x10,0x00},
{0x20,0x3F,0x20,0x20,0x23,0x20,0x18,0x00},/*"E",69*/

{0x08,0xF8,0x88,0x88,0xE8,0x08,0x10,0x00},
{0x20,0x3F,0x20,0x00,0x03,0x00,0x00,0x00},/*"F",70*/

{0xC0,0x30,0x08,0x08,0x08,0x38,0x00,0x00},
{0x07,0x18,0x20,0x20,0x22,0x1E,0x02,0x00},/*"G",71*/

{0x08,0xF8,0x08,0x00,0x00,0x08,0xF8,0x08},
{0x20,0x3F,0x21,0x01,0x01,0x21,0x3F,0x20},/*"H",72*/

{0x00,0x08,0x08,0xF8,0x08,0x08,0x00,0x00},
{0x00,0x20,0x20,0x3F,0x20,0x20,0x00,0x00},/*"I",73*/

{0x00,0x00,0x08,0x08,0xF8,0x08,0x08,0x00},
{0xC0,0x80,0x80,0x80,0x7F,0x00,0x00,0x00},/*"J",74*/

{0x08,0xF8,0x88,0xC0,0x28,0x18,0x08,0x00},
{0x20,0x3F,0x20,0x01,0x26,0x38,0x20,0x00},/*"K",75*/

{0x08,0xF8,0x08,0x00,0x00,0x00,0x00,0x00},
{0x20,0x3F,0x20,0x20,0x20,0x20,0x30,0x00},/*"L",76*/

{0x08,0xF8,0xF8,0x00,0xF8,0xF8,0x08,0x00},
{0x20,0x3F,0x00,0x3F,0x00,0x3F,0x20,0x00},/*"M",77*/

{0x08,0xF8,0x30,0xC0,0x00,0x08,0xF8,0x08},
{0x20,0x3F,0x20,0x00,0x07,0x18,0x3F,0x00},/*"N",78*/

{0xE0,0x10,0x08,0x08,0x08,0x10,0xE0,0x00},
{0x0F,0x10,0x20,0x20,0x20,0x10,0x0F,0x00},/*"O",79*/

{0x08,0xF8,0x08,0x08,0x08,0x08,0xF0,0x00},
{0x20,0x3F,0x21,0x01,0x01,0x01,0x00,0x00},/*"P",80*/

{0xE0,0x10,0x08,0x08,0x08,0x10,0xE0,0x00},
{0x0F,0x18,0x24,0x24,0x38,0x50,0x4F,0x00},/*"Q",81*/

{0x08,0xF8,0x88,0x88,0x88,0x88,0x70,0x00},
{0x20,0x3F,0x20,0x00,0x03,0x0C,0x30,0x20},/*"R",82*/

{0x00,0x70,0x88,0x08,0x08,0x08,0x38,0x00},
{0x00,0x38,0x20,0x21,0x21,0x22,0x1C,0x00},/*"S",83*/

{0x18,0x08,0x08,0xF8,0x08,0x08,0x18,0x00},
{0x00,0x00,0x20,0x3F,0x20,0x00,0x00,0x00},/*"T",84*/

{0x08,0xF8,0x08,0x00,0x00,0x08,0xF8,0x08},
{0x00,0x1F,0x20,0x20,0x20,0x20,0x1F,0x00},/*"U",85*/

{0x08,0x78,0x88,0x00,0x00,0xC8,0x38,0x08},
{0x00,0x00,0x07,0x38,0x0E,0x01,0x00,0x00},/*"V",86*/

{0xF8,0x08,0x00,0xF8,0x00,0x08,0xF8,0x00},
{0x03,0x3C,0x07,0x00,0x07,0x3C,0x03,0x00},/*"W",87*/

{0x08,0x18,0x68,0x80,0x80,0x68,0x18,0x08},
{0x20,0x30,0x2C,0x03,0x03,0x2C,0x30,0x20},/*"X",88*/

{0x08,0x38,0xC8,0x00,0xC8,0x38,0x08,0x00},
{0x00,0x00,0x20,0x3F,0x20,0x00,0x00,0x00},/*"Y",89*/

{0x10,0x08,0x08,0x08,0xC8,0x38,0x08,0x00},
{0x20,0x38,0x26,0x21,0x20,0x20,0x18,0x00},/*"Z",90*/

{0x00,0x00,0x00,0xFE,0x02,0x02,0x02,0x00},
{0x00,0x00,0x00,0x7F,0x40,0x40,0x40,0x00},/*"[",91*/

{0x00,0x0C,0x30,0xC0,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x01,0x06,0x38,0xC0,0x00},/*"\",92*/

{0x00,0x02,0x02,0x02,0xFE,0x00,0x00,0x00},
{0x00,0x40,0x40,0x40,0x7F,0x00,0x00,0x00},/*"]",93*/

{0x00,0x00,0x04,0x02,0x02,0x02,0x04,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"^",94*/

{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80},/*"_",95*/

{0x00,0x02,0x02,0x04,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"`",96*/

{0x00,0x00,0x80,0x80,0x80,0x80,0x00,0x00},
{0x00,0x19,0x24,0x22,0x22,0x22,0x3F,0x20},/*"a",97*/

{0x08,0xF8,0x00,0x80,0x80,0x00,0x00,0x00},
{0x00,0x3F,0x11,0x20,0x20,0x11,0x0E,0x00},/*"b",98*/

{0x00,0x00,0x00,0x80,0x80,0x80,0x00,0x00},
{0x00,0x0E,0x11,0x20,0x20,0x20,0x11,0x00},/*"c",99*/

{0x00,0x00,0x00,0x80,0x80,0x88,0xF8,0x00},
{0x00,0x0E,0x11,0x20,0x20,0x10,0x3F,0x20},/*"d",100*/

{0x00,0x00,0x80,0x80,0x80,0x80,0x00,0x00},
{0x00,0x1F,0x22,0x22,0x22,0x22,0x13,0x00},/*"e",101*/

{0x00,0x80,0x80,0xF0,0x88,0x88,0x88,0x18},
{0x00,0x20,0x20,0x3F,0x20,0x20,0x00,0x00},/*"f",102*/

{0x00,0x00,0x80,0x80,0x80,0x80,0x80,0x00},
{0x00,0x6B,0x94,0x94,0x94,0x93,0x60,0x00},/*"g",103*/

{0x08,0xF8,0x00,0x80,0x80,0x80,0x00,0x00},
{0x20,0x3F,0x21,0x00,0x00,0x20,0x3F,0x20},/*"h",104*/

{0x00,0x80,0x98,0x98,0x00,0x00,0x00,0x00},
{0x00,0x20,0x20,0x3F,0x20,0x20,0x00,0x00},/*"i",105*/

{0x00,0x00,0x00,0x80,0x98,0x98,0x00,0x00},
{0x00,0xC0,0x80,0x80,0x80,0x7F,0x00,0x00},/*"j",106*/

{0x08,0xF8,0x00,0x00,0x80,0x80,0x80,0x00},
{0x20,0x3F,0x24,0x02,0x2D,0x30,0x20,0x00},/*"k",107*/

{0x00,0x08,0x08,0xF8,0x00,0x00,0x00,0x00},
{0x00,0x20,0x20,0x3F,0x20,0x20,0x00,0x00},/*"l",108*/

{0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x00},
{0x20,0x3F,0x20,0x00,0x3F,0x20,0x00,0x3F},/*"m",109*/

{0x80,0x80,0x00,0x80,0x80,0x80,0x00,0x00},
{0x20,0x3F,0x21,0x00,0x00,0x20,0x3F,0x20},/*"n",110*/

{0x00,0x00,0x80,0x80,0x80,0x80,0x00,0x00},
{0x00,0x1F,0x20,0x20,0x20,0x20,0x1F,0x00},/*"o",111*/

{0x80,0x80,0x00,0x80,0x80,0x00,0x00,0x00},
{0x80,0xFF,0xA1,0x20,0x20,0x11,0x0E,0x00},/*"p",112*/

{0x00,0x00,0x00,0x80,0x80,0x80,0x80,0x00},
{0x00,0x0E,0x11,0x20,0x20,0xA0,0xFF,0x80},/*"q",113*/

{0x80,0x80,0x80,0x00,0x80,0x80,0x80,0x00},
{0x20,0x20,0x3F,0x21,0x20,0x00,0x01,0x00},/*"r",114*/

{0x00,0x00,0x80,0x80,0x80,0x80,0x80,0x00},
{0x00,0x33,0x24,0x24,0x24,0x24,0x19,0x00},/*"s",115*/

{0x00,0x80,0x80,0xE0,0x80,0x80,0x00,0x00},
{0x00,0x00,0x00,0x1F,0x20,0x20,0x00,0x00},/*"t",116*/

{0x80,0x80,0x00,0x00,0x00,0x80,0x80,0x00},
{0x00,0x1F,0x20,0x20,0x20,0x10,0x3F,0x20},/*"u",117*/

{0x80,0x80,0x80,0x00,0x00,0x80,0x80,0x80},
{0x00,0x01,0x0E,0x30,0x08,0x06,0x01,0x00},/*"v",118*/

{0x80,0x80,0x00,0x80,0x00,0x80,0x80,0x80},
{0x0F,0x30,0x0C,0x03,0x0C,0x30,0x0F,0x00},/*"w",119*/

{0x00,0x80,0x80,0x00,0x80,0x80,0x80,0x00},
{0x00,0x20,0x31,0x2E,0x0E,0x31,0x20,0x00},/*"x",120*/

{0x80,0x80,0x80,0x00,0x00,0x80,0x80,0x80},
{0x80,0x81,0x8E,0x70,0x18,0x06,0x01,0x00},/*"y",121*/

{0x00,0x80,0x80,0x80,0x80,0x80,0x80,0x00},
{0x00,0x21,0x30,0x2C,0x22,0x21,0x30,0x00},/*"z",122*/

{0x00,0x00,0x00,0x00,0x80,0x7C,0x02,0x02},
{0x00,0x00,0x00,0x00,0x00,0x3F,0x40,0x40},/*"{",123*/

{0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00},/*"|",124*/

{0x00,0x02,0x02,0x7C,0x80,0x00,0x00,0x00},
{0x00,0x40,0x40,0x3F,0x00,0x00,0x00,0x00},/*"}",125*/

{0x00,0x06,0x01,0x01,0x02,0x02,0x04,0x04},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00} /*"~",126*/

};








/******************************************************************************/
/* Logo?? 64x32 ??                                                        */
/******************************************************************************/
unsigned char const Logo[]={
/*--  ???????:C:\Documents and Settings\Administrator\??\?????3.bmp  --*/
/*--  ??x??=64x31  --*/
/*--  ????8???,????:??x??=64x32  --*/
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0xC0,0xE0,0xE0,0x70,0x70,
0x38,0x38,0x18,0x1C,0x1C,0x1C,0x1C,0x0C,0x0C,0x0E,0x0E,0xCE,0xCE,0xEE,0xFE,0xFE,
0xFE,0xFE,0x7E,0x3E,0x3E,0x1E,0x1E,0x9E,0x9E,0x86,0x80,0xC0,0xC0,0xC0,0xC0,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0xF0,0xF0,0xF0,0xF0,0xF0,
0x00,0x00,0x00,0x00,0xE0,0xF0,0xFC,0x1E,0x0F,0x07,0x03,0x01,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0xC0,0xE0,0x78,0x9C,0xFE,0xFF,0xFF,0xFF,0xFF,0x3F,0x1E,
0x0F,0x0F,0x0F,0xCF,0xEF,0xF7,0xFF,0xFF,0x7F,0x1F,0x0F,0x03,0x01,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x80,0xE0,0xF0,0xFC,0x7F,0x3F,0x0F,0x07,0x01,0x00,
0x00,0x00,0x00,0x00,0x0F,0x1F,0x3F,0x70,0x70,0x70,0x70,0x70,0x70,0x70,0x70,0x38,
0x38,0x00,0x00,0x80,0xC0,0xE0,0xF0,0xFF,0x7F,0x3F,0x1F,0x0F,0x07,0x03,0x80,0xE0,
0xF8,0xFE,0xFF,0xFF,0xFB,0xFF,0xFF,0xE3,0x80,0x00,0x00,0x00,0x00,0x80,0xC0,0xC0,
0xE0,0x70,0x38,0x1C,0x0E,0x07,0x07,0x03,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x13,0x37,0x3E,0x3E,0x3C,0x7C,0x7C,0x7C,0x7C,0x3C,0x3C,0x3C,0x3C,0x3C,0x1C,0x1E,
0x1E,0x0F,0x0F,0x07,0x07,0x03,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0x7F,
0x7F,0x7F,0x7F,0x7F,0x3F,0x3F,0x3F,0x1F,0x1F,0x0F,0x0E,0x07,0x07,0x03,0x01,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
};







/******************************************************************************/
/* 6x8图标                                                               */
/******************************************************************************/
unsigned char const YE[]={0x7F,0x7F,0x7F,0x7F,0x7F,0x7F};

unsigned char const NO_f[]={0x7F,0x41,0x41,0x41,0x41,0x41};

unsigned char const NO_m[]={0x41,0x41,0x41,0x41,0x41,0x41};

unsigned char const NO_b[]={0x41,0x41,0x41,0x41,0x41,0x7F};

unsigned char const Bar[]={0x00,0x00,0xFF,0xFF,0x00,0x00};/*"??"*/

unsigned char const bat_f[3][6]={
{0x3C,0x7E,0x42,0x42,0x42,0x42},/*"电池前半部分，空",0*/
{0x3C,0x7E,0x42,0x42,0x7E,0x7E},/*"电池前半部分，半",0*/
{0x3C,0x7E,0x7E,0x7E,0x7E,0x7E},/*"电池前半部分，满",0*/
};

unsigned char const bat_b[3][6]={
{0x42,0x42,0x42,0x42,0x7E,0x00},/*"电池后半部分，空",0*/
{0x42,0x42,0x7E,0x7E,0x7E,0x00},/*"电池后半部分，半",0*/
{0x7E,0x7E,0x7E,0x7E,0x7E,0x00},/*"电池后半部分，满",0*/
};






/******************************************************************************/
/* 8x16??                                                                   */
/******************************************************************************/

//uchar code YE[]={
///*--  ??:  O  --*/
///*--  @??12;  ??????????:?x?=9x16   --*/
//0xFF,0x01,0xFD,0xFD,0xFD,0xFD,0xFD,0x01,0xFF,0xFF,0x80,0xBF,0xBF,0xBF,0xBF,0xBF,
//0x80,0xFF
//};
//
//uchar code NO[]={
///*--  ??:  O  --*/
///*--  @??12;  ??????????:?x?=9x16   --*/
//0xFF,0x07,0x19,0x61,0x81,0x61,0x19,0x07,0xFF,0xFF,0xE0,0x98,0x86,0x81,0x86,0x98,
//0xE0,0xFF
//};


//uchar code battery1[]={  //??,??
///*--  ??:  O  --*/
///*--  @??12;  ??????????:?x?=9x16   --*/
//0xFF,0x01,0xFD,0xFD,0xFD,0xFD,0xFD,0xFD,0xFD,
//0x7F,0x40,0x5F,0x5F,0x5F,0x5F,0x5F,0x5F,0x5F
//};
//
//uchar code battery2[]={  //??,??
///*--  ??:  O  --*/
///*--  @??12;  ??????????:?x?=9x16   --*/
//0xFD,0xFD,0xFD,0xFD,0xFD,0xFD,0xFD,0xFD,0xFD,
//0x5F,0x5F,0x5F,0x5F,0x5F,0x5F,0x5F,0x5F,0x5F
//};
//
//uchar code battery3[]={  //??,??
///*--  ??:  O  --*/
///*--  @??12;  ??????????:?x?=9x16   --*/
//0xFD,0xFD,0xFD,0xFD,0xFD,0x01,0xFF,0xe0,0xe0,
//0x5F,0x5F,0x5F,0x5F,0x5F,0x40,0x7F,0x03,0x03
//};











/******************************************************************************/
/* 32x32??                                                                  */
/******************************************************************************/

 unsigned char  SETICO[12][128]={
/*--  ???????:D:\08.??\32X32??\music4.ico  --*/
/*--  ??x??=32x32  --*/
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0xC0,0xC0,0xC0,0xE0,
0xE0,0xE0,0xF0,0xF0,0xF0,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0x7F,0x1F,0x1F,
0x1F,0x0F,0x0F,0x0F,0x0F,0x07,0x07,0x07,0x07,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0xC0,0xC0,0xE0,0xE0,0xE0,0xE0,0xE0,0xFF,0xFF,0x00,0x00,0x00,
0x00,0xF0,0xF8,0xFC,0xFC,0xFC,0xFC,0xFC,0xFC,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x0F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x0F,0x07,0x00,0x00,0x00,
0x00,0x01,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x01,0x00,0x00,0x00,0x00,0x00,0x00,


/*--  ???????:C:\Documents and Settings\Administrator\??\@.ico  --*/
/*--  ??x??=32x32  --*/
0x00,0x00,0x80,0xC0,0xE0,0xF0,0xF8,0x78,0x3C,0x3C,0x1E,0x1E,0x0E,0x0E,0x8F,0x8F,
0x8F,0x8F,0x8F,0x0F,0x0F,0x0E,0x0E,0x1E,0x1E,0x3C,0x7C,0xF8,0xF0,0xE0,0xC0,0x00,
0xF8,0xFF,0xFF,0x7F,0x07,0x01,0x00,0x00,0xE0,0xF8,0xFC,0xFE,0x7F,0x1F,0x0F,0x07,
0x03,0x03,0x07,0xCF,0xFE,0xFF,0xFF,0x7F,0x0F,0x00,0x00,0x00,0x03,0xFF,0xFF,0xFF,
0x3F,0xFF,0xFF,0xF8,0xC0,0x80,0x00,0x00,0x1F,0x7F,0xFF,0xFF,0xF8,0xE0,0xE0,0xE0,
0xF0,0x78,0x7E,0x7F,0xFF,0xFF,0xF7,0xE0,0xE0,0xF0,0xF8,0x7C,0x3F,0x1F,0x0F,0x03,
0x00,0x00,0x03,0x07,0x0F,0x1F,0x1E,0x3E,0x3C,0x78,0x78,0x70,0xF0,0xF0,0xF0,0xF0,
0xF0,0xF0,0xF0,0xF0,0x70,0x70,0x78,0x78,0x38,0x3C,0x1E,0x1E,0x0E,0x0C,0x00,0x00,


/*--  ???????:D:\08.??\32X32??\reddit.ico  --*/
/*--  ??x??=32x32  --*/
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0xC0,0xF8,0x38,0x18,0x18,0x18,0x30,0x30,0xF8,0xFC,0x8C,0x8C,0xFC,0xF8,0x00,0x00,
0xE0,0xF0,0x30,0xF0,0xF0,0x70,0x70,0x30,0x18,0x18,0x1C,0x0C,0x0C,0x0C,0x0C,0x0E,
0x0F,0x0F,0x0C,0x0C,0x0C,0x18,0x18,0x18,0x30,0x71,0x71,0xF1,0xF1,0x30,0xF0,0xE0,
0x03,0x3F,0xFF,0xE3,0x81,0x00,0x00,0x00,0x00,0x0F,0x9F,0x9F,0x8F,0x06,0x00,0x00,
0x00,0x00,0x06,0x8F,0x9F,0x9F,0x0F,0x00,0x00,0x00,0x00,0x81,0xE3,0xFF,0x3F,0x03,
0x00,0x00,0x00,0x01,0x03,0x07,0x0E,0x0C,0x1C,0x18,0x19,0x19,0x33,0x33,0x33,0x33,
0x33,0x33,0x33,0x33,0x19,0x19,0x18,0x1C,0x0C,0x0E,0x07,0x03,0x01,0x00,0x00,0x00,


/*--  ???????:C:\Documents and Settings\Administrator\??\googleplus.ico  --*/
/*--  ??x??=32x32  --*/
0x00,0x00,0xC0,0xE0,0xF0,0xF8,0x38,0x18,0x18,0x18,0x38,0xF8,0xF8,0xF8,0xF8,0xD8,
0x18,0x08,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xF8,0xF8,0x00,0x00,0x00,0x00,0x00,
0x00,0x02,0x1F,0x3F,0x7F,0xFE,0xF0,0xE0,0xC0,0xC0,0xC0,0xE0,0xFF,0x7F,0x3F,0x1F,
0x00,0x00,0x00,0x00,0x03,0x03,0x03,0x03,0x03,0x7F,0x7F,0x03,0x03,0x03,0x03,0x03,
0x80,0xC0,0xE0,0xF0,0x70,0x38,0x38,0x18,0x1F,0x1F,0x1F,0x1F,0x3F,0x7C,0xF8,0xF8,
0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x0F,0x1F,0x3F,0x3F,0x78,0x70,0x70,0x70,0x60,0x70,0x70,0x70,0x70,0x38,0x3F,0x1F,
0x0F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,


/*--  ???????:D:\08.??\32X32??\yahoo.ico  --*/
/*--  ??x??=32x32  --*/
0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x01,0x01,0x01,0x01,0x01,0x03,0x0F,0x1F,0x3F,0x7F,0xFF,0xFD,0xF9,0xF1,0xC1,0x80,
0x80,0xC2,0xE6,0xF6,0xFE,0x7E,0x3E,0x1E,0x1E,0x0E,0x06,0xE6,0xE6,0xE6,0xE0,0xE0,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x83,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0x03,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xBF,0xBF,0xBF,0x1F,0x01,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,
0x03,0x03,0x03,0x03,0x03,0x03,0x00,0x00,0x00,0x00,0x00,0x03,0x03,0x03,0x00,0x00,


/*--  ???????:C:\Documents and Settings\Administrator\??\f18a.ico  --*/
/*--  ??x??=32x32  --*/
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x80,0x80,0x00,
0x00,0x00,0x00,0x00,0x30,0x30,0x30,0x30,0x30,0x60,0xE0,0xC0,0x80,0x00,0x00,0x00,
0x00,0x00,0x00,0xC0,0xE0,0xF0,0xF8,0x7C,0x7E,0x3E,0x3F,0x3F,0x3F,0x3F,0x3F,0x3F,
0x30,0x38,0x78,0xF8,0xF8,0xF3,0xE3,0x07,0x3E,0x3C,0x00,0x01,0xFF,0x7F,0x00,0x00,
0x00,0x3C,0x7F,0xFF,0xE3,0xC1,0x80,0x38,0x7C,0x46,0xC6,0xCF,0xFF,0xF3,0x7F,0x7E,
0x3C,0x00,0x80,0x80,0xC1,0xE3,0xFF,0xFF,0xFF,0x7F,0x1E,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x01,0x01,0x03,0x03,0x07,0x07,0x06,0x0E,0x0E,0x0E,0x0E,0x0E,0x0E,
0x0E,0x0F,0x07,0x07,0x07,0x03,0x03,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,


/*--  ???????:C:\Documents and Settings\Administrator\??\太极阴阳.bmp  --*/
/*--  ??x??=32x32  --*/
0x00,0x00,0x00,0x00,0x00,0x80,0xC0,0xE0,0xE0,0xF0,0xF0,0xF8,0xF8,0xF8,0xFC,0x7C,
0x7C,0xFC,0xF8,0xF8,0xF8,0xB0,0x70,0x60,0xE0,0xC0,0x80,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0xC0,0xF8,0xFE,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFC,0xF8,
0xF8,0xFC,0xFF,0xFF,0x7F,0x3F,0x0E,0x00,0x00,0x01,0x07,0x3E,0xF8,0xC0,0x00,0x00,
0x00,0x00,0x03,0x1F,0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,0x9F,0x07,0x03,0x01,0x61,0xF1,
0xF0,0x60,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xC0,0xE0,0x7E,0x1F,0x03,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x01,0x03,0x07,0x07,0x0F,0x0F,0x1E,0x1C,0x18,0x38,0x30,
0x30,0x30,0x18,0x18,0x18,0x0C,0x0E,0x06,0x07,0x03,0x01,0x00,0x00,0x00,0x00,0x00,


/*--  ???????:D:\08.??\32X32??\happy.ico  --*/
/*--  ??x??=32x32  --*/
0x00,0x00,0x00,0x00,0x00,0x80,0xC0,0xE0,0xE0,0xF0,0xF0,0x78,0x38,0x38,0x38,0x38,
0x38,0x38,0x38,0x38,0x78,0xF0,0xF0,0xE0,0xE0,0xC0,0x80,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0xF8,0xFE,0xFF,0x0F,0x07,0x01,0x00,0xF0,0xF0,0xF0,0xF0,0x00,0x00,
0x00,0x00,0xF0,0xF0,0xF0,0xF0,0x00,0x01,0x07,0x0F,0xFF,0xFE,0xF8,0x00,0x00,0x00,
0x00,0x00,0x00,0x1F,0x7F,0xFF,0xF0,0xE0,0x88,0x18,0x38,0x30,0x70,0x60,0x60,0x60,
0x60,0x60,0x60,0x70,0x30,0x38,0x18,0x88,0xE0,0xF0,0xFF,0x7F,0x1F,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x01,0x03,0x07,0x07,0x0F,0x0F,0x1E,0x1C,0x1C,0x1C,0x1C,
0x1C,0x1C,0x1C,0x1C,0x1E,0x0F,0x0F,0x07,0x07,0x03,0x01,0x00,0x00,0x00,0x00,0x00,


/*--  ??:  执  --*/
/*--  ??24;  ??????????:?x?=32x33   --*/
/*--  ??:  ?  --*/
/*--  ??????22;  ??????????:?x?=30x33   --*/
0x00,0x00,0x00,0x00,0x00,0x00,0x7F,0x7F,0x3F,0x20,0x01,0x01,0x00,0x00,0x00,0x3F,
0x3F,0x3F,0x10,0x00,0x00,0x01,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,
0x80,0x81,0x81,0x81,0xFF,0xFF,0xFF,0x86,0xC4,0xCD,0xC9,0x41,0x41,0xFF,0xFF,0xFF,
0x40,0x40,0xFF,0xFF,0xFF,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0xC0,0xC0,0xC0,
0x80,0x80,0xFF,0xFF,0xFF,0x00,0x00,0x01,0x07,0x9F,0xFE,0xF8,0xE0,0x70,0x78,0x38,
0xF8,0xFE,0xFF,0x0F,0x01,0x03,0x1F,0x1F,0x00,0x00,0x00,0x00,0x40,0x40,0x60,0x70,
0xF0,0xF0,0xD0,0x30,0xE0,0xC0,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x80,0xC0,0xC0,0xE0,0xE0,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,







};
 





unsigned char SETCH33X29[4][116]={
//	设置宋体小二常规，	参数中的其他选项为纵向取模，字节倒序，保留，任何时候都加零
//**		

/*--  执--*/
/*--  宋体22;  ??????????:?x?=29x29   --*/
/*--  ????8???,????:??x??=32x29  --*/
0x00,0x00,0x00,0x00,0x00,0x00,0xFE,0xFE,0xFC,0x04,0x80,0x80,0x00,0x00,0x00,0xFC,
0xFC,0xFC,0x08,0x00,0x00,0x80,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,
0x81,0x81,0x81,0xFF,0xFF,0xFF,0x61,0x23,0xB3,0x93,0x82,0x82,0xFF,0xFF,0xFF,0x02,
0x02,0xFF,0xFF,0xFF,0x03,0x00,0x00,0x00,0x00,0x00,0x01,0x03,0x03,0x03,0x01,0x01,
0xFF,0xFF,0xFF,0x00,0x00,0x80,0xE0,0xF9,0x7F,0x1F,0x07,0x0E,0x1E,0x1C,0x1F,0x7F,
0xFF,0xF0,0x80,0xC0,0xF8,0xF8,0x00,0x00,0x00,0x02,0x02,0x06,0x0E,0x0F,0x0F,0x0B,
0x0C,0x07,0x03,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x03,0x03,
0x07,0x07,0x07,0x00,
/*--  念 --*/
/*--  ??22;  ??????????:?x?=29x29   --*/
/*--  ????8???,????:??x??=29x32  --*/
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0xC0,0xE0,0xF8,0xFC,0xBE,0x1E,0x3C,
0x70,0xE0,0xC0,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x20,0x20,0x30,
0x18,0x18,0x0C,0x26,0x27,0x23,0x21,0x21,0x20,0x21,0x27,0x2F,0x2F,0x24,0xE0,0xF1,
0xF1,0x73,0x27,0x06,0x0E,0x0E,0x0C,0x0C,0x04,0x00,0x00,0x00,0x80,0xC0,0xF0,0xF8,
0x78,0x00,0xFC,0xFC,0xFC,0x0B,0x0F,0x3E,0x3C,0x1E,0x07,0x07,0x03,0xE0,0xE0,0x88,
0x38,0xF8,0xF0,0xE0,0xC0,0x00,0x00,0x00,0x00,0x01,0x01,0x01,0x01,0x00,0x00,0x07,
0x07,0x07,0x06,0x04,0x04,0x04,0x04,0x04,0x04,0x06,0x07,0x07,0x07,0x02,0x00,0x01,
0x01,0x00,0x00,0x00,
/*--  执--*/
/*--  宋体22;  ??????????:?x?=29x29   --*/
/*--  ????8???,????:??x??=32x29  --*/
0x00,0x00,0x00,0x00,0x00,0x00,0xFE,0xFE,0xFC,0x04,0x80,0x80,0x00,0x00,0x00,0xFC,
0xFC,0xFC,0x08,0x00,0x00,0x80,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,
0x81,0x81,0x81,0xFF,0xFF,0xFF,0x61,0x23,0xB3,0x93,0x82,0x82,0xFF,0xFF,0xFF,0x02,
0x02,0xFF,0xFF,0xFF,0x03,0x00,0x00,0x00,0x00,0x00,0x01,0x03,0x03,0x03,0x01,0x01,
0xFF,0xFF,0xFF,0x00,0x00,0x80,0xE0,0xF9,0x7F,0x1F,0x07,0x0E,0x1E,0x1C,0x1F,0x7F,
0xFF,0xF0,0x80,0xC0,0xF8,0xF8,0x00,0x00,0x00,0x02,0x02,0x06,0x0E,0x0F,0x0F,0x0B,
0x0C,0x07,0x03,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x03,0x03,
0x07,0x07,0x07,0x00,
/*--  战 --*/
/*--  ??22;  ??????????:?x?=29x29   --*/
/*--  ????8???,????:??x??=29x32  --*/
0x00,0x00,0x00,0x00,0x00,0x00,0xFC,0xFC,0xFC,0x08,0x00,0x00,0x80,0x80,0x80,0x00,
0xFE,0xFE,0xFC,0x04,0x08,0x18,0x70,0xF0,0xF0,0x60,0x00,0x00,0x00,0x00,0x00,0xC0,
0xC0,0x80,0x80,0xFF,0xFF,0xFF,0x81,0x81,0xC9,0xC9,0xC9,0x89,0x0D,0x0F,0xFF,0xFF,
0xF4,0x04,0x04,0xC4,0xF6,0xF7,0x63,0x66,0x04,0x00,0x00,0x00,0xFF,0xFF,0xFF,0x80,
0x80,0x80,0x80,0x80,0x80,0xFF,0xFF,0xFF,0x00,0x00,0x80,0xC3,0xFF,0x7F,0xFC,0xFF,
0xCF,0x07,0x01,0xF0,0xF0,0x00,0x00,0x00,0x00,0x07,0x03,0x03,0x00,0x00,0x00,0x00,
0x00,0x08,0x0B,0x0F,0x07,0x06,0x03,0x01,0x01,0x00,0x00,0x00,0x01,0x03,0x07,0x07,
0x0F,0x0F,0x08,0x00,



};


#endif
