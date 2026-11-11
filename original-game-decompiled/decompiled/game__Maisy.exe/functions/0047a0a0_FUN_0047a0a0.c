
/* ==== FUN_0047a0a0 @ 0047a0a0 ==== 
 * signature: undefined __thiscall FUN_0047a0a0(void * this, undefined4 param_1, undefined4 param_2, undefined2 param_3)
 * body: 0047a0a0-0047a130
 */

void __thiscall FUN_0047a0a0(void *this,undefined4 param_1,undefined4 param_2,undefined2 param_3)

{
  byte bVar1;
  
  FUN_00412d60(this,0);
  *(undefined4 *)((int)this + 0x26) = param_1;
  *(undefined4 *)((int)this + 0xce8) = 0xffffffff;
  *(undefined2 *)((int)this + 0x2a) = param_3;
  *(undefined4 *)((int)this + 0xce4) = 0;
  *(undefined2 *)((int)this + 0x466) = param_2._2_2_;
  *(undefined4 *)((int)this + 0xcf0) = 0;
  *(undefined2 *)((int)this + 0x464) = (undefined2)param_2;
  *(undefined4 *)((int)this + 0xcf4) = 0;
  bVar1 = *(byte *)((int)this + 0x1134);
  *(undefined4 *)((int)this + 0x468) = 0;
  *(undefined4 *)((int)this + 0xcf8) = 0;
  *(byte *)((int)this + 0x1134) = bVar1 | 4;
  *(byte *)((int)this + 0x1134) = bVar1 & 0xfe | 4;
  *(undefined4 *)((int)this + 0xcec) = 0x28;
  *(byte *)((int)this + 0x1134) = bVar1 & 0xfc | 4;
  *(byte *)((int)this + 0x1134) = bVar1 & 0x7c | 4;
  return;
}


