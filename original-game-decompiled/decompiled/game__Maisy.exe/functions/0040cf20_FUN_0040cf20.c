
/* ==== FUN_0040cf20 @ 0040cf20 ==== 
 * signature: undefined __thiscall FUN_0040cf20(void * this, int param_1)
 * body: 0040cf20-0040d04d
 */

void __thiscall FUN_0040cf20(void *this,int param_1)

{
  byte bVar1;
  byte bVar2;
  
  FUN_00412d60(this,*(int *)(param_1 + 4));
  *(undefined4 *)((int)this + 0x26) = 0;
  *(undefined4 *)((int)this + 0x2e) = 0;
  *(undefined4 *)((int)this + 0x2a) = 0;
  *(undefined4 *)((int)this + 0x36) = 0;
  *(uint *)((int)this + 0x1e) = *(uint *)((int)this + 0x1e) | 0x10000;
  *(undefined2 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x32) = 0;
  *(undefined4 *)((int)this + 0x3a) = 0;
  *(undefined4 *)((int)this + 0x3e) = 0;
  *(undefined4 *)((int)this + 0x46) = 0;
  *(undefined4 *)((int)this + 0x4a) = 0xffffffff;
  *(int *)((int)this + 0x4e) = param_1;
  *(undefined4 *)((int)this + 0x52) = 0;
  *(undefined4 *)((int)this + 0x56) = 0;
  *(undefined4 *)((int)this + 0x5a) = 0;
  *(undefined4 *)((int)this + 0x5e) = 0;
  bVar1 = *(byte *)((int)this + 0x6a);
  *(undefined4 *)((int)this + 0x62) = 0;
  *(undefined4 *)((int)this + 0x66) = 0;
  *(undefined2 *)((int)this + 0x42) = 1;
  *(byte *)((int)this + 0x6a) = bVar1 | 1;
  *(byte *)((int)this + 0x6a) = bVar1 & 0xfd | 1;
  bVar2 = bVar1 & 0xf9;
  *(byte *)((int)this + 0x6a) = bVar2 | 1;
  *(byte *)((int)this + 0x6a) = bVar2 | 9;
  *(byte *)((int)this + 0x6a) = bVar2 | 0x19;
  *(byte *)((int)this + 0x6a) = bVar1 & 0xd9 | 0x19;
  *(byte *)((int)this + 0x6a) = bVar1 & 0x99 | 0x19;
  *(undefined1 *)((int)this + 0x6a) = 0x19;
  bVar1 = *(byte *)((int)this + 0x6b);
  *(byte *)((int)this + 0x6b) = bVar1 & 0xfe;
  *(byte *)((int)this + 0x6b) = bVar1 & 0xfc;
  *(undefined2 *)((int)this + 0x6c) = 0;
  *(byte *)((int)this + 0x6b) = bVar1 & 0xf8;
  *(undefined2 *)((int)this + 0x6e) = 0;
  *(byte *)((int)this + 0x6b) = bVar1 & 0xf0;
  *(byte *)((int)this + 0x6b) = bVar1 & 0xe0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x82) = 0;
  *(undefined1 *)((int)this + 0x86) = 0;
  *(undefined1 *)((int)this + 0x87) = 0;
  *(undefined1 *)((int)this + 0x88) = 0;
  *(undefined1 *)((int)this + 0x89) = 0;
  *(undefined2 *)((int)this + 0x9a) = 0;
  *(undefined4 *)((int)this + 0x8a) = 0;
  *(undefined2 *)((int)this + 0xa0) = 0xffff;
  *(undefined4 *)((int)this + 0x8e) = 0;
  *(undefined2 *)((int)this + 0xa6) = 0xffff;
  *(undefined4 *)((int)this + 0x92) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0xffffffff;
  *(undefined4 *)((int)this + 0xa2) = 0xffffffff;
  *(undefined4 *)((int)this + 0xa8) = 0;
  *(undefined4 *)((int)this + 0xac) = 0;
  *(undefined4 *)((int)this + 0xb0) = 0;
  *(undefined2 *)((int)this + 0x80) = 1;
  *(undefined4 *)((int)this + 0xb4) = 0;
  return;
}


