
/* ==== FUN_00442000 @ 00442000 ==== 
 * signature: CWnd * __thiscall FUN_00442000(void * this, undefined4 param_1)
 * body: 00442000-00442052
 */

CWnd * __thiscall FUN_00442000(void *this,undefined4 param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_00442053;
  *unaff_FS_OFFSET = &local_10;
  CWnd::CWnd(this);
  *(undefined ***)this = &PTR_FUN_004c7e08;
  *(undefined4 *)((int)this + 0x3c) = param_1;
  *unaff_FS_OFFSET = local_10;
  return this;
}


