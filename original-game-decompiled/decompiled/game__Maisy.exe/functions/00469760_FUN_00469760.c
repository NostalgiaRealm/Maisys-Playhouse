
/* ==== FUN_00469760 @ 00469760 ==== 
 * signature: undefined __thiscall FUN_00469760(void * this, int param_1, undefined4 param_2, undefined2 param_3)
 * body: 00469760-004697e1
 */

void __thiscall FUN_00469760(void *this,int param_1,undefined4 param_2,undefined2 param_3)

{
  byte bVar1;
  
  FUN_0040af90(this,param_1);
  *(uint *)((int)this + 0x1e) = *(uint *)((int)this + 0x1e) | 2;
  *(undefined4 *)((int)this + 0x82) = 0;
  *(undefined4 *)((int)this + 0x7e) = 0;
  *(undefined4 *)((int)this + 0x8a) = 0;
  *(undefined4 *)((int)this + 0x86) = 0;
  DAT_004dc59c = DAT_004dc59c + 1;
  *(undefined2 *)((int)this + 0x5e) = 0xffff;
  *(undefined4 *)((int)this + 0x6a) = 0;
  *(undefined2 *)((int)this + 0x60) = param_3;
  *(undefined4 *)((int)this + 0x66) = 0;
  *(undefined4 *)((int)this + 0x6e) = 0;
  *(undefined4 *)((int)this + 0x62) = 0;
  bVar1 = *(byte *)((int)this + 0x48);
  *(undefined4 *)((int)this + 0x4a) = 0;
  *(undefined4 *)((int)this + 0x4e) = 0;
  *(undefined4 *)((int)this + 0x52) = 0;
  *(undefined4 *)((int)this + 0x56) = 0xffffffff;
  *(byte *)((int)this + 0x48) = bVar1 | 1;
  *(undefined4 *)((int)this + 0x3a) = 0;
  *(undefined4 *)((int)this + 0x5a) = 0;
  *(undefined4 *)((int)this + 0x76) = 0;
  *(undefined4 *)((int)this + 0x72) = 0;
  *(undefined4 *)((int)this + 0x7a) = 0;
  *(byte *)((int)this + 0x48) = bVar1 | 3;
  *(byte *)((int)this + 0x38) = *(byte *)((int)this + 0x38) & 0xfd;
  *(undefined4 *)((int)this + 0x3e) = 0;
  return;
}


