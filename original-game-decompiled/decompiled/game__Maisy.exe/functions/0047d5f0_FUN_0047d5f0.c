
/* ==== FUN_0047d5f0 @ 0047d5f0 ==== 
 * signature: SIZE_T __thiscall FUN_0047d5f0(void * this, undefined4 param_1, int param_2)
 * body: 0047d5f0-0047d642
 */

SIZE_T __thiscall FUN_0047d5f0(void *this,undefined4 param_1,int param_2)

{
  char cVar1;
  SIZE_T SVar2;
  
  SVar2 = 0;
  if (*(int *)((int)this + 0xb8) != 0) {
    cVar1 = (**(code **)(*(int *)this + 0xe8))();
    if ((cVar1 != '\0') || (99 < param_2)) {
      SVar2 = LocalSize(*(HLOCAL *)((int)this + 0xb8));
      FUN_0043f720(*(HLOCAL *)((int)this + 0xb8));
      *(undefined4 *)((int)this + 0xb8) = 0;
    }
  }
  return SVar2;
}


