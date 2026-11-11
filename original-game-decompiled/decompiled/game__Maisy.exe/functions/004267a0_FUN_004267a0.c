
/* ==== FUN_004267a0 @ 004267a0 ==== 
 * signature: undefined __thiscall FUN_004267a0(void * this, byte param_1)
 * body: 004267a0-004267d4
 */

void __thiscall FUN_004267a0(void *this,byte param_1)

{
  if ((*(byte *)((int)this + 0x9c) & 2) >> 1 != param_1) {
    (**(code **)(**(int **)((int)this + 0x5a) + 0x334))(param_1);
  }
  FUN_00462bf0(this,param_1,'\x01');
  return;
}


