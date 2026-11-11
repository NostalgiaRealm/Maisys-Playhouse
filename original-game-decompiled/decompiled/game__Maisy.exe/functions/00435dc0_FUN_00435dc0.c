
/* ==== FUN_00435dc0 @ 00435dc0 ==== 
 * signature: undefined __thiscall FUN_00435dc0(void * this, int param_1)
 * body: 00435dc0-00435e03
 */

void __thiscall FUN_00435dc0(void *this,int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x112)) {
    iVar2 = 0;
    do {
      puVar1 = (undefined4 *)(*(int *)(param_1 + 0x116) + iVar2);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x80;
      FUN_004362e0(this,puVar1);
    } while (iVar3 < *(int *)(param_1 + 0x112));
  }
  return;
}


