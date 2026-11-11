
/* ==== FUN_0041efa0 @ 0041efa0 ==== 
 * signature: undefined4 __cdecl FUN_0041efa0(int param_1, int param_2)
 * body: 0041efa0-0041efd2
 */

undefined4 __cdecl FUN_0041efa0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)(param_2 * 0x18 + DAT_004da058 + 4);
  iVar2 = *(int *)(param_1 * 0x18 + DAT_004da058 + 4);
  if (iVar1 < iVar2) {
    return 1;
  }
  uVar3 = 0xffffffff;
  if (iVar1 <= iVar2) {
    uVar3 = 0;
  }
  return uVar3;
}


