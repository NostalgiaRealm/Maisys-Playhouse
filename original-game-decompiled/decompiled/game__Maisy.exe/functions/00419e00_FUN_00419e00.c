
/* ==== FUN_00419e00 @ 00419e00 ==== 
 * signature: undefined __thiscall FUN_00419e00(void * this, undefined4 param_1)
 * body: 00419e00-00419e39
 */

void __thiscall FUN_00419e00(void *this,undefined4 param_1)

{
  int iVar1;
  
  if (((*(byte *)((int)this + 0x9c) & 2) != 0) && ((*(byte *)((int)this + 0x29) & 1) == 0)) {
    iVar1 = FUN_0040c620(this);
    if (*(char *)(iVar1 + 0xa4) != '\0') {
      FUN_00419310(this);
    }
  }
  FUN_00460fb0(this,param_1);
  return;
}


