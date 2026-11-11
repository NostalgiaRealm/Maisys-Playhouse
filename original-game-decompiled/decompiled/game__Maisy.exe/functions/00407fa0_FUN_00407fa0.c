
/* ==== FUN_00407fa0 @ 00407fa0 ==== 
 * signature: undefined __thiscall FUN_00407fa0(void * this, char param_1)
 * body: 00407fa0-0040807d
 */

void __thiscall FUN_00407fa0(void *this,char param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  undefined4 local_58 [3];
  undefined4 local_4c;
  char local_5;
  
  if (*(int *)((int)this + 0x9e) == 0) {
    return;
  }
  iVar1 = *(int *)((int)this + 0x9a);
  if (iVar1 == 0) {
    return;
  }
  iVar2 = *(int *)(iVar1 + 0x6a);
  if (iVar2 == 0) {
LAB_00407fec:
    local_5 = '\0';
  }
  else {
    if (*(int *)((int)this + 0x92) == iVar2) {
      bVar4 = *(int *)(iVar2 + 0x6a) != 0;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) goto LAB_00407fec;
    local_5 = '\x01';
  }
  iVar1 = *(int *)(iVar1 + 0x66);
  if (iVar1 != 0) {
    if (*(int *)((int)this + 0x92) == iVar1) {
      bVar4 = *(int *)(iVar1 + 0x66) != 0;
    }
    else {
      bVar4 = true;
    }
    bVar3 = true;
    if (bVar4) goto LAB_00408015;
  }
  bVar3 = false;
LAB_00408015:
  FUN_004142c0(local_58,0x192,0,0,0);
  if (param_1 != '\0') {
    FUN_0046b730(*(void **)((int)this + 0x9e),(int)local_58);
  }
  if (local_5 == '\0') {
    local_4c = 0x193;
    FUN_0046b730(*(void **)((int)this + 0x9e),(int)local_58);
  }
  if (!bVar3) {
    local_4c = 0x194;
    FUN_0046b730(*(void **)((int)this + 0x9e),(int)local_58);
  }
  return;
}


