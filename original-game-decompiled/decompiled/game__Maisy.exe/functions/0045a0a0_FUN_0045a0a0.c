
/* ==== FUN_0045a0a0 @ 0045a0a0 ==== 
 * signature: undefined4 __thiscall FUN_0045a0a0(void * this, short param_1)
 * body: 0045a0a0-0045a10c
 */

undefined4 __thiscall FUN_0045a0a0(void *this,short param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  short sVar4;
  
  if (*(int *)((int)this + 0x72) == 0) {
    return 0;
  }
  sVar4 = 1;
  iVar2 = FUN_00459ff0((int)this);
  sVar1 = (short)iVar2;
  if (0 < sVar1) {
    do {
      iVar2 = FUN_0045a000(this,sVar4);
      if (*(short *)(iVar2 + 0x48) == param_1) break;
      sVar4 = sVar4 + 1;
    } while (sVar4 <= sVar1);
    if (sVar4 <= sVar1) {
      uVar3 = FUN_0045a000(this,sVar4);
      return uVar3;
    }
  }
  return 0;
}


