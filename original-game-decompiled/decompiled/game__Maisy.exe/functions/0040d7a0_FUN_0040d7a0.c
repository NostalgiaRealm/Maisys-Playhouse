
/* ==== FUN_0040d7a0 @ 0040d7a0 ==== 
 * signature: undefined __thiscall FUN_0040d7a0(void * this, undefined2 param_1, int param_2, int param_3, int param_4)
 * body: 0040d7a0-0040d814
 */

void __thiscall FUN_0040d7a0(void *this,undefined2 param_1,int param_2,int param_3,int param_4)

{
  code *pcVar1;
  
  if (((param_2 != 0) && (*(int *)((int)this + 0xb0) != param_2)) &&
     ((*(byte *)((int)this + 0x6a) & 0x10) != 0)) {
    (**(code **)(*(int *)this + 0x19c))();
  }
  *(int *)((int)this + 0xb0) = param_2;
  *(int *)((int)this + 0x78) = param_4;
  *(byte *)((int)this + 0x6a) =
       ((param_2 == 0) << 4 ^ *(byte *)((int)this + 0x6a)) & 0x10 ^ *(byte *)((int)this + 0x6a);
  *(undefined2 *)((int)this + 0xa0) = param_1;
  *(int *)((int)this + 0x74) = param_3;
  pcVar1 = *(code **)(*(int *)this + 0x160);
  (*pcVar1)(0,1);
  (*pcVar1)(0xb,1);
  return;
}


