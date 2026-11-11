
/* ==== FUN_0046ba00 @ 0046ba00 ==== 
 * signature: undefined1 __thiscall FUN_0046ba00(void * this, undefined4 param_1)
 * body: 0046ba00-0046ba3d
 */

undefined1 __thiscall FUN_0046ba00(void *this,undefined4 param_1)

{
  short sVar1;
  undefined1 uVar2;
  
  sVar1 = *(short *)((int)this + 0x46);
  if ((((sVar1 == 4) || (sVar1 == 7)) || (sVar1 == 0)) ||
     ((sVar1 == 1 || (uVar2 = 1, (*(byte *)((int)this + 0x29) & 1) != 0)))) {
    uVar2 = 0;
  }
  (**(code **)(*(int *)this + 0x2f0))(param_1,0);
  return uVar2;
}


