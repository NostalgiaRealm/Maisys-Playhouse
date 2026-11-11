
/* ==== FUN_0045a920 @ 0045a920 ==== 
 * signature: int * __thiscall FUN_0045a920(void * this, short param_1)
 * body: 0045a920-0045a979
 */

int * __thiscall FUN_0045a920(void *this,short param_1)

{
  short sVar1;
  undefined4 uVar2;
  int *piVar3;
  short sVar4;
  
  sVar4 = 1;
  uVar2 = FUN_0045a510((int)this);
  if (0 < (short)uVar2) {
    do {
      piVar3 = (int *)FUN_004308b0(*(void **)((int)this + 0x7e),sVar4);
      if (piVar3 != (int *)0x0) {
        sVar1 = (**(code **)(*piVar3 + 0x274))();
        if (sVar1 == param_1) {
          return piVar3;
        }
      }
      sVar4 = sVar4 + 1;
    } while (sVar4 <= (short)uVar2);
  }
  return (int *)0x0;
}


