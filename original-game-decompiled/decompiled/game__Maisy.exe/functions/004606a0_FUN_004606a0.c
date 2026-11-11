
/* ==== FUN_004606a0 @ 004606a0 ==== 
 * signature: undefined __thiscall FUN_004606a0(void * this, int param_1)
 * body: 004606a0-00460736
 */

void __thiscall FUN_004606a0(void *this,int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *this_00;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_00460737;
  *unaff_FS_OFFSET = &local_10;
  if (*(int *)((int)this + 0x142) == 0) {
    puVar1 = (undefined4 *)FUN_004a5fed(0xe);
    this_00 = (undefined4 *)0x0;
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = &PTR_FUN_004be070;
      this_00 = puVar1;
    }
    local_8 = 0xffffffff;
    *(undefined4 **)((int)this + 0x142) = this_00;
    if (this_00 == (undefined4 *)0x0) goto LAB_00460726;
    FUN_00430500(this_00,0);
  }
  uVar2 = FUN_00430570(*(void **)((int)this + 0x142),param_1);
  if ((char)uVar2 == '\0') {
    FUN_004306b0(*(void **)((int)this + 0x142),param_1);
  }
LAB_00460726:
  *unaff_FS_OFFSET = local_10;
  return;
}


