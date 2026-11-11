
/* ==== FUN_11019d90 @ 11019d90 ==== 
 * signature: undefined4 __cdecl FUN_11019d90(int param_1, short * param_2, int * param_3)
 * body: 11019d90-11019dbf
 */

undefined4 __cdecl FUN_11019d90(int param_1,short *param_2,int *param_3)

{
  short sVar1;
  
  if (*param_2 < 1) {
    return CONCAT22((short)((uint)param_2 >> 0x10),0xfffd);
  }
  sVar1 = *param_2 + -1;
  *param_2 = sVar1;
  *param_3 = sVar1 * 0x30 + param_1;
  return param_1 & 0xffff0000;
}


