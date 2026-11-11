
/* ==== FUN_004a83a1 @ 004a83a1 ==== 
 * signature: undefined __thiscall FUN_004a83a1(void * this, CMapPtrToPtr * param_1)
 * body: 004a83a1-004a83de
 */

void __thiscall FUN_004a83a1(void *this,CMapPtrToPtr *param_1)

{
  HWND pHVar1;
  int iVar2;
  void *local_4;
  
  if ((this != (void *)0x0) && (*(int *)((int)this + 0x38) == 0)) {
    pHVar1 = GetParent(*(HWND *)((int)this + 0x1c));
    iVar2 = CMapPtrToPtr::Lookup(param_1,pHVar1,&local_4);
    if (iVar2 != 0) {
      FUN_004a83df(this,(int)local_4);
    }
  }
  return;
}


