
/* ==== FUN_120040a0 @ 120040a0 ==== 
 * signature: undefined __fastcall FUN_120040a0(undefined4 * param_1)
 * body: 120040a0-120040ca
 */

void __fastcall FUN_120040a0(undefined4 *param_1)

{
  short sVar1;
  void *this;
  
  if ((void *)param_1[10] != (void *)0x0) {
    sVar1 = *(short *)((int)param_1 + 0x26);
    this = (void *)param_1[10];
    while (sVar1 = sVar1 + -1, -1 < sVar1) {
      FUN_120044d0(this,*(void **)*param_1);
      this = (void *)((int)this + 0x18);
    }
  }
  return;
}


