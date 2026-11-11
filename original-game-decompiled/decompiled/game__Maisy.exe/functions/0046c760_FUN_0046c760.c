
/* ==== FUN_0046c760 @ 0046c760 ==== 
 * signature: undefined __thiscall FUN_0046c760(void * this, char param_1, char param_2)
 * body: 0046c760-0046c817
 */

void __thiscall FUN_0046c760(void *this,char param_1,char param_2)

{
  int *piVar1;
  bool bVar2;
  undefined4 local_58 [21];
  
  if ((*(short *)((int)this + 0x46) == 4) || (bVar2 = true, param_2 != '\0')) {
    bVar2 = false;
  }
  *(undefined2 *)((int)this + 0x46) = 4;
  if (((bVar2) && (param_1 == '\0')) && (*(int *)((int)this + 0x4e) != 0)) {
    FUN_004142c0(local_58,0xca,0,this,0);
    FUN_0046b770(this,(int)local_58);
  }
  (**(code **)(**(int **)((int)this + 0x5a) + 0x240))(param_1);
  if (param_1 != '\0') {
    FUN_004142c0(local_58,0x66,0,this,0);
    FUN_0046b770(this,(int)local_58);
  }
  piVar1 = *(int **)((int)this + 0x52);
  if (piVar1 != (int *)0x0) {
    if (param_1 != '\0') {
      (**(code **)(*piVar1 + 0x80))(0x7fffffff,0x4b);
      return;
    }
    (**(code **)(*piVar1 + 0x80))(0x7fffffff,0x19);
  }
  return;
}


