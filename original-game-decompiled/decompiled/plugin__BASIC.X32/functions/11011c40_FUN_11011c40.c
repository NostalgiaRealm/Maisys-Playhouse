
/* ==== FUN_11011c40 @ 11011c40 ==== 
 * signature: bool __cdecl FUN_11011c40(undefined4 * param_1, int param_2)
 * body: 11011c40-11011c88
 */

bool __cdecl FUN_11011c40(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)((int)param_1 + 0x1a);
  iVar2 = *(int *)(iVar1 + 0xc);
  if (iVar2 == 0x514) {
    FUN_11011e00(param_1,param_2,(short *)(iVar1 + 0x24));
    return false;
  }
  if (iVar2 == 0x4b0) {
    FUN_11011db0(param_1,param_2,(short *)(iVar1 + 0x24));
  }
  return iVar2 != 0x4b0;
}


