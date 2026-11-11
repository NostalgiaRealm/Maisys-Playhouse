
/* ==== FUN_0041f560 @ 0041f560 ==== 
 * signature: int * __stdcall FUN_0041f560(int * param_1, short param_2, int param_3)
 * body: 0041f560-0041f75b
 */

int * FUN_0041f560(int *param_1,short param_2,int param_3)

{
  uint uVar1;
  code *pcVar2;
  short sVar3;
  int iVar4;
  int *piVar5;
  void *this;
  
  uVar1 = *(uint *)((int)param_1 + 0x1e);
  piVar5 = param_1;
  if (((uVar1 & 2) == 0) && (piVar5 = (int *)0x0, (uVar1 & 0x10) != 0)) {
    piVar5 = *(int **)((int)param_1 + 0x3a);
  }
  if (param_2 == 5) {
    if (param_3 == 0xc9) {
      return piVar5;
    }
    if (param_3 == 0xd0) {
      if ((uVar1 & 0x10) == 0) {
        return piVar5;
      }
      pcVar2 = *(code **)(*param_1 + 0x218);
      iVar4 = (*pcVar2)();
      if (iVar4 == 0) {
        return piVar5;
      }
      piVar5 = (int *)(*pcVar2)();
      return piVar5;
    }
    if (param_3 == 0x6a) {
      return *(int **)((int)piVar5 + 0x62);
    }
    if (param_3 == 0x66) {
      if (piVar5 == (int *)0x0) {
        return (int *)0x0;
      }
      piVar5 = (int *)FUN_0046ca10((int)piVar5);
      return piVar5;
    }
    if (param_3 == 0x65) {
      if (piVar5 != (int *)0x0) {
        iVar4 = FUN_0040c620(piVar5);
        piVar5 = (int *)FUN_004053f0(iVar4);
        return piVar5;
      }
    }
    else if (param_3 == 0x68) {
      if (piVar5 != (int *)0x0) {
        piVar5 = (int *)(**(code **)(*piVar5 + 0x10))();
        return piVar5;
      }
    }
    else if (param_3 == 0x67) {
      if (piVar5 != (int *)0x0) {
        iVar4 = *piVar5;
        sVar3 = (**(code **)(iVar4 + 0x274))();
        this = (void *)(**(code **)(iVar4 + 0x10))();
        piVar5 = FUN_0045a920(this,sVar3);
        return piVar5;
      }
    }
    else if (param_3 == 0xd1) {
      if (piVar5 != (int *)0x0) {
        return *(int **)((int)piVar5 + 0x6a);
      }
    }
    else if ((param_3 == 0xd2) && (piVar5 != (int *)0x0)) {
      return *(int **)((int)piVar5 + 0x66);
    }
  }
  else if (param_2 == 1) {
    if ((piVar5 != (int *)0x0) && (*(int **)((int)piVar5 + 0x62) != (int *)0x0)) {
      for (piVar5 = (int *)FUN_00469fb0(*(int **)((int)piVar5 + 0x62)); piVar5 != (int *)0x0;
          piVar5 = *(int **)((int)piVar5 + 0x6a)) {
        if (piVar5[3] == param_3) {
          return piVar5;
        }
      }
    }
  }
  else if (param_2 == 6) {
    if ((uVar1 & 0x10) == 0) {
      if ((piVar5 != (int *)0x0) && (piVar5 = (int *)FUN_00469f80(piVar5), piVar5 != (int *)0x0)) {
        do {
          if (piVar5[3] == param_3) {
            return piVar5;
          }
          piVar5 = *(int **)((int)piVar5 + 0x3e);
        } while (piVar5 != (int *)0x0);
        return (int *)0x0;
      }
    }
    else {
      iVar4 = (**(code **)(*param_1 + 0x218))();
      if (iVar4 == 0) {
        if ((piVar5 != (int *)0x0) && (piVar5 = (int *)FUN_00469f80(piVar5), piVar5 != (int *)0x0))
        {
          do {
            if (piVar5[3] == param_3) {
              return piVar5;
            }
            piVar5 = *(int **)((int)piVar5 + 0x3e);
          } while (piVar5 != (int *)0x0);
          return (int *)0x0;
        }
      }
      else {
        piVar5 = (int *)FUN_004246a0(iVar4);
        if (piVar5 != (int *)0x0) {
          do {
            if (piVar5[3] == param_3) {
              return piVar5;
            }
            piVar5 = *(int **)((int)piVar5 + 0x3e);
          } while (piVar5 != (int *)0x0);
          return (int *)0x0;
        }
      }
    }
  }
  return (int *)0x0;
}


