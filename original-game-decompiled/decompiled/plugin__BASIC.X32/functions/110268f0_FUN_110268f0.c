
/* ==== FUN_110268f0 @ 110268f0 ==== 
 * signature: undefined __cdecl FUN_110268f0(undefined4 * param_1, undefined4 * param_2, uint param_3, byte * param_4, int param_5)
 * body: 110268f0-11026aed
 */

void __cdecl
FUN_110268f0(undefined4 *param_1,undefined4 *param_2,uint param_3,byte *param_4,int param_5)

{
  byte bVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  puVar2 = param_2;
  puVar4 = param_1;
  if (param_5 == 0) goto switchD_1102692a_default;
  bVar1 = *param_4;
  puVar2 = (undefined4 *)((int)param_2 + param_5 * -2 + 0x10);
  puVar4 = (undefined4 *)((int)param_1 + param_5 * -2 + 0x10);
  param_4 = param_4 + 1;
  switch(param_5) {
  case 1:
    if ((bVar1 & 2) != 0) {
      *(undefined2 *)((int)param_2 + param_5 * -2 + 2) =
           *(undefined2 *)((int)param_1 + param_5 * -2 + 2);
    }
    uVar3 = param_3 - 1;
    param_3 = 0;
    if (uVar3 == 0) goto switchD_1102692a_default;
    break;
  case 2:
    uVar3 = param_3;
    break;
  case 3:
    uVar3 = param_3;
    goto LAB_11026963;
  case 4:
    uVar3 = param_3;
    goto LAB_11026978;
  case 5:
    uVar3 = param_3;
    goto LAB_1102698d;
  case 6:
    uVar3 = param_3;
    goto LAB_110269a2;
  case 7:
    uVar3 = param_3;
    goto LAB_110269b7;
  default:
    goto switchD_1102692a_default;
  }
  if ((bVar1 & 4) != 0) {
    *(undefined2 *)((int)param_2 + param_5 * -2 + 4) =
         *(undefined2 *)((int)param_1 + param_5 * -2 + 4);
  }
  uVar3 = uVar3 - 1;
  param_3 = 0;
  if (uVar3 != 0) {
LAB_11026963:
    if ((bVar1 & 8) != 0) {
      *(undefined2 *)((int)param_2 + param_5 * -2 + 6) =
           *(undefined2 *)((int)param_1 + param_5 * -2 + 6);
    }
    uVar3 = uVar3 - 1;
    param_3 = 0;
    if (uVar3 != 0) {
LAB_11026978:
      if ((bVar1 & 0x10) != 0) {
        *(undefined2 *)((int)param_2 + param_5 * -2 + 8) =
             *(undefined2 *)((int)param_1 + param_5 * -2 + 8);
      }
      uVar3 = uVar3 - 1;
      param_3 = 0;
      if (uVar3 != 0) {
LAB_1102698d:
        if ((bVar1 & 0x20) != 0) {
          *(undefined2 *)((int)param_2 + param_5 * -2 + 10) =
               *(undefined2 *)((int)param_1 + param_5 * -2 + 10);
        }
        uVar3 = uVar3 - 1;
        param_3 = 0;
        if (uVar3 != 0) {
LAB_110269a2:
          if ((bVar1 & 0x40) != 0) {
            *(undefined2 *)((int)param_2 + param_5 * -2 + 0xc) =
                 *(undefined2 *)((int)param_1 + param_5 * -2 + 0xc);
          }
          uVar3 = uVar3 - 1;
          param_3 = 0;
          if (uVar3 != 0) {
LAB_110269b7:
            if ((bVar1 & 0x80) != 0) {
              *(undefined2 *)((int)param_2 + param_5 * -2 + 0xe) =
                   *(undefined2 *)((int)param_1 + param_5 * -2 + 0xe);
            }
            param_3 = uVar3 - 1;
          }
        }
      }
    }
  }
switchD_1102692a_default:
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
        }
        else {
          if ((bVar1 & 1) != 0) {
            *(undefined2 *)puVar2 = *(undefined2 *)puVar4;
          }
          if ((bVar1 & 2) != 0) {
            *(undefined2 *)((int)puVar2 + 2) = *(undefined2 *)((int)puVar4 + 2);
          }
          if ((bVar1 & 4) != 0) {
            *(undefined2 *)(puVar2 + 1) = *(undefined2 *)(puVar4 + 1);
          }
          if ((bVar1 & 8) != 0) {
            *(undefined2 *)((int)puVar2 + 6) = *(undefined2 *)((int)puVar4 + 6);
          }
          if ((bVar1 & 0x10) != 0) {
            *(undefined2 *)(puVar2 + 2) = *(undefined2 *)(puVar4 + 2);
          }
          if ((bVar1 & 0x20) != 0) {
            *(undefined2 *)((int)puVar2 + 10) = *(undefined2 *)((int)puVar4 + 10);
          }
          if ((bVar1 & 0x40) != 0) {
            *(undefined2 *)(puVar2 + 3) = *(undefined2 *)(puVar4 + 3);
          }
          if ((bVar1 & 0x80) != 0) {
            *(undefined2 *)((int)puVar2 + 0xe) = *(undefined2 *)((int)puVar4 + 0xe);
          }
        }
      }
      puVar4 = puVar4 + 4;
      puVar2 = puVar2 + 4;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  if ((0 < (int)param_3) && (bVar1 = *param_4, bVar1 != 0)) {
    switch(param_3) {
    case 7:
      if ((bVar1 & 0x40) != 0) {
        *(undefined2 *)(puVar2 + 3) = *(undefined2 *)(puVar4 + 3);
      }
    case 6:
      if ((bVar1 & 0x20) != 0) {
        *(undefined2 *)((int)puVar2 + 10) = *(undefined2 *)((int)puVar4 + 10);
      }
    case 5:
      if ((bVar1 & 0x10) != 0) {
        *(undefined2 *)(puVar2 + 2) = *(undefined2 *)(puVar4 + 2);
      }
    case 4:
      if ((bVar1 & 8) != 0) {
        *(undefined2 *)((int)puVar2 + 6) = *(undefined2 *)((int)puVar4 + 6);
      }
    case 3:
      if ((bVar1 & 4) != 0) {
        *(undefined2 *)(puVar2 + 1) = *(undefined2 *)(puVar4 + 1);
      }
    case 2:
      if ((bVar1 & 2) != 0) {
        *(undefined2 *)((int)puVar2 + 2) = *(undefined2 *)((int)puVar4 + 2);
      }
    case 1:
      if ((bVar1 & 1) != 0) {
        *(undefined2 *)puVar2 = *(undefined2 *)puVar4;
      }
    }
  }
  return;
}


