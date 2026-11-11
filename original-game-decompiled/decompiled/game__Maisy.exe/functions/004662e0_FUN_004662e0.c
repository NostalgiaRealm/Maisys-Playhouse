
/* ==== FUN_004662e0 @ 004662e0 ==== 
 * signature: undefined __cdecl FUN_004662e0(undefined4 * param_1, undefined4 * param_2, uint param_3, byte * param_4, int param_5)
 * body: 004662e0-004664b3
 */

void __cdecl
FUN_004662e0(undefined4 *param_1,undefined4 *param_2,uint param_3,byte *param_4,int param_5)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  uint local_8;
  
  pbVar2 = param_4;
  if (param_5 == 0) goto switchD_0046631d_default;
  param_2 = (undefined4 *)((int)param_2 + (8 - param_5));
  param_1 = (undefined4 *)((int)param_1 + (8 - param_5));
  pbVar2 = param_4 + 1;
  bVar1 = *param_4;
  switch(param_5) {
  case 1:
    if ((bVar1 & 2) != 0) {
      *(undefined1 *)((int)param_2 + -7) = *(undefined1 *)((int)param_1 + -7);
    }
    uVar3 = param_3 - 1;
    param_3 = 0;
    if (uVar3 == 0) goto switchD_0046631d_default;
    break;
  case 2:
    uVar3 = param_3;
    break;
  case 3:
    uVar3 = param_3;
    goto LAB_00466351;
  case 4:
    uVar3 = param_3;
    goto LAB_00466364;
  case 5:
    uVar3 = param_3;
    goto LAB_00466377;
  case 6:
    uVar3 = param_3;
    goto LAB_0046638a;
  case 7:
    uVar3 = param_3;
    goto LAB_0046639d;
  default:
    goto switchD_0046631d_default;
  }
  if ((bVar1 & 4) != 0) {
    *(undefined1 *)((int)param_2 + -6) = *(undefined1 *)((int)param_1 + -6);
  }
  uVar3 = uVar3 - 1;
  param_3 = 0;
  if (uVar3 != 0) {
LAB_00466351:
    if ((bVar1 & 8) != 0) {
      *(undefined1 *)((int)param_2 + -5) = *(undefined1 *)((int)param_1 + -5);
    }
    uVar3 = uVar3 - 1;
    param_3 = 0;
    if (uVar3 != 0) {
LAB_00466364:
      if ((bVar1 & 0x10) != 0) {
        *(undefined1 *)(param_2 + -1) = *(undefined1 *)(param_1 + -1);
      }
      uVar3 = uVar3 - 1;
      param_3 = 0;
      if (uVar3 != 0) {
LAB_00466377:
        if ((bVar1 & 0x20) != 0) {
          *(undefined1 *)((int)param_2 + -3) = *(undefined1 *)((int)param_1 + -3);
        }
        uVar3 = uVar3 - 1;
        param_3 = 0;
        if (uVar3 != 0) {
LAB_0046638a:
          if ((bVar1 & 0x40) != 0) {
            *(undefined1 *)((int)param_2 + -2) = *(undefined1 *)((int)param_1 + -2);
          }
          uVar3 = uVar3 - 1;
          param_3 = 0;
          if (uVar3 != 0) {
LAB_0046639d:
            if ((bVar1 & 0x80) != 0) {
              *(undefined1 *)((int)param_2 + -1) = *(undefined1 *)((int)param_1 + -1);
            }
            param_3 = uVar3 - 1;
          }
        }
      }
    }
  }
switchD_0046631d_default:
  if (7 < (int)param_3) {
    local_8 = param_3 >> 3;
    param_3 = param_3 + local_8 * -8;
    do {
      bVar1 = *pbVar2;
      pbVar2 = pbVar2 + 1;
      if (bVar1 != 0) {
        if (bVar1 == 0xff) {
          *param_2 = *param_1;
          param_2[1] = param_1[1];
        }
        else {
          if ((bVar1 & 1) != 0) {
            *(undefined1 *)param_2 = *(undefined1 *)param_1;
          }
          if ((bVar1 & 2) != 0) {
            *(undefined1 *)((int)param_2 + 1) = *(undefined1 *)((int)param_1 + 1);
          }
          if ((bVar1 & 4) != 0) {
            *(undefined1 *)((int)param_2 + 2) = *(undefined1 *)((int)param_1 + 2);
          }
          if ((bVar1 & 8) != 0) {
            *(undefined1 *)((int)param_2 + 3) = *(undefined1 *)((int)param_1 + 3);
          }
          if ((bVar1 & 0x10) != 0) {
            *(undefined1 *)(param_2 + 1) = *(undefined1 *)(param_1 + 1);
          }
          if ((bVar1 & 0x20) != 0) {
            *(undefined1 *)((int)param_2 + 5) = *(undefined1 *)((int)param_1 + 5);
          }
          if ((bVar1 & 0x40) != 0) {
            *(undefined1 *)((int)param_2 + 6) = *(undefined1 *)((int)param_1 + 6);
          }
          if ((bVar1 & 0x80) != 0) {
            *(undefined1 *)((int)param_2 + 7) = *(undefined1 *)((int)param_1 + 7);
          }
        }
      }
      param_1 = param_1 + 2;
      param_2 = param_2 + 2;
      local_8 = local_8 - 1;
    } while (local_8 != 0);
  }
  if ((0 < (int)param_3) && (bVar1 = *pbVar2, bVar1 != 0)) {
    switch(param_3) {
    case 7:
      if ((bVar1 & 0x40) != 0) {
        *(undefined1 *)((int)param_2 + 6) = *(undefined1 *)((int)param_1 + 6);
      }
    case 6:
      if ((bVar1 & 0x20) != 0) {
        *(undefined1 *)((int)param_2 + 5) = *(undefined1 *)((int)param_1 + 5);
      }
    case 5:
      if ((bVar1 & 0x10) != 0) {
        *(undefined1 *)(param_2 + 1) = *(undefined1 *)(param_1 + 1);
      }
    case 4:
      if ((bVar1 & 8) != 0) {
        *(undefined1 *)((int)param_2 + 3) = *(undefined1 *)((int)param_1 + 3);
      }
    case 3:
      if ((bVar1 & 4) != 0) {
        *(undefined1 *)((int)param_2 + 2) = *(undefined1 *)((int)param_1 + 2);
      }
    case 2:
      if ((bVar1 & 2) != 0) {
        *(undefined1 *)((int)param_2 + 1) = *(undefined1 *)((int)param_1 + 1);
      }
    case 1:
      if ((bVar1 & 1) != 0) {
        *(undefined1 *)param_2 = *(undefined1 *)param_1;
      }
    }
  }
  return;
}


