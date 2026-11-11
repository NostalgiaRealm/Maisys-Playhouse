
/* ==== FUN_004166b0 @ 004166b0 ==== 
 * signature: undefined4 __cdecl FUN_004166b0(short * param_1, undefined2 * param_2)
 * body: 004166b0-004169a0
 */

uint __cdecl FUN_004166b0(short *param_1,undefined2 *param_2)

{
  short sVar1;
  char cVar2;
  uint uVar3;
  int3 iVar6;
  uint uVar4;
  undefined4 uVar5;
  
  uVar3 = (uint)*param_1;
  cVar2 = (char)((ushort)*param_1 >> 8);
  iVar6 = (int3)cVar2;
  uVar4 = uVar3;
  if ((int)uVar3 < 10) {
    if (uVar3 == 9) {
      *param_2 = 0x1e;
      *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 1);
      if (*(int *)(param_1 + 3) != 0) {
        *(int *)(param_2 + 3) = *(int *)(param_1 + 3);
        uVar5 = *(undefined4 *)(param_1 + 5);
        *(undefined4 *)(param_2 + 5) = uVar5;
        return CONCAT31((int3)((uint)uVar5 >> 8),1);
      }
      *(undefined4 *)(param_2 + 3) = 1;
      uVar5 = *(undefined4 *)(param_1 + 5);
      *(undefined4 *)(param_2 + 5) = uVar5;
      return CONCAT31((int3)((uint)uVar5 >> 8),1);
    }
    if (uVar3 == 0) {
      *param_2 = 0;
      return CONCAT31(iVar6,1);
    }
    if (uVar3 == 1) {
      *param_2 = 1;
      uVar5 = *(undefined4 *)(param_1 + 1);
      *(undefined4 *)(param_2 + 1) = uVar5;
      return CONCAT31((int3)((uint)uVar5 >> 8),1);
    }
  }
  else if ((int)uVar3 < 0x65) {
    if (uVar3 == 100) {
      *param_2 = 0x1d;
      uVar5 = *(undefined4 *)(param_1 + 3);
      *(undefined4 *)(param_2 + 1) = uVar5;
      *(undefined4 *)(param_2 + 3) = *(undefined4 *)(param_1 + 1);
      return CONCAT31((int3)((uint)uVar5 >> 8),1);
    }
    uVar4 = uVar3 - 10;
    switch(uVar3) {
    case 10:
      *param_2 = 0x10;
      uVar5 = *(undefined4 *)(param_1 + 1);
      *(undefined4 *)(param_2 + 1) = uVar5;
      return CONCAT31((int3)((uint)uVar5 >> 8),1);
    case 0xb:
      *param_2 = 0x11;
      uVar5 = *(undefined4 *)(param_1 + 1);
      *(undefined4 *)(param_2 + 1) = uVar5;
      *(undefined4 *)(param_2 + 3) = *(undefined4 *)(param_1 + 3);
      return CONCAT31((int3)((uint)uVar5 >> 8),1);
    case 0xd:
      *param_2 = 0x13;
      uVar5 = *(undefined4 *)(param_1 + 3);
      *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 1);
      *(undefined4 *)(param_2 + 3) = uVar5;
      return CONCAT31((int3)((uint)uVar5 >> 8),1);
    case 0xf:
      *param_2 = 0x15;
      uVar5 = *(undefined4 *)(param_1 + 3);
      *(undefined4 *)(param_2 + 3) = uVar5;
      *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 1);
      return CONCAT31((int3)((uint)uVar5 >> 8),1);
    case 0x10:
      *param_2 = 0x16;
      *(undefined4 *)(param_2 + 3) = *(undefined4 *)(param_1 + 3);
      *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 1);
      uVar5 = *(undefined4 *)(param_1 + 7);
      *(undefined4 *)(param_2 + 7) = uVar5;
      *(undefined4 *)(param_2 + 5) = *(undefined4 *)(param_1 + 5);
      return CONCAT31((int3)((uint)uVar5 >> 8),1);
    case 0x14:
      *param_2 = 0x1a;
      *(char *)(param_2 + 1) = '\x01' - (param_1[1] == 0);
      return CONCAT31((int3)(uVar3 - 10 >> 8),1);
    case 0x17:
      *param_2 = 1;
      uVar5 = *(undefined4 *)(param_1 + 1);
      *(undefined4 *)(param_2 + 1) = uVar5;
      return CONCAT31((int3)((uint)uVar5 >> 8),1);
    }
  }
  else if ((int)uVar3 < 0x6a) {
    if (uVar3 == 0x69) {
      if (*(int *)(param_1 + 1) == 0) {
        *param_2 = 0x1c;
        *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 1);
        uVar5 = 0;
        if (*(undefined4 **)(param_1 + 7) != (undefined4 *)0x0) {
          uVar5 = **(undefined4 **)(param_1 + 7);
          *(undefined4 *)(param_2 + 3) = uVar5;
        }
        *(undefined4 *)(param_2 + 5) = 0;
        return CONCAT31((int3)((uint)uVar5 >> 8),1);
      }
      if ((*(byte *)(*(int *)(param_1 + 1) + 0x1f) & 4) != 0) {
        *param_2 = 0x19;
        uVar5 = *(undefined4 *)(param_1 + 1);
        *(undefined4 *)(param_2 + 1) = uVar5;
        return CONCAT31((int3)((uint)uVar5 >> 8),1);
      }
      *param_2 = 3;
      uVar5 = *(undefined4 *)(param_1 + 1);
      *(undefined4 *)(param_2 + 1) = uVar5;
      return CONCAT31((int3)((uint)uVar5 >> 8),1);
    }
    if (uVar3 == 0x66) {
      *param_2 = 0xd;
      uVar5 = *(undefined4 *)(param_1 + 7);
      *(undefined4 *)(param_2 + 2) = uVar5;
      param_2[1] = (short)*(undefined4 *)(param_1 + 3);
      return CONCAT31((int3)((uint)uVar5 >> 8),1);
    }
  }
  else if ((int)uVar3 < 0x6f) {
    if (uVar3 == 0x6e) {
      *param_2 = 0x1b;
      return CONCAT31(iVar6,1);
    }
    if (uVar3 == 0x6a) {
      *param_2 = 0x17;
      return CONCAT31(iVar6,1);
    }
  }
  else if ((int)uVar3 < 0x77) {
    if (uVar3 == 0x76) {
      *param_2 = 0x1f;
      uVar5 = *(undefined4 *)(param_1 + 7);
      *(undefined4 *)(param_2 + 2) = uVar5;
      param_2[1] = (short)*(undefined4 *)(param_1 + 3);
      return CONCAT31((int3)((uint)uVar5 >> 8),1);
    }
    if (uVar3 == 0x73) {
      *param_2 = 0x1c;
      uVar5 = *(undefined4 *)(param_1 + 1);
      *(undefined4 *)(param_2 + 1) = uVar5;
      *(undefined4 *)(param_2 + 3) = *(undefined4 *)(param_1 + 3);
      *(undefined4 *)(param_2 + 5) = *(undefined4 *)(param_1 + 5);
      return CONCAT31((int3)((uint)uVar5 >> 8),1);
    }
  }
  else {
    if (uVar3 == 0x7c) {
      *param_2 = 6;
      *(char *)(param_2 + 2) = (char)param_1[1];
      *(undefined1 *)((int)param_2 + 5) = *(undefined1 *)((int)param_1 + 3);
      param_2[1] = (short)*(undefined4 *)(param_1 + 3);
      sVar1 = param_1[2];
      param_2[5] = sVar1;
      *(undefined4 *)(param_2 + 3) = *(undefined4 *)(param_1 + 5);
      return CONCAT31((int3)(CONCAT22(cVar2 >> 7,sVar1) >> 8),1);
    }
    if (uVar3 == 0x32d5) {
      uVar5 = FUN_00417460(param_1,param_2);
      return CONCAT31((int3)((uint)uVar5 >> 8),1);
    }
  }
  *param_2 = 0;
  return uVar4 & 0xffffff00;
}


