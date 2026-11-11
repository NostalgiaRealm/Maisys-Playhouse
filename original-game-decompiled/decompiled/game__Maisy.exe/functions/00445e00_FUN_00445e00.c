
/* ==== FUN_00445e00 @ 00445e00 ==== 
 * signature: undefined __thiscall FUN_00445e00(void * this, int param_1, undefined2 param_2, undefined2 param_3)
 * body: 00445e00-00445e62
 */

void __thiscall FUN_00445e00(void *this,int param_1,undefined2 param_2,undefined2 param_3)

{
  FUN_00460220(this,param_1,param_2,param_3);
  *(uint *)((int)this + 0x1e) = *(uint *)((int)this + 0x1e) | 0x8000;
  *(undefined2 *)((int)this + 0x152) = 0;
  *(undefined4 *)((int)this + 0x14a) = 0;
  *(undefined4 *)((int)this + 0x14e) = 0;
  *(byte *)((int)this + 0x154) = *(byte *)((int)this + 0x154) & 0xfe;
  (**(code **)(*(int *)this + 0x134))(1);
  *(undefined2 *)((int)this + 0x158) = 0;
  *(undefined2 *)((int)this + 0x156) = 0;
  *(undefined2 *)((int)this + 0x15e) = 0;
  return;
}


