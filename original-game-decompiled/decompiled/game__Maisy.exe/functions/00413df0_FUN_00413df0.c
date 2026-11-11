
/* ==== FUN_00413df0 @ 00413df0 ==== 
 * signature: undefined4 __thiscall FUN_00413df0(void * this, undefined2 param_1, undefined4 param_2, undefined2 param_3, undefined2 param_4, undefined4 param_5)
 * body: 00413df0-00413ed4;00413ee2-00413f8f
 */

undefined4 __thiscall
FUN_00413df0(void *this,undefined2 param_1,undefined4 param_2,undefined2 param_3,undefined2 param_4,
            undefined4 param_5)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *unaff_FS_OFFSET;
  int *local_18;
  undefined2 local_12;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_00413f9d;
  *unaff_FS_OFFSET = &local_10;
  local_12 = 0;
  local_18 = FUN_0043f6f0(0x16);
  *(undefined2 *)*local_18 = param_1;
  *(undefined4 *)(*local_18 + 2) = param_2;
  *(undefined2 *)(*local_18 + 6) = param_3;
  *(undefined2 *)(*local_18 + 8) = param_4;
  *(int *)(*local_18 + 10) = DAT_004d9b9c;
  DAT_004d9b9c = DAT_004d9b9c + 1;
  uVar1 = *(undefined4 *)(*local_18 + 10);
  *(undefined4 *)(*local_18 + 0xe) = param_5;
  *(undefined4 *)(*local_18 + 0x12) = 0;
  if (*(int *)((int)this + 0x10) == 0) {
    if (*(int *)((int)this + 4) == 0) {
      puVar2 = FUN_00412c20(0x4a);
      local_8 = 1;
      puVar3 = (undefined4 *)0x0;
      if (puVar2 != (undefined4 *)0x0) {
        puVar3 = FUN_0042f970(puVar2,4,0,'\0',0,'\0');
      }
      local_8 = 0xffffffff;
      *(undefined4 **)((int)this + 4) = puVar3;
      puVar2 = FUN_00412c20(0x4a);
      local_8 = 2;
      puVar3 = (undefined4 *)0x0;
      if (puVar2 != (undefined4 *)0x0) {
        puVar3 = FUN_0042f970(puVar2,2,0,'\0',0,'\0');
      }
      local_8 = 0xffffffff;
      *(undefined4 **)((int)this + 8) = puVar3;
    }
    (**(code **)(**(int **)((int)this + 4) + 0xe8))(&local_18);
    (**(code **)(**(int **)((int)this + 8) + 0xe8))(&local_12);
  }
  else {
    *(undefined4 *)((int)this + 0x14) = 1;
    if (*(int *)((int)this + 0xc) == 0) {
      puVar2 = FUN_00412c20(0x4a);
      local_8 = 0;
      puVar3 = (undefined4 *)0x0;
      if (puVar2 != (undefined4 *)0x0) {
        puVar3 = FUN_0042f970(puVar2,4,0,'\0',0,'\0');
      }
      local_8 = 0xffffffff;
      *(undefined4 **)((int)this + 0xc) = puVar3;
    }
    (**(code **)(**(int **)((int)this + 0xc) + 0xe8))(&local_18);
  }
  *unaff_FS_OFFSET = local_10;
  return uVar1;
}


