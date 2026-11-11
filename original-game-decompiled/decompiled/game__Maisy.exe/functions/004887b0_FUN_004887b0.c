
/* ==== FUN_004887b0 @ 004887b0 ==== 
 * signature: CView * __thiscall FUN_004887b0(void * this, undefined4 param_1)
 * body: 004887b0-00488816
 */

CView * __thiscall FUN_004887b0(void *this,undefined4 param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_00488817;
  *unaff_FS_OFFSET = &local_10;
  CView::CView(this);
  *(undefined ***)this = &PTR_FUN_004caa08;
  DAT_004dcf78 = this;
  *(undefined2 *)((int)this + 0x46) = 0;
  *(undefined4 *)((int)this + 0x40) = param_1;
  *(undefined2 *)((int)this + 0x44) = 0;
  *(undefined2 *)((int)this + 0x48) = 0;
  *(undefined2 *)((int)this + 0x4a) = 0;
  *unaff_FS_OFFSET = local_10;
  return this;
}


