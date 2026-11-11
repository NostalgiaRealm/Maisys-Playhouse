
/* ==== FUN_0041e220 @ 0041e220 ==== 
 * signature: int __thiscall FUN_0041e220(void * this, int param_1, int param_2)
 * body: 0041e220-0041e338
 */

int __thiscall FUN_0041e220(void *this,int param_1,int param_2)

{
  char cVar1;
  SIZE_T SVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  if (0xe < param_2) {
    iVar4 = (**(code **)(*(int *)this + 0x1d4))();
  }
  if ((*(short *)((int)this + 0x24) <= param_2) && (iVar4 < param_1)) {
    if (*(char *)((int)this + 0x116) != '\0') {
      SVar2 = GlobalSize(*(HGLOBAL *)((int)this + 0x130));
      iVar4 = iVar4 + SVar2;
      FUN_0043f7a0(*(HGLOBAL *)((int)this + 0x130));
      *(undefined4 *)((int)this + 0x130) = 0;
      *(undefined1 *)((int)this + 0x116) = 0;
    }
    if (param_1 <= iVar4) goto LAB_0041e31c;
    if ((DAT_004d91e4 == 0) || (cVar1 = (**(code **)(*(int *)this + 0x104))(1), cVar1 == '\0')) {
      if (*(char *)((int)this + 0xf2) != '\0') {
        iVar4 = iVar4 + *(int *)((int)this + 0x110);
        FUN_0047bce0((char *)((int)this + 0xf2));
      }
      if (*(LPVOID *)((int)this + 0x106) != (LPVOID)0x0) {
        iVar4 = iVar4 + 0x400;
        FUN_00434950(*(LPVOID *)((int)this + 0x106));
        *(undefined4 *)((int)this + 0x106) = 0;
      }
    }
  }
  if (param_1 <= iVar4) {
    return iVar4;
  }
  if ((((0x13 < param_2) && (*(char *)((int)this + 0xd0) != '\0')) &&
      ((*(byte *)((int)this + 0x6a) & 0x20) == 0)) && ((*(byte *)((int)this + 0x6b) & 2) == 0)) {
    iVar4 = iVar4 + *(int *)((int)this + 0xee);
    FUN_0047bce0((char *)((int)this + 0xd0));
  }
LAB_0041e31c:
  if (iVar4 < param_1) {
    iVar3 = FUN_00414280();
    iVar4 = iVar4 + iVar3;
  }
  return iVar4;
}


