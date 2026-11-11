
/* ==== FUN_004064d0 @ 004064d0 ==== 
 * signature: int __thiscall FUN_004064d0(void * this, int param_1, short param_2, char param_3)
 * body: 004064d0-00406844
 */

int __thiscall FUN_004064d0(void *this,int param_1,short param_2,char param_3)

{
  short sVar1;
  int *piVar2;
  char cVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  
  if (param_3 == '\0') {
    if (((((short)param_1 < 0) || (param_1 < 0)) ||
        ((int)*(short *)((int)this + 0xbc) - (int)*(short *)((int)this + 0xb8) <=
         (int)(short)param_1)) ||
       ((int)*(short *)((int)this + 0xbe) - (int)*(short *)((int)this + 0xba) <= (int)param_1._2_2_)
       ) {
      return 0;
    }
  }
  else if (*(char *)((int)this + 0xa7) != '\0') {
    FUN_004070a0((int)this);
  }
  sVar1 = *(short *)(*(int *)((int)this + 0x56) + 0x26);
  iVar6 = FUN_00430190(*(int *)((int)this + 0x56));
joined_r0x0040655e:
  do {
    do {
      sVar1 = sVar1 + -1;
      if (sVar1 < 0) {
        FUN_004301f0(*(int *)((int)this + 0x56));
        sVar1 = *(short *)(*(int *)((int)this + 0x52) + 0x26);
        iVar6 = FUN_00430190(*(int *)((int)this + 0x52));
        goto joined_r0x004066d3;
      }
      piVar8 = (int *)(iVar6 + sVar1 * 0x1a);
    } while ((char)piVar8[6] == '\0');
    piVar2 = *(int **)((int)this + 300);
  } while ((int *)*piVar8 == piVar2);
  if ((param_2 != 8) || (piVar8[4] == 0)) {
    if ((param_2 != 9) || ((piVar8[5] == 0 && (piVar8[4] == 0)))) goto joined_r0x0040655e;
    if ((piVar2 != (int *)0x0) && (DAT_004d91e0 != '\0')) {
      sVar4 = (**(code **)(*(int *)*piVar8 + 0x27c))();
      sVar5 = (**(code **)(*piVar2 + 0x27c))();
      if (sVar5 < sVar4) goto joined_r0x0040655e;
    }
  }
  if ((((((short)piVar8[1] <= (short)param_1) && ((short)param_1 < (short)piVar8[2])) &&
       (*(short *)((int)piVar8 + 6) <= param_1._2_2_)) &&
      (param_1._2_2_ < *(short *)((int)piVar8 + 10))) &&
     ((param_3 != '\0' || (cVar3 = (**(code **)(*(int *)*piVar8 + 0x45c))(param_1), cVar3 != '\0')))
     ) {
    iVar6 = *(int *)(sVar1 * 0x1a + iVar6);
    iVar9 = iVar6;
    if (((param_3 != '\0') && ((iVar6 != 0 && ((*(byte *)(iVar6 + 0x38) & 1) != 0)))) &&
       ((iVar7 = *(int *)(iVar6 + 0x62), (*(byte *)(iVar7 + 0x38) & 1) != 0 &&
        (((*(short *)(iVar7 + 0x60) != 0 || ((*(byte *)(iVar7 + 0x21) & 0x40) != 0)) ||
         (*(short *)(iVar7 + 0x22) == 0x43)))))) {
      for (; ((iVar9 = iVar6, iVar7 != 0 && (iVar9 = iVar7, (*(byte *)(iVar7 + 0x38) & 1) != 0)) &&
             ((*(short *)(iVar7 + 0x60) != 0 ||
              (((*(uint *)(iVar7 + 0x1e) & 0x40000000) != 0 || (*(short *)(iVar7 + 0x22) == 0x43))))
             )); iVar7 = *(int *)(iVar7 + 0x62)) {
      }
    }
    FUN_004301f0(*(int *)((int)this + 0x56));
    return iVar9;
  }
  goto joined_r0x0040655e;
joined_r0x004066d3:
  do {
    do {
      sVar1 = sVar1 + -1;
      if (sVar1 < 0) {
        FUN_004301f0(*(int *)((int)this + 0x52));
        return 0;
      }
      piVar8 = (int *)(iVar6 + sVar1 * 0x1a);
    } while ((char)piVar8[6] == '\0');
    piVar2 = *(int **)((int)this + 300);
  } while ((int *)*piVar8 == piVar2);
  if ((param_2 != 8) || (piVar8[4] == 0)) {
    if ((param_2 != 9) || ((piVar8[5] == 0 && (piVar8[4] == 0)))) goto joined_r0x004066d3;
    if ((piVar2 != (int *)0x0) && (DAT_004d91e0 != '\0')) {
      sVar4 = (**(code **)(*(int *)*piVar8 + 0x27c))();
      sVar5 = (**(code **)(*piVar2 + 0x27c))();
      if (sVar5 < sVar4) goto joined_r0x004066d3;
    }
  }
  if (((((short)piVar8[1] <= (short)param_1) && ((short)param_1 < (short)piVar8[2])) &&
      (*(short *)((int)piVar8 + 6) <= param_1._2_2_)) &&
     ((param_1._2_2_ < *(short *)((int)piVar8 + 10) &&
      ((param_3 != '\0' || (cVar3 = (**(code **)(*(int *)*piVar8 + 0x45c))(param_1), cVar3 != '\0'))
      )))) goto LAB_004067ae;
  goto joined_r0x004066d3;
LAB_004067ae:
  iVar6 = *(int *)(sVar1 * 0x1a + iVar6);
  iVar9 = iVar6;
  if ((param_3 != '\0') &&
     (((iVar6 != 0 && ((*(byte *)(iVar6 + 0x38) & 1) != 0)) &&
      ((iVar7 = *(int *)(iVar6 + 0x62), (*(byte *)(iVar7 + 0x38) & 1) != 0 &&
       ((((*(short *)(iVar7 + 0x60) != 0 || ((*(byte *)(iVar7 + 0x21) & 0x40) != 0)) ||
         (*(short *)(iVar7 + 0x22) == 0x43)) && (iVar7 != 0)))))))) {
    while (iVar9 = iVar7, (*(byte *)(iVar7 + 0x38) & 1) != 0) {
      if ((((*(short *)(iVar7 + 0x60) == 0) && ((*(uint *)(iVar7 + 0x1e) & 0x40000000) == 0)) &&
          (*(short *)(iVar7 + 0x22) != 0x43)) ||
         (iVar7 = *(int *)(iVar7 + 0x62), iVar9 = iVar6, iVar7 == 0)) break;
    }
  }
  FUN_004301f0(*(int *)((int)this + 0x52));
  return iVar9;
}


