
/* ==== FUN_004322c0 @ 004322c0 ==== 
 * signature: int __cdecl FUN_004322c0(short param_1, short * param_2, short * param_3)
 * body: 004322c0-004322f0
 */

int __cdecl FUN_004322c0(short param_1,short *param_2,short *param_3)

{
  int iVar1;
  
  if (param_1 != 3) {
    return 0x10000;
  }
  iVar1 = FUN_00431f00(param_2,param_2 + 0x16,param_2 + 0x2c,(char *)0x0,param_3,'\0','\0');
  return iVar1;
}


