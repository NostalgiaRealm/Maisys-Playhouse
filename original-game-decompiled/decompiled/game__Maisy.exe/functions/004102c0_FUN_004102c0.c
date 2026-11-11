
/* ==== FUN_004102c0 @ 004102c0 ==== 
 * signature: undefined __thiscall FUN_004102c0(void * this, undefined2 param_1, undefined4 param_2)
 * body: 004102c0-00410355
 */

void __thiscall FUN_004102c0(void *this,undefined2 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *this_00;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_18;
  undefined2 uStack_14;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_00410356;
  *unaff_FS_OFFSET = &local_10;
  if (*(int *)((int)this + 0x3a) == 0) {
    puVar1 = FUN_00412c20(0x4a);
    local_18._2_2_ = SUB42(puVar1,0);
    uStack_14 = (undefined2)((uint)puVar1 >> 0x10);
    local_8 = 0;
    this_00 = (undefined4 *)0x0;
    if (puVar1 != (undefined4 *)0x0) {
      this_00 = FUN_0042f8d0(puVar1);
    }
    local_8 = 0xffffffff;
    *(undefined4 **)((int)this + 0x3a) = this_00;
    FUN_0042fb50(this_00,6,0,'\0',0);
  }
  if (*(int **)((int)this + 0x3a) != (int *)0x0) {
    uStack_14 = param_1;
    local_18 = param_2;
    (**(code **)(**(int **)((int)this + 0x3a) + 0xe8))(&local_18);
  }
  *unaff_FS_OFFSET = local_10;
  return;
}


