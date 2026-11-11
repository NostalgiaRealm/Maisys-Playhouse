
/* ==== FUN_0040af90 @ 0040af90 ==== 
 * signature: undefined __thiscall FUN_0040af90(void * this, int param_1)
 * body: 0040af90-0040afcf
 */

void __thiscall FUN_0040af90(void *this,int param_1)

{
  byte bVar1;
  
  FUN_00412d60(this,param_1);
  bVar1 = *(byte *)((int)this + 0x38);
  *(undefined4 *)((int)this + 0x26) = 0;
  *(byte *)((int)this + 0x38) = bVar1 & 0xfe;
  *(undefined4 *)((int)this + 0x2a) = 0;
  *(uint *)((int)this + 0x1e) = *(uint *)((int)this + 0x1e) | 1;
  *(undefined2 *)((int)this + 0x36) = 0;
  *(byte *)((int)this + 0x38) = bVar1 & 0xfc;
  *(undefined4 *)((int)this + 0x2e) = 0;
  *(undefined4 *)((int)this + 0x32) = 0;
  *(byte *)((int)this + 0x38) = bVar1 & 0xf8;
  return;
}


