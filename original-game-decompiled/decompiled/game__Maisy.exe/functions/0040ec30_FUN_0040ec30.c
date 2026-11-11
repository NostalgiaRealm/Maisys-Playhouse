
/* ==== FUN_0040ec30 @ 0040ec30 ==== 
 * signature: undefined __cdecl FUN_0040ec30(undefined4 * param_1, undefined4 * param_2, uint param_3, byte * param_4, int param_5)
 * body: 0040ec30-0040ee24
 */

void __cdecl
FUN_0040ec30(undefined4 *param_1,undefined4 *param_2,uint param_3,byte *param_4,int param_5)

{
  byte bVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint local_8;
  
  puVar3 = param_2;
  puVar4 = param_1;
  if (param_5 == 0) goto switchD_0040ec6c_default;
  bVar1 = *param_4;
  puVar3 = param_2 + (8 - param_5);
  puVar4 = param_1 + (8 - param_5);
  param_4 = param_4 + 1;
  switch(param_5) {
  case 1:
    if ((bVar1 & 2) != 0) {
      param_2[1 - param_5] = param_1[1 - param_5];
    }
    uVar2 = param_3 - 1;
    param_3 = 0;
    if (uVar2 == 0) goto switchD_0040ec6c_default;
    break;
  case 2:
    uVar2 = param_3;
    break;
  case 3:
    uVar2 = param_3;
    goto LAB_0040ec9c;
  case 4:
    uVar2 = param_3;
    goto LAB_0040ecaf;
  case 5:
    uVar2 = param_3;
    goto LAB_0040ecc2;
  case 6:
    uVar2 = param_3;
    goto LAB_0040ecd5;
  case 7:
    uVar2 = param_3;
    goto LAB_0040ece8;
  default:
    goto switchD_0040ec6c_default;
  }
  if ((bVar1 & 4) != 0) {
    param_2[2 - param_5] = param_1[2 - param_5];
  }
  uVar2 = uVar2 - 1;
  param_3 = 0;
  if (uVar2 != 0) {
LAB_0040ec9c:
    if ((bVar1 & 8) != 0) {
      param_2[3 - param_5] = param_1[3 - param_5];
    }
    uVar2 = uVar2 - 1;
    param_3 = 0;
    if (uVar2 != 0) {
LAB_0040ecaf:
      if ((bVar1 & 0x10) != 0) {
        param_2[4 - param_5] = param_1[4 - param_5];
      }
      uVar2 = uVar2 - 1;
      param_3 = 0;
      if (uVar2 != 0) {
LAB_0040ecc2:
        if ((bVar1 & 0x20) != 0) {
          param_2[5 - param_5] = param_1[5 - param_5];
        }
        uVar2 = uVar2 - 1;
        param_3 = 0;
        if (uVar2 != 0) {
LAB_0040ecd5:
          if ((bVar1 & 0x40) != 0) {
            param_2[6 - param_5] = param_1[6 - param_5];
          }
          uVar2 = uVar2 - 1;
          param_3 = 0;
          if (uVar2 != 0) {
LAB_0040ece8:
            if ((bVar1 & 0x80) != 0) {
              param_2[7 - param_5] = param_1[7 - param_5];
            }
            param_3 = uVar2 - 1;
          }
        }
      }
    }
  }
switchD_0040ec6c_default:
  if (7 < (int)param_3) {
    local_8 = param_3 >> 3;
    param_3 = param_3 + local_8 * -8;
    do {
      bVar1 = *param_4;
      param_4 = param_4 + 1;
      if (bVar1 != 0) {
        if (bVar1 == 0xff) {
          *puVar3 = *puVar4;
          puVar3[1] = puVar4[1];
          puVar3[2] = puVar4[2];
          puVar3[3] = puVar4[3];
          puVar3[4] = puVar4[4];
          puVar3[5] = puVar4[5];
          puVar3[6] = puVar4[6];
          puVar3[7] = puVar4[7];
        }
        else {
          if ((bVar1 & 1) != 0) {
            *puVar3 = *puVar4;
          }
          if ((bVar1 & 2) != 0) {
            puVar3[1] = puVar4[1];
          }
          if ((bVar1 & 4) != 0) {
            puVar3[2] = puVar4[2];
          }
          if ((bVar1 & 8) != 0) {
            puVar3[3] = puVar4[3];
          }
          if ((bVar1 & 0x10) != 0) {
            puVar3[4] = puVar4[4];
          }
          if ((bVar1 & 0x20) != 0) {
            puVar3[5] = puVar4[5];
          }
          if ((bVar1 & 0x40) != 0) {
            puVar3[6] = puVar4[6];
          }
          if ((bVar1 & 0x80) != 0) {
            puVar3[7] = puVar4[7];
          }
        }
      }
      puVar4 = puVar4 + 8;
      puVar3 = puVar3 + 8;
      local_8 = local_8 - 1;
    } while (local_8 != 0);
  }
  if ((0 < (int)param_3) && (bVar1 = *param_4, bVar1 != 0)) {
    switch(param_3) {
    case 7:
      if ((bVar1 & 0x40) != 0) {
        puVar3[6] = puVar4[6];
      }
    case 6:
      if ((bVar1 & 0x20) != 0) {
        puVar3[5] = puVar4[5];
      }
    case 5:
      if ((bVar1 & 0x10) != 0) {
        puVar3[4] = puVar4[4];
      }
    case 4:
      if ((bVar1 & 8) != 0) {
        puVar3[3] = puVar4[3];
      }
    case 3:
      if ((bVar1 & 4) != 0) {
        puVar3[2] = puVar4[2];
      }
    case 2:
      if ((bVar1 & 2) != 0) {
        puVar3[1] = puVar4[1];
      }
    case 1:
      if ((bVar1 & 1) != 0) {
        *puVar3 = *puVar4;
      }
    }
  }
  return;
}


