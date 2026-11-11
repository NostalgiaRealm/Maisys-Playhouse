
/* ==== FUN_0046e8f0 @ 0046e8f0 ==== 
 * signature: undefined __thiscall FUN_0046e8f0(void * this, undefined4 param_1, short param_2)
 * body: 0046e8f0-0046e93e
 */

void __thiscall FUN_0046e8f0(void *this,undefined4 param_1,short param_2)

{
  undefined4 uVar1;
  int iVar2;
  short sVar3;
  short sVar4;
  
  if (DAT_004dc56c != '\0') {
    sVar3 = 1;
    uVar1 = FUN_0046e970((int)this);
    if (0 < (short)uVar1) {
      do {
        sVar4 = sVar3 + 1;
        iVar2 = FUN_0046e950(this,sVar3);
        FUN_00407a20(*(void **)(iVar2 + 0x82),param_2);
        sVar3 = sVar4;
      } while (sVar4 <= (short)uVar1);
    }
  }
  return;
}


