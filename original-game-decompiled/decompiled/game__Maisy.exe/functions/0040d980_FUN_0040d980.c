
/* ==== FUN_0040d980 @ 0040d980 ==== 
 * signature: undefined __thiscall FUN_0040d980(void * this, int param_1, char param_2)
 * body: 0040d980-0040da18
 */

void __thiscall FUN_0040d980(void *this,int param_1,char param_2)

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
  pcStack_c = FUN_0040da19;
  *unaff_FS_OFFSET = &local_10;
  if (*(int *)((int)this + 0xa8) == 0) {
    puVar1 = (undefined4 *)FUN_004a5fed(0xe);
    this_00 = (undefined4 *)0x0;
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = &PTR_FUN_004be070;
      this_00 = puVar1;
    }
    local_8 = 0xffffffff;
    *(undefined4 **)((int)this + 0xa8) = this_00;
    FUN_00430500(this_00,0);
  }
  uVar2 = FUN_00430570(*(void **)((int)this + 0xa8),param_1);
  if (((char)uVar2 == '\0') || (param_2 != '\0')) {
    FUN_004306b0(*(void **)((int)this + 0xa8),param_1);
  }
  *unaff_FS_OFFSET = local_10;
  return;
}


