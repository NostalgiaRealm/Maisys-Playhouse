
/* ==== FUN_00479140 @ 00479140 ==== 
 * signature: undefined4 __thiscall FUN_00479140(void * this, short param_1, char * param_2)
 * body: 00479140-004791ba
 */

uint __thiscall FUN_00479140(void *this,short param_1,char *param_2)

{
  uint in_EAX;
  undefined4 uVar1;
  undefined1 local_20 [8];
  char *local_18;
  
  if (param_2 == (char *)0x0) {
    return in_EAX & 0xffffff00;
  }
  if (*(short *)((int)*(void **)((int)this + 0x54) + 0x26) < param_1) {
    return CONCAT22((short)(in_EAX >> 0x10),param_1) & 0xffffff00;
  }
  FUN_00430370(*(void **)((int)this + 0x54),(int)param_1,local_20);
  if (local_18 != (LPVOID)0x0) {
    FUN_0043f6d0(local_18);
  }
  local_18 = FUN_0043f650(param_2);
  uVar1 = FUN_0042ff10(*(void **)((int)this + 0x54),(int)param_1,local_20);
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}


