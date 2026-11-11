
/* ==== FUN_00461c90 @ 00461c90 ==== 
 * signature: undefined __thiscall FUN_00461c90(void * this, undefined4 * param_1)
 * body: 00461c90-00461cbc
 */

void __thiscall FUN_00461c90(void *this,undefined4 *param_1)

{
  int iVar1;
  
  *(undefined4 *)((int)this + 0xc2) = *param_1;
  iVar1 = *(int *)this;
  (**(code **)(iVar1 + 0x330))();
  (**(code **)(iVar1 + 0x424))(0);
  return;
}


