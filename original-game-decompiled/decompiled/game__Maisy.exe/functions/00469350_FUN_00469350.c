
/* ==== FUN_00469350 @ 00469350 ==== 
 * signature: undefined __cdecl FUN_00469350(undefined4 * param_1, undefined4 * param_2, uint param_3, byte * param_4, int param_5)
 * body: 00469350-0046955c
 */

void __cdecl
FUN_00469350(undefined4 *param_1,undefined4 *param_2,uint param_3,byte *param_4,int param_5)

{
  byte bVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint local_8;
  
  puVar3 = param_2;
  puVar4 = param_1;
  if (param_5 == 0) goto switchD_0046938c_default;
  bVar1 = *param_4;
  puVar3 = (undefined4 *)((int)param_2 + param_5 * -2 + 0x10);
  puVar4 = (undefined4 *)((int)param_1 + param_5 * -2 + 0x10);
  param_4 = param_4 + 1;
  switch(param_5) {
  case 1:
    if ((bVar1 & 2) != 0) {
      *(undefined2 *)((int)param_2 + param_5 * -2 + 2) =
           *(undefined2 *)((int)param_1 + param_5 * -2 + 2);
    }
    uVar2 = param_3 - 1;
    param_3 = 0;
    if (uVar2 == 0) goto switchD_0046938c_default;
    break;
  case 2:
    uVar2 = param_3;
    break;
  case 3:
    uVar2 = param_3;
    goto LAB_004693c4;
  case 4:
    uVar2 = param_3;
    goto LAB_004693d9;
  case 5:
    uVar2 = param_3;
    goto LAB_004693ee;
  case 6:
    uVar2 = param_3;
    goto LAB_00469403;
  case 7:
    uVar2 = param_3;
    goto LAB_00469418;
  default:
    goto switchD_0046938c_default;
  }
  if ((bVar1 & 4) != 0) {
    *(undefined2 *)((int)param_2 + param_5 * -2 + 4) =
         *(undefined2 *)((int)param_1 + param_5 * -2 + 4);
  }
  uVar2 = uVar2 - 1;
  param_3 = 0;
  if (uVar2 != 0) {
LAB_004693c4:
    if ((bVar1 & 8) != 0) {
      *(undefined2 *)((int)param_2 + param_5 * -2 + 6) =
           *(undefined2 *)((int)param_1 + param_5 * -2 + 6);
    }
    uVar2 = uVar2 - 1;
    param_3 = 0;
    if (uVar2 != 0) {
LAB_004693d9:
      if ((bVar1 & 0x10) != 0) {
        *(undefined2 *)((int)param_2 + param_5 * -2 + 8) =
             *(undefined2 *)((int)param_1 + param_5 * -2 + 8);
      }
      uVar2 = uVar2 - 1;
      param_3 = 0;
      if (uVar2 != 0) {
LAB_004693ee:
        if ((bVar1 & 0x20) != 0) {
          *(undefined2 *)((int)param_2 + param_5 * -2 + 10) =
               *(undefined2 *)((int)param_1 + param_5 * -2 + 10);
        }
        uVar2 = uVar2 - 1;
        param_3 = 0;
        if (uVar2 != 0) {
LAB_00469403:
          if ((bVar1 & 0x40) != 0) {
            *(undefined2 *)((int)param_2 + param_5 * -2 + 0xc) =
                 *(undefined2 *)((int)param_1 + param_5 * -2 + 0xc);
          }
          uVar2 = uVar2 - 1;
          param_3 = 0;
          if (uVar2 != 0) {
LAB_00469418:
            if ((bVar1 & 0x80) != 0) {
              *(undefined2 *)((int)param_2 + param_5 * -2 + 0xe) =
                   *(undefined2 *)((int)param_1 + param_5 * -2 + 0xe);
            }
            param_3 = uVar2 - 1;
          }
        }
      }
    }
  }
switchD_0046938c_default:
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
        }
        else {
          if ((bVar1 & 1) != 0) {
            *(undefined2 *)puVar3 = *(undefined2 *)puVar4;
          }
          if ((bVar1 & 2) != 0) {
            *(undefined2 *)((int)puVar3 + 2) = *(undefined2 *)((int)puVar4 + 2);
          }
          if ((bVar1 & 4) != 0) {
            *(undefined2 *)(puVar3 + 1) = *(undefined2 *)(puVar4 + 1);
          }
          if ((bVar1 & 8) != 0) {
            *(undefined2 *)((int)puVar3 + 6) = *(undefined2 *)((int)puVar4 + 6);
          }
          if ((bVar1 & 0x10) != 0) {
            *(undefined2 *)(puVar3 + 2) = *(undefined2 *)(puVar4 + 2);
          }
          if ((bVar1 & 0x20) != 0) {
            *(undefined2 *)((int)puVar3 + 10) = *(undefined2 *)((int)puVar4 + 10);
          }
          if ((bVar1 & 0x40) != 0) {
            *(undefined2 *)(puVar3 + 3) = *(undefined2 *)(puVar4 + 3);
          }
          if ((bVar1 & 0x80) != 0) {
            *(undefined2 *)((int)puVar3 + 0xe) = *(undefined2 *)((int)puVar4 + 0xe);
          }
        }
      }
      puVar4 = puVar4 + 4;
      puVar3 = puVar3 + 4;
      local_8 = local_8 - 1;
    } while (local_8 != 0);
  }
  if ((0 < (int)param_3) && (bVar1 = *param_4, bVar1 != 0)) {
    switch(param_3) {
    case 7:
      if ((bVar1 & 0x40) != 0) {
        *(undefined2 *)(puVar3 + 3) = *(undefined2 *)(puVar4 + 3);
      }
    case 6:
      if ((bVar1 & 0x20) != 0) {
        *(undefined2 *)((int)puVar3 + 10) = *(undefined2 *)((int)puVar4 + 10);
      }
    case 5:
      if ((bVar1 & 0x10) != 0) {
        *(undefined2 *)(puVar3 + 2) = *(undefined2 *)(puVar4 + 2);
      }
    case 4:
      if ((bVar1 & 8) != 0) {
        *(undefined2 *)((int)puVar3 + 6) = *(undefined2 *)((int)puVar4 + 6);
      }
    case 3:
      if ((bVar1 & 4) != 0) {
        *(undefined2 *)(puVar3 + 1) = *(undefined2 *)(puVar4 + 1);
      }
    case 2:
      if ((bVar1 & 2) != 0) {
        *(undefined2 *)((int)puVar3 + 2) = *(undefined2 *)((int)puVar4 + 2);
      }
    case 1:
      if ((bVar1 & 1) != 0) {
        *(undefined2 *)puVar3 = *(undefined2 *)puVar4;
      }
    }
  }
  return;
}


