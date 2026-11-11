
/* ==== FUN_00421960 @ 00421960 ==== 
 * signature: undefined __thiscall FUN_00421960(void * this, short * param_1, short * param_2, char param_3)
 * body: 00421960-00421a75
 */

void __thiscall FUN_00421960(void *this,short *param_1,short *param_2,char param_3)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  int iVar8;
  int iVar9;
  short sVar10;
  short local_20;
  short local_1c;
  
  (**(code **)(*(int *)this + 0x114))();
  if ((*param_1 < param_1[2]) && (param_1[1] < param_1[3])) {
    sVar1 = param_2[2];
    sVar2 = param_2[3];
    sVar3 = *param_2;
    sVar4 = param_2[1];
    iVar9 = (int)(short)(*(short *)((int)this + 0xbc) - *(short *)((int)this + 0xb8));
    sVar5 = *param_1;
    sVar6 = param_1[1];
    iVar8 = (int)(short)(*(short *)((int)this + 0xbe) - *(short *)((int)this + 0xba));
    sVar10 = (short)((((int)sVar5 - (int)*(short *)((int)this + 0xb8)) * (int)(short)(sVar1 - sVar3)
                     ) / iVar9);
    if (param_3 != '\0') {
      sVar10 = sVar10 + *param_2;
    }
    sVar7 = (short)((((int)sVar6 - (int)*(short *)((int)this + 0xba)) * (int)(short)(sVar2 - sVar4))
                   / iVar8);
    if (param_3 != '\0') {
      sVar7 = sVar7 + param_2[1];
    }
    *param_1 = sVar10;
    param_1[1] = sVar7;
    local_20 = (short)((((int)param_1[2] - (int)sVar5) * (int)(short)(sVar1 - sVar3)) / iVar9);
    param_1[2] = sVar10 + local_20;
    local_1c = (short)((((int)param_1[3] - (int)sVar6) * (int)(short)(sVar2 - sVar4)) / iVar8);
    param_1[3] = sVar7 + local_1c;
  }
  return;
}


