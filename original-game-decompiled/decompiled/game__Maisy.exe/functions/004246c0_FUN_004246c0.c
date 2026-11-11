
/* ==== FUN_004246c0 @ 004246c0 ==== 
 * signature: undefined __thiscall FUN_004246c0(void * this, uint * param_1)
 * body: 004246c0-004248f1
 */

void __thiscall FUN_004246c0(void *this,uint *param_1)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  undefined4 local_58 [20];
  char local_5;
  
  local_5 = '\0';
  if ((*(byte *)((int)this + 100) & 1) != 0) {
    if ((param_1[3] == 0x7d1) && (*(int **)((int)this + 0x3a) != (int *)0x0)) {
      iVar2 = *(int *)((int)this + 0x54);
      if (((iVar2 == 0x12d) || (iVar2 == 0x12e)) ||
         ((((0x130 < iVar2 && (iVar2 < 0x134)) || (iVar2 == 0x135)) || (iVar2 == 0x136)))) {
        (**(code **)(**(int **)((int)this + 0x3a) + 0x78))(8,this,1);
      }
      if ((*(int *)((int)this + 0x54) == 0x12f) || (*(int *)((int)this + 0x54) == 0x130)) {
        (**(code **)(**(int **)((int)this + 0x3a) + 0x78))(9,this,1);
      }
      iVar2 = *(int *)((int)this + 0x5c);
      if ((((iVar2 == 0x12d) || (iVar2 == 0x12e)) || ((0x130 < iVar2 && (iVar2 < 0x134)))) ||
         ((iVar2 == 0x135 || (iVar2 == 0x136)))) {
        (**(code **)(**(int **)((int)this + 0x3a) + 0x78))(8,this,1);
      }
      if ((*(int *)((int)this + 0x5c) == 0x12f) || (*(int *)((int)this + 0x5c) == 0x130)) {
        (**(code **)(**(int **)((int)this + 0x3a) + 0x78))(9,this,1);
      }
    }
    bVar1 = *(byte *)((int)this + 100);
    if ((((bVar1 & 2) == 0) && (*(uint *)((int)this + 0x54) == param_1[3])) &&
       ((param_1[4] == *(uint *)((int)this + 0x58) || (*(uint *)((int)this + 0x58) == 0)))) {
      local_5 = '\x01';
      *(byte *)((int)this + 100) = bVar1 | 2;
      *(byte *)((int)this + 100) = bVar1 | 6;
      if (*(int *)((int)this + 0x50) != 0) {
        FUN_004142c0(local_58,0x7d1,0,this,0);
        for (piVar3 = *(int **)((int)this + 0x50);
            (piVar3 != (int *)0x0 && ((*(byte *)((int)piVar3 + 0x29) & 0x80) == 0));
            piVar3 = *(int **)((int)piVar3 + 0x3e)) {
          (**(code **)(*piVar3 + 0x1e0))(local_58);
        }
      }
    }
    bVar1 = *(byte *)((int)this + 100);
    if (((bVar1 & 2) != 0) &&
       (((*(uint *)((int)this + 0x5c) == param_1[3] &&
         ((param_1[4] == *(uint *)((int)this + 0x60) || (*(uint *)((int)this + 0x60) == 0)))) ||
        (param_1[3] == 0x7d2)))) {
      local_5 = '\x01';
      *(byte *)((int)this + 100) = bVar1 & 0xfd;
      *(byte *)((int)this + 100) = bVar1 & 0xf9;
      if (*(int *)((int)this + 0x50) != 0) {
        FUN_004142c0(local_58,0x7d2,0,this,0);
        for (piVar3 = *(int **)((int)this + 0x50);
            (piVar3 != (int *)0x0 && ((*(byte *)((int)piVar3 + 0x29) & 0x80) == 0));
            piVar3 = *(int **)((int)piVar3 + 0x3e)) {
          (**(code **)(*piVar3 + 0x1e0))(local_58);
        }
      }
    }
  }
  if ((local_5 != '\0') && ((*param_1 & 0x20000000) != 0)) {
    *param_1 = *param_1 | 0x10000000;
  }
  bVar1 = *(byte *)((int)this + 100);
  if ((((bVar1 & 1) == 0) || ((((bVar1 & 2) != 0 && (local_5 == '\0')) || (param_1[3] == 0xdd)))) &&
     ((param_1[3] != 0x7d1 || ((bVar1 & 4) == 0)))) {
    for (piVar3 = *(int **)((int)this + 0x50);
        ((piVar3 != (int *)0x0 && ((*param_1 & 0x30000000) != 0x30000000)) &&
        ((*(uint *)((int)piVar3 + 0x26) & 0x80000000) == 0)); piVar3 = *(int **)((int)piVar3 + 0x3e)
        ) {
      (**(code **)(*piVar3 + 0x1e0))(param_1);
    }
  }
  return;
}


