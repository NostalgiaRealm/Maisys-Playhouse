
/* ==== FUN_00486bd0 @ 00486bd0 ==== 
 * signature: undefined __thiscall FUN_00486bd0(void * this, char param_1)
 * body: 00486bd0-00486c06
 */

void __thiscall FUN_00486bd0(void *this,char param_1)

{
  HFILE HVar1;
  _OFSTRUCT local_8c;
  
  HVar1 = OpenFile(*(LPCSTR *)((int)this + 0x160),&local_8c,-(uint)(param_1 == '\0') & 2);
  *(HFILE *)((int)this + 0x15c) = HVar1;
  return;
}


