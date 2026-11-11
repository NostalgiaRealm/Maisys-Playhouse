
/* ==== FUN_0042fb50 @ 0042fb50 ==== 
 * signature: undefined __thiscall FUN_0042fb50(void * this, undefined4 param_1, int param_2, char param_3, undefined4 param_4)
 * body: 0042fb50-0042fbb6
 */

void __thiscall
FUN_0042fb50(void *this,undefined4 param_1,int param_2,char param_3,undefined4 param_4)

{
  byte bVar1;
  
  FUN_00412d60(this,0);
  *(undefined4 *)((int)this + 0x36) = 0;
  *(undefined4 *)((int)this + 0x26) = 0;
  *(undefined4 *)((int)this + 0x2a) = 0;
  if (param_2 < 2) {
    param_2 = 1;
  }
  *(int *)((int)this + 0x2e) = param_2;
  *(undefined4 *)((int)this + 0x32) = param_1;
  bVar1 = (param_3 * '\x02' ^ *(byte *)((int)this + 0x48)) & 2 ^ *(byte *)((int)this + 0x48);
  *(undefined2 *)((int)this + 0x46) = 0;
  *(byte *)((int)this + 0x48) = bVar1;
  *(undefined4 *)((int)this + 0x3a) = 0;
  *(byte *)((int)this + 0x48) = bVar1 | 1;
  *(undefined4 *)((int)this + 0x3e) = param_4;
  *(undefined4 *)((int)this + 0x42) = 0;
  FUN_004303d0(this,0,0);
  return;
}


