
/* ==== FUN_004b1dd2 @ 004b1dd2 ==== 
 * signature: undefined __thiscall FUN_004b1dd2(void * this, int * param_1)
 * body: 004b1dd2-004b1e5c
 */

void __thiscall FUN_004b1dd2(void *this,int *param_1)

{
  int iVar1;
  int iVar2;
  tagSIZE local_14;
  tagSIZE local_c;
  
  GetWindowExtEx(*(HDC *)((int)this + 8),&local_c);
  GetViewportExtEx(*(HDC *)((int)this + 8),&local_14);
  iVar1 = _abs(local_14.cx);
  iVar2 = _abs(local_c.cx);
  iVar1 = MulDiv(*param_1,iVar2,iVar1);
  *param_1 = iVar1;
  iVar1 = _abs(local_14.cy);
  iVar2 = _abs(local_c.cy);
  iVar1 = MulDiv(param_1[1],iVar2,iVar1);
  param_1[1] = iVar1;
  return;
}


