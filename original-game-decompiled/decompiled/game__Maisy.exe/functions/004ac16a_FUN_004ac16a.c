
/* ==== FUN_004ac16a @ 004ac16a ==== 
 * signature: undefined4 __thiscall FUN_004ac16a(void * this, int param_1)
 * body: 004ac16a-004ac1be
 */

undefined4 __thiscall FUN_004ac16a(void *this,int param_1)

{
  void *_Src;
  int iVar1;
  
  _Src = *(void **)this;
  if ((1 < *(int *)((int)_Src + -0xc)) || (*(int *)((int)_Src + -4) < param_1)) {
    iVar1 = *(int *)((int)_Src + -8);
    if (param_1 < iVar1) {
      param_1 = iVar1;
    }
    CString::AllocBuffer(this,param_1);
    FID_conflict__memcpy(*(void **)this,_Src,iVar1 + 1);
    *(int *)(*(int *)this + -8) = iVar1;
    CString::Release((CStringData *)((int)_Src + -0xc));
  }
  return *(undefined4 *)this;
}


