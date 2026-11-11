
/* ==== FUN_0045a8d0 @ 0045a8d0 ==== 
 * signature: undefined __thiscall FUN_0045a8d0(void * this, int param_1)
 * body: 0045a8d0-0045a915
 */

void __thiscall FUN_0045a8d0(void *this,int param_1)

{
  undefined4 uVar1;
  void *this_00;
  short sVar2;
  
  sVar2 = 1;
  uVar1 = FUN_0045a510((int)this);
  if (0 < (short)uVar1) {
    do {
      this_00 = (void *)FUN_004308b0(*(void **)((int)this + 0x7e),sVar2);
      if (this_00 != (void *)0x0) {
        FUN_0046b730(this_00,param_1);
      }
      sVar2 = sVar2 + 1;
    } while (sVar2 <= (short)uVar1);
  }
  return;
}


