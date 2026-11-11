
/* ==== FUN_11023370 @ 11023370 ==== 
 * signature: bool __cdecl FUN_11023370(undefined4 * param_1, int param_2)
 * body: 11023370-110233b8
 */

bool __cdecl FUN_11023370(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)((int)param_1 + 0x1a);
  iVar2 = *(int *)(iVar1 + 0xc);
  if (iVar2 == 0x514) {
    FUN_110233c0(param_1,param_2,(short *)(iVar1 + 0x24));
    return false;
  }
  if (iVar2 == 0x4b0) {
    FUN_110234e0(param_1,param_2,(short *)(iVar1 + 0x24));
  }
  return iVar2 != 0x4b0;
}


