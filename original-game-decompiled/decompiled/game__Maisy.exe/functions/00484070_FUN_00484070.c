
/* ==== FUN_00484070 @ 00484070 ==== 
 * signature: undefined4 __cdecl FUN_00484070(undefined4 param_1, int param_2, int param_3)
 * body: 00484070-004840a5
 */

undefined4 __cdecl FUN_00484070(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0048b550(param_2);
  if (((*(byte *)(iVar1 + 0x1e) & 1) != 0) && (*(int *)(iVar1 + 4) != 0)) {
    uVar2 = FUN_004354b0(DAT_004dae3c,(void *)0x0,param_3);
    return uVar2;
  }
  return 0x10000;
}


