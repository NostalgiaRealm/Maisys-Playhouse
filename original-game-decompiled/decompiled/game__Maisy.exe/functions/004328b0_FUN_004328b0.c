
/* ==== FUN_004328b0 @ 004328b0 ==== 
 * signature: int __cdecl FUN_004328b0(short param_1, short * param_2, short * param_3)
 * body: 004328b0-004328da
 */

int __cdecl FUN_004328b0(short param_1,short *param_2,short *param_3)

{
  int iVar1;
  
  if (param_1 != 3) {
    return 0x10000;
  }
  iVar1 = FUN_004326a0(param_2,param_2 + 0x16,param_2 + 0x2c,param_3);
  return iVar1;
}


