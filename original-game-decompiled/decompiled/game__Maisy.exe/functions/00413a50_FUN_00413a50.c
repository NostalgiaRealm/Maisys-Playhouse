
/* ==== FUN_00413a50 @ 00413a50 ==== 
 * signature: undefined4 __thiscall FUN_00413a50(void * this, short param_1, undefined * param_2, undefined4 param_3)
 * body: 00413a50-00413af4
 */

undefined4 __thiscall FUN_00413a50(void *this,short param_1,undefined *param_2,undefined4 param_3)

{
  char cVar1;
  byte bVar2;
  undefined3 extraout_var;
  int iVar3;
  short *psVar4;
  int iVar5;
  undefined3 extraout_var_00;
  undefined3 uVar6;
  byte bVar7;
  int iVar8;
  
  bVar7 = 0;
  cVar1 = FUN_00413fc0((int)this);
  uVar6 = extraout_var;
  if (cVar1 != '\0') {
    iVar5 = *(int *)((int)this + 0x10);
    *(int *)((int)this + 0x10) = iVar5 + 1;
    if (iVar5 == 0) {
      FUN_00430190(*(int *)((int)this + 4));
      FUN_00430190(*(int *)((int)this + 8));
    }
    iVar3 = FUN_00414260((int)this);
    iVar5 = 1;
    if (0 < iVar3) {
      do {
        psVar4 = (short *)FUN_00414190(this,iVar5);
        if ((psVar4 != (short *)0x0) && (*psVar4 == param_1)) {
          bVar2 = (*(code *)param_2)(psVar4,param_3);
          bVar7 = bVar7 | bVar2;
        }
        iVar8 = iVar5 + 1;
        FUN_00414200(this,iVar5);
        iVar5 = iVar8;
      } while (iVar8 <= iVar3);
    }
    iVar5 = *(int *)((int)this + 0x10) + -1;
    *(int *)((int)this + 0x10) = iVar5;
    if (iVar5 == 0) {
      FUN_004301f0(*(int *)((int)this + 8));
      FUN_004301f0(*(int *)((int)this + 4));
    }
    FUN_004140a0((int)this);
    uVar6 = extraout_var_00;
  }
  return CONCAT31(uVar6,bVar7);
}


