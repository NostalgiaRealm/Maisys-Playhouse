
/* ==== FUN_00423cd0 @ 00423cd0 ==== 
 * signature: undefined __thiscall FUN_00423cd0(void * this, int param_1, int param_2)
 * body: 00423cd0-00423d25
 */

void __thiscall FUN_00423cd0(void *this,int param_1,int param_2)

{
  byte bVar1;
  
  FUN_0042c130(this,param_1,param_2);
  *(uint *)((int)this + 0x1e) = *(uint *)((int)this + 0x1e) | 0x80000;
  *(undefined2 *)((int)this + 0x22) = 0x50;
  *(undefined4 *)((int)this + 0x54) = 0x7d1;
  *(undefined4 *)((int)this + 0x5c) = 1;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  bVar1 = *(byte *)((int)this + 100);
  *(byte *)((int)this + 100) = bVar1 & 0xfe;
  *(byte *)((int)this + 100) = bVar1 & 0xfc;
  *(byte *)((int)this + 100) = bVar1 & 0xf8;
  *(byte *)((int)this + 100) = bVar1 & 0xf0;
  return;
}


