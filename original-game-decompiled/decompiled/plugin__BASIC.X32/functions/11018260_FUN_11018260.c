
/* ==== FUN_11018260 @ 11018260 ==== 
 * signature: bool __cdecl FUN_11018260(undefined4 * param_1, int param_2)
 * body: 11018260-110182a8
 */

bool __cdecl FUN_11018260(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)((int)param_1 + 0x1a);
  iVar2 = *(int *)(iVar1 + 0xc);
  if (iVar2 == 0x514) {
    FUN_11018440(param_1,param_2,(short *)(iVar1 + 0x24));
    return false;
  }
  if (iVar2 == 0x4b0) {
    FUN_110183f0(param_1,param_2,(short *)(iVar1 + 0x24));
  }
  return iVar2 != 0x4b0;
}


