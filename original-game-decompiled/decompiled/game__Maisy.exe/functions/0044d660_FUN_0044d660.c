
/* ==== FUN_0044d660 @ 0044d660 ==== 
 * signature: undefined __thiscall FUN_0044d660(void * this, undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined1 param_4, undefined4 param_5)
 * body: 0044d660-0044d693
 */

void __thiscall
FUN_0044d660(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4,
            undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = **(int **)(*(int *)((int)this + 4) + 0x48);
  uVar2 = (**(code **)(iVar1 + 0x120))(param_2,param_4,param_5);
  (**(code **)(iVar1 + 0x134))(param_1,uVar2);
  return;
}


