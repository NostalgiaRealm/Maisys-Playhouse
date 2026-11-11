
/* ==== FUN_004241f0 @ 004241f0 ==== 
 * signature: undefined4 __thiscall FUN_004241f0(void * this, int * param_1)
 * body: 004241f0-004242eb
 */

undefined4 __thiscall FUN_004241f0(void *this,int *param_1)

{
  int iVar1;
  int iVar2;
  int *in_EAX;
  undefined2 uVar5;
  int *piVar3;
  undefined4 uVar4;
  
  uVar5 = (undefined2)((uint)in_EAX >> 0x10);
  if (param_1 == (int *)0x0) {
    return CONCAT22(uVar5,0xd);
  }
  if ((*(byte *)((int)param_1 + 0x1f) & 4) == 0) {
    return CONCAT22(uVar5,10);
  }
  if (*(int *)((int)this + 0x2a) != 0) {
    iVar1 = *param_1;
    in_EAX = (int *)(**(code **)(iVar1 + 0x1cc))(this);
    if ((char)in_EAX == '\0') {
      piVar3 = (int *)(**(code **)(iVar1 + 0x218))();
      in_EAX = (int *)0x0;
      if (piVar3 != (int *)0x0) {
        if (piVar3 == (int *)0x0) goto LAB_0042425a;
LAB_0042423b:
        do {
          if (*(int *)((int)piVar3 + 0x2a) == 0) {
            piVar3 = (int *)(**(code **)(*piVar3 + 0x218))();
            if (piVar3 != (int *)0x0) goto LAB_0042423b;
          }
          if (piVar3 != (int *)0x0) {
            if (*(int *)((int)piVar3 + 0x2a) == *(int *)((int)this + 0x2a)) {
              return CONCAT22((short)((uint)piVar3 >> 0x10),0xb);
            }
LAB_0042425a:
            in_EAX = (int *)0x0;
            if (piVar3 == (int *)0x0) break;
            piVar3 = (int *)(**(code **)(*piVar3 + 0x218))();
          }
          in_EAX = (int *)0x0;
        } while (piVar3 != (int *)0x0);
      }
    }
  }
  if ((*(byte *)(param_1 + 8) & 8) != 0) {
    iVar1 = *(int *)((int)param_1 + 0x2a);
    while (this != (int *)0x0) {
      iVar2 = *(int *)((int)this + 0x2a);
      if ((iVar1 != 0) && (iVar2 == iVar1)) {
        return CONCAT22((short)((uint)iVar2 >> 0x10),0xc);
      }
      uVar4 = 0;
      if ((iVar2 != 0) && (uVar4 = (**(code **)(*param_1 + 0x2a8))(iVar2), (char)uVar4 != '\0')) {
        return CONCAT22((short)((uint)uVar4 >> 0x10),0xc);
      }
      if (param_1 == this) {
        return CONCAT22((short)((uint)uVar4 >> 0x10),0xb);
      }
      this = (void *)(**(code **)(*(int *)this + 0x218))();
      in_EAX = this;
    }
  }
  return (uint)in_EAX & 0xffff0000;
}


