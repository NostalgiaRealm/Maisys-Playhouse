
/* ==== FUN_00469a20 @ 00469a20 ==== 
 * signature: undefined4 __fastcall FUN_00469a20(int * param_1)
 * body: 00469a20-00469a5a
 */

undefined4 __fastcall FUN_00469a20(int *param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)((int)param_1 + 0x7e) & 0x80000000;
  if ((uVar1 != 0) && ((*(uint *)((int)param_1 + 0x7e) & 0x10000000) != 0)) {
    return CONCAT31((int3)(uVar1 >> 8),1);
  }
  if (uVar1 == 0) {
    for (iVar2 = FUN_00469f80(param_1); uVar1 = 0, iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x3e)) {
      if ((*(uint *)(iVar2 + 0x26) & 0x80000000) == 0) {
        return CONCAT31((int3)((uint)iVar2 >> 8),1);
      }
    }
  }
  return uVar1;
}


