
/* ==== FUN_0048ab70 @ 0048ab70 ==== 
 * signature: undefined __thiscall FUN_0048ab70(void * this, undefined4 * param_1, undefined4 param_2, short param_3, ushort param_4)
 * body: 0048ab70-0048ac76;0048ac8e-0048acae
 */

void __thiscall
FUN_0048ab70(void *this,undefined4 *param_1,undefined4 param_2,short param_3,ushort param_4)

{
  char cVar1;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_3c [4];
  int *local_2a;
  int local_26;
  undefined4 *local_20;
  undefined4 local_1c;
  uint local_18;
  int *local_14;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_0048ac77;
  *unaff_FS_OFFSET = &local_10;
  local_14 = (int *)0x0;
  cVar1 = (**(code **)(*(int *)this + 0x100))(param_1,&local_14,local_3c);
  if (cVar1 == '\0') {
    local_20 = FUN_00412c20(0x52);
    local_8 = 0;
    local_2a = (int *)0x0;
    if (local_20 != (undefined4 *)0x0) {
      local_2a = FUN_004392a0(local_20);
    }
    local_8 = 0xffffffff;
    local_14 = local_2a;
    FUN_004374c0(local_3c,param_1);
    local_26 = 0;
    (**(code **)(*(int *)this + 0xe8))(local_3c);
    FUN_004374c0((undefined4 *)((int)this + 0x4a),local_3c);
    *(undefined4 *)((int)this + 0x5c) = *(undefined4 *)((int)this + 0x26);
  }
  if (local_14 != (int *)0x0) {
    cVar1 = (**(code **)(*local_14 + 0x100))(param_2,&local_1c,0);
    if (cVar1 == '\0') {
      local_1c = param_2;
      local_18 = (int)param_3 << 0x10 | (int)(short)param_4;
      if ((param_4 & 1) == 0) {
        local_26 = local_26 + 1;
        FUN_0042ff60(local_14,local_26,&local_1c);
        FUN_0042ff10(this,*(int *)((int)this + 0x5c),local_3c);
      }
      else {
        (**(code **)(*local_14 + 0xe8))(&local_1c);
      }
    }
  }
  *unaff_FS_OFFSET = local_10;
  return;
}


