
/* ==== FUN_00440650 @ 00440650 ==== 
 * signature: undefined __thiscall FUN_00440650(void * this, char param_1)
 * body: 00440650-004406db
 */

void __thiscall FUN_00440650(void *this,char param_1)

{
  code *pcVar1;
  int iVar2;
  
  if ((char)('\x01' - (*(int *)((int)this + 0x98) == 0)) == param_1) {
    return;
  }
  pcVar1 = *(code **)(*(int *)this + 0x244);
  iVar2 = (*pcVar1)();
  if (iVar2 != 0) {
    iVar2 = (*pcVar1)();
    if (*(int *)(iVar2 + 0x156) == 0x6e705453) {
      return;
    }
    iVar2 = (*pcVar1)();
    if (*(int *)(iVar2 + 0x156) == 0x616e7473) {
      return;
    }
  }
  if (param_1 == '\0') {
    FUN_00440580(this,*(int *)((int)this + 0x98));
    *(undefined4 *)((int)this + 0x98) = 0;
    return;
  }
  iVar2 = FUN_004404f0(this,1,0x43f7f0,0,0,1);
  *(int *)((int)this + 0x98) = iVar2;
  return;
}


