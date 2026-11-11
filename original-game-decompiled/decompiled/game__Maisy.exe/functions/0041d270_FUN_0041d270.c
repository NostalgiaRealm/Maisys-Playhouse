
/* ==== FUN_0041d270 @ 0041d270 ==== 
 * signature: undefined __thiscall FUN_0041d270(void * this, int param_1)
 * body: 0041d270-0041d32b
 */

void __thiscall FUN_0041d270(void *this,int param_1)

{
  byte bVar1;
  
  FUN_0040cf20(this,param_1);
  *(undefined2 *)((int)this + 0x42) = 1;
  *(uint *)((int)this + 0x1e) = *(uint *)((int)this + 0x1e) | 0x4000000;
  *(undefined2 *)((int)this + 0x104) = 0;
  *(undefined1 *)((int)this + 0xd0) = 0;
  *(undefined1 *)((int)this + 0xf2) = 0;
  *(undefined4 *)((int)this + 0x110) = 0;
  *(undefined2 *)((int)this + 0x10a) = 0;
  *(undefined4 *)((int)this + 0xfc) = 0x480000;
  *(undefined2 *)((int)this + 0xba) = 0;
  bVar1 = *(byte *)((int)this + 0x150);
  *(undefined2 *)((int)this + 0xb8) = 0;
  *(undefined4 *)((int)this + 0x100) = 0x480000;
  *(undefined4 *)((int)this + 0x106) = 0;
  *(undefined4 *)((int)this + 0x10c) = 0;
  *(undefined2 *)((int)this + 0xbc) = 100;
  *(byte *)((int)this + 0x150) = bVar1 & 0xfd;
  *(undefined2 *)((int)this + 0xbe) = 100;
  *(byte *)((int)this + 0x150) = bVar1 & 0xfc;
  *(undefined4 *)((int)this + 200) = 0;
  *(undefined4 *)((int)this + 0xcc) = 0;
  *(undefined1 *)((int)this + 0x116) = 0;
  *(undefined4 *)((int)this + 0xc4) = 0xffffffff;
  *(undefined2 *)((int)this + 0x24) = 10;
  return;
}


