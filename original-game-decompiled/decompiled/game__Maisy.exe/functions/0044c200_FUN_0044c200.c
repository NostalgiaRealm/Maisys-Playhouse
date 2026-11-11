
/* ==== FUN_0044c200 @ 0044c200 ==== 
 * signature: undefined __thiscall FUN_0044c200(void * this, undefined4 param_1, short param_2)
 * body: 0044c200-0044c275
 */

void __thiscall FUN_0044c200(void *this,undefined4 param_1,short param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  void *this_00;
  HPALETTE wParam;
  LPARAM lParam;
  
  if (param_2 != 1) {
    return;
  }
  if (*(int *)((int)this + 0x7e) == 0) {
    return;
  }
  cVar2 = FUN_0044bd00(this,1);
  if (cVar2 != '\0') {
    bVar1 = true;
    cVar2 = FUN_0044bd00(this,2);
    if (cVar2 == '\0') goto LAB_0044c231;
  }
  bVar1 = false;
LAB_0044c231:
  if (bVar1) {
    FUN_0044bb40(this);
  }
  lParam = 0;
  cVar2 = '\x01';
  iVar3 = FUN_0041ed90((int)this);
  this_00 = (void *)FUN_004084c0(iVar3);
  wParam = FUN_0047bd40(this_00,cVar2);
  SendMessageA(*(HWND *)((int)this + 0x7e),0x47f,(WPARAM)wParam,lParam);
  if (bVar1) {
    FUN_0044bbb0(this);
  }
  return;
}


