
/* ==== FUN_00411b80 @ 00411b80 ==== 
 * signature: undefined __thiscall FUN_00411b80(void * this, int param_1, undefined2 param_2, undefined4 param_3)
 * body: 00411b80-00411bd8
 */

void __thiscall FUN_00411b80(void *this,int param_1,undefined2 param_2,undefined4 param_3)

{
  FUN_0047d5b0(this,param_1);
  *(undefined2 *)((int)this + 0x22) = 2;
  *(undefined4 *)((int)this + 0xc0) = 0;
  *(undefined4 *)((int)this + 0xc6) = param_3;
  *(uint *)((int)this + 0x1e) = *(uint *)((int)this + 0x1e) | 0x8000000;
  *(undefined1 *)((int)this + 0xca) = 0;
  *(undefined2 *)((int)this + 0x80) = 1;
  *(undefined2 *)((int)this + 0x42) = 0xb;
  *(undefined2 *)((int)this + 0x44) = 0x18;
  *(undefined2 *)((int)this + 0xc4) = param_2;
  return;
}


