
/* ==== FUN_1100d6c0 @ 1100d6c0 ==== 
 * signature: undefined __cdecl FUN_1100d6c0(undefined4 * param_1, undefined4 * param_2, uint param_3, byte * param_4, int param_5)
 * body: 1100d6c0-1100d8ad
 */

void __cdecl
FUN_1100d6c0(undefined4 *param_1,undefined4 *param_2,uint param_3,byte *param_4,int param_5)

{
  byte bVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  puVar2 = param_2;
  puVar4 = param_1;
  if (param_5 == 0) goto switchD_1100d6fa_default;
  bVar1 = *param_4;
  puVar2 = param_2 + (8 - param_5);
  puVar4 = param_1 + (8 - param_5);
  param_4 = param_4 + 1;
  switch(param_5) {
  case 1:
    if ((bVar1 & 2) != 0) {
      param_2[1 - param_5] = param_1[1 - param_5];
    }
    uVar3 = param_3 - 1;
    param_3 = 0;
    if (uVar3 == 0) goto switchD_1100d6fa_default;
    break;
  case 2:
    uVar3 = param_3;
    break;
  case 3:
    uVar3 = param_3;
    goto LAB_1100d72f;
  case 4:
    uVar3 = param_3;
    goto LAB_1100d742;
  case 5:
    uVar3 = param_3;
    goto LAB_1100d755;
  case 6:
    uVar3 = param_3;
    goto LAB_1100d768;
  case 7:
    uVar3 = param_3;
    goto LAB_1100d77b;
  default:
    goto switchD_1100d6fa_default;
  }
  if ((bVar1 & 4) != 0) {
    param_2[2 - param_5] = param_1[2 - param_5];
  }
  uVar3 = uVar3 - 1;
  param_3 = 0;
  if (uVar3 != 0) {
LAB_1100d72f:
    if ((bVar1 & 8) != 0) {
      param_2[3 - param_5] = param_1[3 - param_5];
    }
    uVar3 = uVar3 - 1;
    param_3 = 0;
    if (uVar3 != 0) {
LAB_1100d742:
      if ((bVar1 & 0x10) != 0) {
        param_2[4 - param_5] = param_1[4 - param_5];
      }
      uVar3 = uVar3 - 1;
      param_3 = 0;
      if (uVar3 != 0) {
LAB_1100d755:
        if ((bVar1 & 0x20) != 0) {
          param_2[5 - param_5] = param_1[5 - param_5];
        }
        uVar3 = uVar3 - 1;
        param_3 = 0;
        if (uVar3 != 0) {
LAB_1100d768:
          if ((bVar1 & 0x40) != 0) {
            param_2[6 - param_5] = param_1[6 - param_5];
          }
          uVar3 = uVar3 - 1;
          param_3 = 0;
          if (uVar3 != 0) {
LAB_1100d77b:
            if ((bVar1 & 0x80) != 0) {
              param_2[7 - param_5] = param_1[7 - param_5];
            }
            param_3 = uVar3 - 1;
          }
        }
      }
    }
  }
switchD_1100d6fa_default:
  if (7 < (int)param_3) {
    uVar3 = param_3 >> 3;
    param_3 = param_3 + uVar3 * -8;
    do {
      bVar1 = *param_4;
      param_4 = param_4 + 1;
      if (bVar1 != 0) {
        if (bVar1 == 0xff) {
          *puVar2 = *puVar4;
          puVar2[1] = puVar4[1];
          puVar2[2] = puVar4[2];
          puVar2[3] = puVar4[3];
          puVar2[4] = puVar4[4];
          puVar2[5] = puVar4[5];
          puVar2[6] = puVar4[6];
          puVar2[7] = puVar4[7];
        }
        else {
          if ((bVar1 & 1) != 0) {
            *puVar2 = *puVar4;
          }
          if ((bVar1 & 2) != 0) {
            puVar2[1] = puVar4[1];
          }
          if ((bVar1 & 4) != 0) {
            puVar2[2] = puVar4[2];
          }
          if ((bVar1 & 8) != 0) {
            puVar2[3] = puVar4[3];
          }
          if ((bVar1 & 0x10) != 0) {
            puVar2[4] = puVar4[4];
          }
          if ((bVar1 & 0x20) != 0) {
            puVar2[5] = puVar4[5];
          }
          if ((bVar1 & 0x40) != 0) {
            puVar2[6] = puVar4[6];
          }
          if ((bVar1 & 0x80) != 0) {
            puVar2[7] = puVar4[7];
          }
        }
      }
      puVar4 = puVar4 + 8;
      puVar2 = puVar2 + 8;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  if ((0 < (int)param_3) && (bVar1 = *param_4, bVar1 != 0)) {
    switch(param_3) {
    case 7:
      if ((bVar1 & 0x40) != 0) {
        puVar2[6] = puVar4[6];
      }
    case 6:
      if ((bVar1 & 0x20) != 0) {
        puVar2[5] = puVar4[5];
      }
    case 5:
      if ((bVar1 & 0x10) != 0) {
        puVar2[4] = puVar4[4];
      }
    case 4:
      if ((bVar1 & 8) != 0) {
        puVar2[3] = puVar4[3];
      }
    case 3:
      if ((bVar1 & 4) != 0) {
        puVar2[2] = puVar4[2];
      }
    case 2:
      if ((bVar1 & 2) != 0) {
        puVar2[1] = puVar4[1];
      }
    case 1:
      if ((bVar1 & 1) != 0) {
        *puVar2 = *puVar4;
      }
    }
  }
  return;
}


