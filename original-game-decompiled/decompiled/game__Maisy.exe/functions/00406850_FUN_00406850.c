
/* ==== FUN_00406850 @ 00406850 ==== 
 * signature: undefined4 __thiscall FUN_00406850(void * this, undefined4 param_1)
 * body: 00406850-004069be
 */

undefined4 __thiscall FUN_00406850(void *this,undefined4 param_1)

{
  int *piVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  short sVar6;
  
  sVar6 = *(short *)(*(int *)((int)this + 0x56) + 0x26);
  iVar4 = FUN_00430190(*(int *)((int)this + 0x56));
  do {
    sVar6 = sVar6 + -1;
    if (sVar6 < 0) {
      FUN_004301f0(*(int *)((int)this + 0x56));
      iVar4 = FUN_00430190(*(int *)((int)this + 0x52));
      sVar6 = (short)*(undefined4 *)(*(int *)((int)this + 0x52) + 0x26);
      do {
        sVar6 = sVar6 + -1;
        if (sVar6 < 0) {
          FUN_004301f0(*(int *)((int)this + 0x52));
          return 0;
        }
        piVar5 = (int *)(iVar4 + sVar6 * 0x1a);
      } while ((((char)piVar5[6] == '\0') ||
               ((((piVar1 = (int *)*piVar5, (short)piVar1[0x18] == 0 &&
                  ((*(byte *)((int)piVar1 + 0x21) & 0x40) == 0)) &&
                 (*(short *)((int)piVar1 + 0x22) != 0x43)) ||
                (((short)param_1 < (short)piVar5[1] || ((short)piVar5[2] <= (short)param_1)))))) ||
              ((param_1._2_2_ < *(short *)((int)piVar5 + 6) ||
               ((*(short *)((int)piVar5 + 10) <= param_1._2_2_ ||
                (cVar3 = (**(code **)(*piVar1 + 0x45c))(param_1), cVar3 == '\0'))))));
      uVar2 = *(undefined4 *)(sVar6 * 0x1a + iVar4);
      FUN_004301f0(*(int *)((int)this + 0x52));
      return uVar2;
    }
    piVar5 = (int *)(iVar4 + sVar6 * 0x1a);
  } while (((((char)piVar5[6] == '\0') ||
            (((piVar1 = (int *)*piVar5, (short)piVar1[0x18] == 0 &&
              ((*(byte *)((int)piVar1 + 0x21) & 0x40) == 0)) &&
             (*(short *)((int)piVar1 + 0x22) != 0x43)))) ||
           ((((short)param_1 < (short)piVar5[1] || ((short)piVar5[2] <= (short)param_1)) ||
            (param_1._2_2_ < *(short *)((int)piVar5 + 6))))) ||
          ((*(short *)((int)piVar5 + 10) <= param_1._2_2_ ||
           (cVar3 = (**(code **)(*piVar1 + 0x45c))(param_1), cVar3 == '\0'))));
  uVar2 = *(undefined4 *)(sVar6 * 0x1a + iVar4);
  FUN_004301f0(*(int *)((int)this + 0x56));
  return uVar2;
}


