
/* ==== FUN_0041c880 @ 0041c880 ==== 
 * signature: undefined __thiscall FUN_0041c880(void * this, int param_1)
 * body: 0041c880-0041c8e0
 */

void __thiscall FUN_0041c880(void *this,int param_1)

{
  byte bVar1;
  
  FUN_0041d270(this,param_1);
  *(uint *)((int)this + 0x1e) = *(uint *)((int)this + 0x1e) | 0x800;
  *(undefined2 *)((int)this + 0x22) = 0xe;
  bVar1 = *(byte *)((int)this + 0x15e);
  *(undefined4 *)((int)this + 0x152) = 0;
  *(byte *)((int)this + 0x15e) = bVar1 & 0xfe;
  *(undefined4 *)((int)this + 0x156) = 0;
  *(undefined4 *)((int)this + 0x15a) = 0;
  *(undefined4 *)((int)this + 0x74) = 0x200;
  *(undefined2 *)((int)this + 0x42) = 0xc;
  *(undefined2 *)((int)this + 0x44) = 3;
  *(byte *)((int)this + 0x15e) = bVar1 & 0xfc;
  return;
}


