
/* ==== FUN_00435fc0 @ 00435fc0 ==== 
 * signature: undefined __thiscall FUN_00435fc0(void * this, int param_1)
 * body: 00435fc0-00436011
 */

void __thiscall FUN_00435fc0(void *this,int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x112)) {
    iVar3 = 0;
    do {
      iVar2 = iVar2 + 1;
      piVar1 = (int *)(*(int *)((int)this + *(short *)(param_1 + 4) * 0x124 + 0x13c) + iVar3);
      iVar3 = iVar3 + 0x80;
      FUN_00435f10(this,piVar1);
    } while (iVar2 < *(int *)(param_1 + 0x112));
  }
  return;
}


