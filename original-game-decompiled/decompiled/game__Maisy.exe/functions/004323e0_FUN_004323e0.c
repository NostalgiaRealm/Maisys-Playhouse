
/* ==== FUN_004323e0 @ 004323e0 ==== 
 * signature: int __cdecl FUN_004323e0(short param_1, short * param_2, short * param_3)
 * body: 004323e0-00432411
 */

int __cdecl FUN_004323e0(short param_1,short *param_2,short *param_3)

{
  int iVar1;
  
  if (param_1 != 2) {
    return 0x10000;
  }
  iVar1 = FUN_00431f00(param_2,param_2 + 0x16,(short *)0x0,&DAT_004dacdc,param_3,'\x01','\0');
  return iVar1;
}


