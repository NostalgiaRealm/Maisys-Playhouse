
/* ==== FUN_11024340 @ 11024340 ==== 
 * signature: HRGN __cdecl FUN_11024340(undefined4 * param_1, short * param_2, int param_3)
 * body: 11024340-11024687
 */

HRGN __cdecl FUN_11024340(undefined4 *param_1,short *param_2,int param_3)

{
  POINT *pPVar1;
  LONG LVar2;
  short sVar3;
  undefined4 uVar4;
  POINT *pptl;
  short sVar5;
  HRGN pHVar6;
  POINT local_58;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  pHVar6 = (HRGN)0x0;
  switch(*(undefined2 *)(param_3 + 0x22)) {
  case 1:
    pHVar6 = CreateRectRgn((int)*param_2,(int)param_2[1],(int)param_2[2],(int)param_2[3]);
    return pHVar6;
  case 2:
    pHVar6 = CreateRoundRectRgn((int)*param_2,(int)param_2[1],(int)param_2[2],(int)param_2[3],0x19,
                                0x19);
    return pHVar6;
  case 3:
    pHVar6 = CreateEllipticRgn((int)*param_2,(int)param_2[1],(int)param_2[2],(int)param_2[3]);
    return pHVar6;
  default:
    pHVar6 = CreateRectRgn((int)*param_2,(int)param_2[1],(int)param_2[2],(int)param_2[3]);
    return pHVar6;
  case 9:
    break;
  case 0xb:
    sVar5 = param_2[2] - *param_2;
    local_28 = (int)*param_2;
    sVar3 = param_2[3] - param_2[1];
    local_58.y = (LONG)param_2[1];
    local_48 = (int)param_2[2];
    local_58.x = sVar5 / 2 + local_28;
    local_50 = local_48 - sVar5 / 3;
    local_2c = (int)(sVar3 / 3);
    local_4c = local_2c + local_58.y;
    local_20 = (int)(short)((int)((int)sVar5 + ((int)sVar5 >> 0x1f & 3U)) >> 2);
    local_40 = local_48 - local_20;
    local_3c = sVar3 / 2 + local_58.y;
    local_34 = (int)param_2[3];
    local_20 = local_20 + local_28;
    local_2c = local_34 - local_2c;
    local_10 = local_28 + sVar5 / 3;
    local_44 = local_4c;
    local_38 = local_48;
    local_30 = local_58.x;
    local_24 = local_34;
    local_1c = local_3c;
    local_18 = local_28;
    local_14 = local_4c;
    local_c = local_4c;
    local_8 = local_58.x;
    local_4 = local_58.y;
    pHVar6 = CreatePolygonRgn(&local_58,0xb,2);
    return pHVar6;
  }
  if (*(int *)(param_3 + 0x58) != 0) {
    local_58.x = FUN_11002840(param_1,*(int *)(param_3 + 0x58));
    if ((((int)param_2[3] - (int)*(short *)(param_3 + 0x62)) + (int)*(short *)(param_3 + 0x5e) ==
         (int)param_2[1]) &&
       (((int)*(short *)(param_3 + 0x60) - (int)*(short *)(param_3 + 0x5c)) + (int)*param_2 ==
        (int)param_2[2])) {
      pHVar6 = CreatePolygonRgn((POINT *)local_58.x,(int)*(short *)(param_3 + 0x56),2);
    }
    else {
      uVar4 = FUN_110026d0(param_1,(int)*(short *)(param_3 + 0x56) << 3);
      pptl = (POINT *)FUN_11002840(param_1,uVar4);
      sVar3 = 0;
      if (0 < *(short *)(param_3 + 0x56)) {
        do {
          sVar5 = sVar3 + 1;
          pPVar1 = pptl + sVar3;
          LVar2 = ((POINT *)(local_58.x + sVar3 * 8))->y;
          pPVar1->x = ((POINT *)(local_58.x + sVar3 * 8))->x;
          pPVar1->y = LVar2;
          FUN_11024280(&pPVar1->x,(short *)(param_3 + 0x5c),param_2);
          sVar3 = sVar5;
        } while (sVar5 < *(short *)(param_3 + 0x56));
      }
      pHVar6 = CreatePolygonRgn(pptl,(int)*(short *)(param_3 + 0x56),2);
      FUN_110028a0(param_1,uVar4);
      FUN_11002730(param_1,uVar4);
    }
    FUN_110028a0(param_1,*(undefined4 *)(param_3 + 0x58));
  }
  OffsetRgn(pHVar6,(int)*param_2,(int)param_2[1]);
  return pHVar6;
}


