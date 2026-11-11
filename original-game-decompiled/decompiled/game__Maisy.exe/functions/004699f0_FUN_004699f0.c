
/* ==== FUN_004699f0 @ 004699f0 ==== 
 * signature: undefined4 __fastcall FUN_004699f0(int * param_1)
 * body: 004699f0-00469a19
 */

undefined4 __fastcall FUN_004699f0(int *param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)((int)param_1 + 0x7e) & 0x80000000;
  if ((uVar1 != 0) && ((*(uint *)((int)param_1 + 0x7e) & 0x20000000) != 0)) {
    return CONCAT31((int3)(uVar1 >> 8),1);
  }
  if (uVar1 == 0) {
    iVar2 = FUN_00469fb0(param_1);
    uVar1 = 0;
    if (iVar2 != 0) {
      return CONCAT31((int3)((uint)iVar2 >> 8),1);
    }
  }
  return uVar1;
}


