
/* ==== FUN_004655c0 @ 004655c0 ==== 
 * signature: undefined __thiscall FUN_004655c0(void * this, char param_1)
 * body: 004655c0-00465605
 */

void __thiscall FUN_004655c0(void *this,char param_1)

{
  int iVar1;
  
  FUN_0046c890(this,param_1);
  if (param_1 != '\0') {
    *(undefined2 *)((int)this + 0x92) = 0xffff;
    iVar1 = (**(code **)(*(int *)this + 0x28c))();
    if ((iVar1 != 0) && ((*(byte *)(iVar1 + 0x1e) & 4) != 0)) {
      (**(code **)(**(int **)((int)this + 0x5a) + 0x318))(*(undefined4 *)(iVar1 + 0x5a));
    }
  }
  return;
}


