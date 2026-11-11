
/* ==== FUN_00435700 @ 00435700 ==== 
 * signature: undefined4 __thiscall FUN_00435700(void * this, int param_1, int param_2, int param_3)
 * body: 00435700-00435794
 */

undefined4 __thiscall FUN_00435700(void *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  int local_28 [2];
  undefined4 local_20;
  undefined4 uStack_1c;
  int local_10;
  undefined8 local_c;
  
  local_c = (double)param_3 * 1000.0;
  iVar1 = 1;
  if (0 < *(int *)(*(int *)((int)this + 0x7250) + 0x26)) {
    do {
      FUN_00430370(*(void **)((int)this + 0x7250),iVar1,local_28);
      if ((local_28[0] == param_1) && (local_10 == param_2)) {
        if ((double)CONCAT44(uStack_1c,local_20) != local_c) {
          uStack_1c = local_c._4_4_;
          local_20 = (undefined4)local_c;
          FUN_0042ff10(*(void **)((int)this + 0x7250),iVar1,local_28);
        }
        return 0;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 <= *(int *)(*(int *)((int)this + 0x7250) + 0x26));
  }
  return 0x10000;
}


