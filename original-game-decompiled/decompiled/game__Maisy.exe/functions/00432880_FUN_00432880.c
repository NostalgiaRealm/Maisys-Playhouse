
/* ==== FUN_00432880 @ 00432880 ==== 
 * signature: int __cdecl FUN_00432880(short param_1, short * param_2, short * param_3)
 * body: 00432880-004328a8
 */

int __cdecl FUN_00432880(short param_1,short *param_2,short *param_3)

{
  int iVar1;
  
  if (param_1 != 2) {
    return 0x10000;
  }
  iVar1 = FUN_004326a0(param_2,param_2 + 0x16,(short *)0x0,param_3);
  return iVar1;
}


