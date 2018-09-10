/*
 * asm_prototype.h
 *
 *  Created on: Sep 9, 2018
 *      Author: zzr
 */

#ifndef ASM_PROTOTYPE_H_
#define ASM_PROTOTYPE_H_

#include <stdint.h>
#include <stdbool.h>

typedef union union_pack32
{
	uint32_t u32;
	int32_t i32;
	uint16_t u16[2];
	int16_t i16[2];
	uint8_t u8[4];
	int8_t i8[4];
}pack32;

//Absolute
uint32_t Ifx_Abs_B(uint32_t X);
uint32_t Ifx_Abs_H(uint32_t X);
int32_t Ifx_Abs(int32_t X);
uint32_t Ifx_Absdif_B(uint32_t A, uint32_t B);
uint32_t Ifx_Absdif_H(uint32_t A, uint32_t B);
int32_t Ifx_Absdif(int32_t A, int32_t B);
uint32_t Ifx_AbsS_H(int32_t X);
uint32_t Ifx_AbsdifS_H(uint32_t A, uint32_t B);
uint32_t Ifx_AbsdifS(uint32_t A, uint32_t B);
int32_t Ifx_AbsS(int32_t X);

//Addition
void* Ifx_AddA(void* pA, void* pB);
void* Ifx_AddA_4(void* pA);
void* Ifx_Addih_A(void* pA);
uint32_t Ifx_Add_B(uint32_t A, uint32_t B);
uint32_t Ifx_Add_H(uint32_t A, uint32_t B);
float Ifx_Add_F(float A, float B);
int32_t Ifx_Add(int32_t A, int32_t B);
int32_t Ifx_AddC(int32_t A, int32_t B);
int32_t Ifx_AddI(int32_t A);
int32_t Ifx_AddI_Hi(int32_t A);
int32_t Ifx_Addx(int32_t A, int32_t B);
int32_t Ifx_Addx_I(int32_t A);
int32_t Ifx_AddS(int32_t A, int32_t B);
uint32_t Ifx_AddS_U(uint32_t A, uint32_t B);
int32_t Ifx_AddS_H(int32_t A, int32_t B);
uint32_t Ifx_AddS_HU(uint32_t A, uint32_t B);
void* Ifx_Addsc_A(void* pA, uint32_t scalar);
void* Ifx_Addsc_AT(void* pA, uint32_t scalar);

// AND
uint32_t Ifx_And(uint32_t A, uint32_t B);
uint32_t Ifx_AndI(uint32_t A);
bool Ifx_And_T(uint32_t A, uint32_t B);
uint32_t Ifx_Andn(uint32_t A, uint32_t B);
uint32_t Ifx_AndnI(uint32_t A, uint32_t B);
bool Ifx_Andn_T(uint32_t A, uint32_t B);
uint32_t Ifx_And_EQ(uint32_t A, uint32_t B);
uint32_t Ifx_AndI_EQ(uint32_t A);
uint32_t Ifx_And_NE(uint32_t A, uint32_t B);
uint32_t Ifx_AndI_NE(uint32_t A);
uint32_t Ifx_And_GE(uint32_t A, uint32_t B);
uint32_t Ifx_AndI_GE(uint32_t A);
uint32_t Ifx_And_GE_U(uint32_t A, uint32_t B);
uint32_t Ifx_AndI_GE_U(uint32_t A);
uint32_t Ifx_And_LT(uint32_t A, uint32_t B);
uint32_t Ifx_AndI_LT(uint32_t A);
uint32_t Ifx_And_LT_U(uint32_t A, uint32_t B);
uint32_t Ifx_AndI_LT_U(uint32_t A);
uint32_t Ifx_AndAnd_T(uint32_t A, uint32_t B);
uint32_t Ifx_AndAndn_T(uint32_t A, uint32_t B);
uint32_t Ifx_AndNor_T(uint32_t A, uint32_t B);
uint32_t Ifx_AndOr_T(uint32_t A, uint32_t B);

#endif /* ASM_PROTOTYPE_H_ */