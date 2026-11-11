
/* ==== FUN_00433610 @ 00433610 ==== 
 * signature: undefined4 __cdecl FUN_00433610(int param_1)
 * body: 00433610-0043367a;00433692-004336b2
 */

undefined4 __cdecl FUN_00433610(int param_1)

{
  undefined4 *this;
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_0043367b;
  *unaff_FS_OFFSET = &local_10;
  if (*(int *)(param_1 + 4) == 0) {
    this = FUN_00412c20(0x4a);
    local_8 = 0;
    puVar1 = (undefined4 *)0x0;
    if (this != (undefined4 *)0x0) {
      puVar1 = FUN_0042f970(this,4,0,'\0',0,'\0');
    }
    *(undefined4 **)(param_1 + 4) = puVar1;
    if (puVar1 == (undefined4 *)0x0) {
      uVar2 = 0x10000;
      goto LAB_004336a3;
    }
  }
  local_8 = 0xffffffff;
  (**(code **)(**(int **)(param_1 + 4) + 0xe8))(&stack0x00000008);
  uVar2 = 0;
LAB_004336a3:
  *unaff_FS_OFFSET = local_10;
  return uVar2;
}


