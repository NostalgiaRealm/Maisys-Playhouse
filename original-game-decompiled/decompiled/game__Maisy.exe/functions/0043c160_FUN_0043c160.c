
/* ==== FUN_0043c160 @ 0043c160 ==== 
 * signature: undefined __cdecl FUN_0043c160(short * param_1, short * param_2, short * param_3)
 * body: 0043c160-0043c21b
 */

void __cdecl FUN_0043c160(short *param_1,short *param_2,short *param_3)

{
  short sVar1;
  short sVar2;
  undefined4 uVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  short sVar7;
  int iVar8;
  short sVar9;
  
  sVar7 = param_1[3] - param_1[1];
  sVar9 = param_1[2] - *param_1;
  sVar5 = param_2[2];
  sVar4 = param_2[3];
  sVar1 = *param_2;
  sVar2 = param_2[1];
  uVar3 = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)param_3 = *(undefined4 *)param_2;
  *(undefined4 *)(param_3 + 2) = uVar3;
  if ((sVar9 != 0) && (sVar7 != 0)) {
    iVar6 = (int)(short)(sVar4 - sVar2) * (int)sVar9;
    iVar8 = (int)(short)(sVar5 - sVar1) * (int)sVar7;
    if (iVar6 - iVar8 != 0 && iVar8 <= iVar6) {
      sVar5 = (short)(iVar8 / (int)sVar9);
      sVar4 = (short)(((int)(short)(sVar4 - sVar2) - (int)sVar5) / 2) + param_3[1];
      param_3[1] = sVar4;
      param_3[3] = sVar4 + sVar5;
      return;
    }
    sVar4 = (short)(iVar6 / (int)sVar7);
    sVar5 = (short)(((int)(short)(sVar5 - sVar1) - (int)sVar4) / 2) + *param_3;
    *param_3 = sVar5;
    param_3[2] = sVar5 + sVar4;
  }
  return;
}


