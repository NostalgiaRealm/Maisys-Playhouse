
/* ==== FUN_0043f190 @ 0043f190 ==== 
 * signature: CDialog * __thiscall FUN_0043f190(void * this, undefined4 param_1)
 * body: 0043f190-0043f1f0
 */

CDialog * __thiscall FUN_0043f190(void *this,undefined4 param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_0043f1f1;
  *unaff_FS_OFFSET = &local_10;
  CDialog::CDialog(this,0x82,(CWnd *)0x0);
  *(undefined ***)this = &PTR_FUN_004c7cb0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 0x5c) = param_1;
  *unaff_FS_OFFSET = local_10;
  return this;
}


