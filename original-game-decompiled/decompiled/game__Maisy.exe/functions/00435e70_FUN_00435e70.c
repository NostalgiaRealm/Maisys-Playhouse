
/* ==== FUN_00435e70 @ 00435e70 ==== 
 * signature: undefined __thiscall FUN_00435e70(void * this, int param_1)
 * body: 00435e70-00435ec1
 */

void __thiscall FUN_00435e70(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if (*(short *)(param_1 + 4) == 0) {
    iVar2 = 2;
  }
  if (iVar2 < *(int *)(param_1 + 0x112)) {
    iVar3 = iVar2 << 7;
    do {
      iVar1 = *(int *)(param_1 + 0x116) + iVar3;
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x80;
      FUN_00435e10(this,iVar1);
    } while (iVar2 < *(int *)(param_1 + 0x112));
  }
  return;
}


