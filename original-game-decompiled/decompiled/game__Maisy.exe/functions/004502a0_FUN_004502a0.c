
/* ==== FUN_004502a0 @ 004502a0 ==== 
 * signature: undefined __thiscall FUN_004502a0(void * this, int param_1)
 * body: 004502a0-00450301
 */

void __thiscall FUN_004502a0(void *this,int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 local_14 [8];
  void *local_c;
  
  if ((*(int **)((int)this + 4) != (int *)0x0) &&
     (cVar1 = (**(code **)(**(int **)((int)this + 4) + 0x104))(), cVar1 != '\0')) {
    return;
  }
  iVar3 = (int)*(short *)(param_1 + 0x36);
  if ((((0 < iVar3) && (iVar3 <= *(int *)((int)*(void **)((int)this + 0x26) + 0x26))) &&
      (uVar2 = FUN_00430370(*(void **)((int)this + 0x26),iVar3,local_14), (char)uVar2 != '\0')) &&
     ((local_c != (void *)0x0 && (uVar2 = FUN_00430570(local_c,param_1), (char)uVar2 != '\0')))) {
    FUN_00430790(local_c,param_1);
  }
  return;
}


