
/* ==== FUN_00460400 @ 00460400 ==== 
 * signature: int __thiscall FUN_00460400(void * this, int param_1, int param_2)
 * body: 00460400-004604e6
 */

int __thiscall FUN_00460400(void *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (DAT_004da3ac == this) {
    if (param_2 == 100) goto LAB_0046042c;
    if (DAT_004da3ac == this) {
      return 0;
    }
  }
  if (param_2 < 5) {
    return 0;
  }
LAB_0046042c:
  iVar2 = 0;
  if (*(short *)((int)this + 0xec) == 1) {
    if (*(HGDIOBJ *)((int)this + 0xf6) != (HGDIOBJ)0x0) {
      DeleteObject(*(HGDIOBJ *)((int)this + 0xf6));
    }
    *(undefined4 *)((int)this + 0xf6) = 0;
    *(undefined2 *)((int)this + 0xec) = 0;
  }
  if ((0 < param_1) && (*(char *)((int)this + 0xca) != '\0')) {
    iVar2 = *(int *)((int)this + 0xe8);
    FUN_0047bce0((char *)((int)this + 0xca));
  }
  if (iVar2 < param_1) {
    iVar1 = *(int *)((int)this + 0x11c);
    if (iVar1 != 0) {
      if (*(char *)(iVar1 + 2) != '\0') {
        iVar2 = iVar2 + *(int *)(iVar1 + 0x20);
        FUN_0047bce0((char *)(iVar1 + 2));
      }
      iVar2 = iVar2 + 0x30;
      FUN_004a602d(*(LPVOID *)((int)this + 0x11c));
      *(undefined4 *)((int)this + 0x11c) = 0;
    }
    if (iVar2 < param_1) {
      iVar1 = FUN_00469a60();
      iVar2 = iVar2 + iVar1;
    }
  }
  return iVar2;
}


