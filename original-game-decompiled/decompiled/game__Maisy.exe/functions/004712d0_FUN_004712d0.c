
/* ==== FUN_004712d0 @ 004712d0 ==== 
 * signature: undefined4 __cdecl FUN_004712d0(undefined4 param_1, int param_2, short * param_3)
 * body: 004712d0-0047130a
 */

undefined4 __cdecl FUN_004712d0(undefined4 param_1,int param_2,short *param_3)

{
  int iVar1;
  void *local_8;
  
  iVar1 = FUN_00471110(param_2,(int *)&local_8);
  if (iVar1 == 0x10000) {
    return 0x10000;
  }
  FUN_004087c0(local_8,param_3,'\x01');
  return 0;
}


