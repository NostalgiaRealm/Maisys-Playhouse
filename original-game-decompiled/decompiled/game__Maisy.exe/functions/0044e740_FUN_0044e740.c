
/* ==== FUN_0044e740 @ 0044e740 ==== 
 * signature: int * __thiscall FUN_0044e740(void * this, int * param_1)
 * body: 0044e740-0044e81d
 */

int * __thiscall FUN_0044e740(void *this,int *param_1)

{
  char cVar1;
  void *pvVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined1 local_10c [264];
  
  if ((param_1 != (int *)0x0) && (pvVar2 = (void *)FUN_0040d5a0((int)param_1), pvVar2 != this)) {
    cVar1 = (**(code **)(*param_1 + 0x124))();
    if (cVar1 == '\0') {
      (**(code **)(*param_1 + 0x180))(local_10c);
      param_1 = (int *)FUN_0044e4e0();
      if (param_1 == (int *)0x0) {
        piVar3 = FUN_0044e490(this,local_10c);
        return piVar3;
      }
    }
    else {
      if ((*(byte *)((int)param_1 + 0x21) & 8) != 0) {
        iVar4 = FUN_0040d5a0((int)param_1);
        iVar5 = (**(code **)(*param_1 + 0x150))();
        if (iVar5 == *(int *)(iVar4 + 0x3e)) {
          piVar3 = FUN_0044db20(this,*(int *)((int)this + 0x3e),0,'\x01','\x01');
          if (piVar3 != (int *)0x0) {
            return piVar3;
          }
          piVar3 = FUN_0044d560((int)this);
          FUN_0044e650(this,piVar3);
          return piVar3;
        }
      }
      param_1 = FUN_0044e430(this,param_1);
    }
  }
  return param_1;
}


