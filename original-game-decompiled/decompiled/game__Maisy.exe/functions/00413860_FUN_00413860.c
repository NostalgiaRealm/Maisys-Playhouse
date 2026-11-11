
/* ==== FUN_00413860 @ 00413860 ==== 
 * signature: undefined __thiscall FUN_00413860(void * this, undefined2 param_1, undefined4 param_2, undefined2 param_3, undefined2 param_4, undefined4 param_5)
 * body: 00413860-004138f0
 */

void __thiscall
FUN_00413860(void *this,undefined2 param_1,undefined4 param_2,undefined2 param_3,undefined2 param_4,
            undefined4 param_5)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_004138f1;
  *unaff_FS_OFFSET = &local_10;
  if (*(int *)((int)this + 0x12) == 0) {
    puVar1 = (undefined4 *)FUN_004a5fed(0x18);
    local_8 = 0;
    puVar2 = (undefined4 *)0x0;
    if (puVar1 != (undefined4 *)0x0) {
      puVar2 = FUN_00413940(puVar1);
    }
    local_8 = 0xffffffff;
    *(undefined4 **)((int)this + 0x12) = puVar2;
    if (puVar2 == (undefined4 *)0x0) {
      FUN_004a3538();
    }
  }
  FUN_00413df0(*(void **)((int)this + 0x12),param_1,param_2,param_3,param_4,param_5);
  *unaff_FS_OFFSET = local_10;
  return;
}


