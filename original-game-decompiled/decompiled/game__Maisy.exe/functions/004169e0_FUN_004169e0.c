
/* ==== FUN_004169e0 @ 004169e0 ==== 
 * signature: undefined4 __cdecl FUN_004169e0(short * param_1, undefined2 * param_2, undefined4 param_3)
 * body: 004169e0-00416cae
 */

int __cdecl FUN_004169e0(short *param_1,undefined2 *param_2,undefined4 param_3)

{
  int *piVar1;
  char cVar2;
  byte bVar3;
  short sVar4;
  short sVar5;
  uint uVar6;
  int3 iVar8;
  undefined4 uVar7;
  char *pcVar10;
  undefined3 uVar9;
  
  sVar4 = *param_1;
  uVar6 = (uint)sVar4;
  cVar2 = (char)((ushort)sVar4 >> 8);
  if ((int)uVar6 < 0x1fe) {
    if (uVar6 == 0x1fd) {
      uVar7 = FUN_00417090(param_2,(int)param_1);
      return CONCAT31((int3)((uint)uVar7 >> 8),1);
    }
    if (uVar6 < 0x20) {
      iVar8 = (int3)cVar2;
      uVar9 = (undefined3)((uint)param_3 >> 8);
      switch(uVar6) {
      case 0:
        *param_2 = 0;
        return CONCAT31(iVar8,1);
      case 1:
        *param_2 = 1;
        uVar7 = *(undefined4 *)(param_1 + 1);
        *(undefined4 *)(param_2 + 1) = uVar7;
        return CONCAT31((int3)((uint)uVar7 >> 8),1);
      case 3:
        *param_2 = 0x69;
        *(undefined4 *)(param_2 + 3) = 0;
        *(undefined4 *)(param_2 + 5) = 0;
        uVar7 = *(undefined4 *)(param_1 + 1);
        *(undefined4 *)(param_2 + 1) = uVar7;
        *(undefined4 *)(param_2 + 7) = 0;
        return CONCAT31((int3)((uint)uVar7 >> 8),1);
      case 6:
        *param_2 = 0x7c;
        *(char *)(param_2 + 1) = (char)param_1[2];
        *(undefined1 *)((int)param_2 + 3) = *(undefined1 *)((int)param_1 + 5);
        *(int *)(param_2 + 3) = (int)param_1[1];
        sVar4 = param_1[5];
        param_2[2] = sVar4;
        *(undefined4 *)(param_2 + 5) = *(undefined4 *)(param_1 + 3);
        return CONCAT31((int3)(CONCAT22(cVar2 >> 7,sVar4) >> 8),1);
      case 7:
        *param_2 = 10;
        sVar5 = param_1[2];
        param_2[1] = sVar5;
        param_2[2] = param_1[3];
        return CONCAT31((int3)(CONCAT22(sVar4 >> 0xf,sVar5) >> 8),1);
      case 0xd:
        *param_2 = 0x66;
        piVar1 = (int *)(param_2 + 5);
        *(undefined4 *)(param_2 + 7) = *(undefined4 *)(param_1 + 2);
        if (*(char **)(param_1 + 2) == (char *)0x0) {
          *piVar1 = 0;
        }
        else {
          uVar6 = 0xffffffff;
          pcVar10 = *(char **)(param_1 + 2);
          do {
            if (uVar6 == 0) break;
            uVar6 = uVar6 - 1;
            cVar2 = *pcVar10;
            pcVar10 = pcVar10 + 1;
          } while (cVar2 != '\0');
          *piVar1 = ~uVar6 - 1;
        }
        if (*(int *)(param_2 + 7) != 0) {
          *(int *)(param_2 + 3) = *piVar1 + 1;
          *(undefined4 *)(param_2 + 1) = param_3;
          return CONCAT31(uVar9,1);
        }
        *(undefined4 *)(param_2 + 1) = param_3;
        *(undefined4 *)(param_2 + 3) = 0;
        return CONCAT31(uVar9,1);
      case 0x10:
        *param_2 = 10;
        uVar7 = *(undefined4 *)(param_1 + 1);
        *(undefined4 *)(param_2 + 1) = uVar7;
        return CONCAT31((int3)((uint)uVar7 >> 8),1);
      case 0x11:
        *param_2 = 0xb;
        uVar7 = *(undefined4 *)(param_1 + 1);
        *(undefined4 *)(param_2 + 1) = uVar7;
        *(undefined4 *)(param_2 + 3) = *(undefined4 *)(param_1 + 3);
        return CONCAT31((int3)((uint)uVar7 >> 8),1);
      case 0x13:
        *param_2 = 0xd;
        uVar7 = *(undefined4 *)(param_1 + 3);
        *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 1);
        *(undefined4 *)(param_2 + 3) = uVar7;
        return CONCAT31((int3)((uint)uVar7 >> 8),1);
      case 0x15:
        *param_2 = 0xf;
        uVar7 = *(undefined4 *)(param_1 + 3);
        *(undefined4 *)(param_2 + 3) = uVar7;
        *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 1);
        return CONCAT31((int3)((uint)uVar7 >> 8),1);
      case 0x16:
        *param_2 = 0x10;
        *(undefined4 *)(param_2 + 3) = *(undefined4 *)(param_1 + 3);
        *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 1);
        uVar7 = *(undefined4 *)(param_1 + 7);
        *(undefined4 *)(param_2 + 7) = uVar7;
        *(undefined4 *)(param_2 + 5) = *(undefined4 *)(param_1 + 5);
        *(undefined4 *)(param_2 + 9) = 0;
        *(undefined4 *)(param_2 + 0xb) = 0x408f4000;
        return CONCAT31((int3)((uint)uVar7 >> 8),1);
      case 0x17:
        *param_2 = 0x6a;
        return CONCAT31(iVar8,1);
      case 0x19:
        *param_2 = 0x69;
        *(undefined4 *)(param_2 + 3) = 0;
        *(undefined4 *)(param_2 + 5) = 0;
        uVar7 = *(undefined4 *)(param_1 + 1);
        *(undefined4 *)(param_2 + 1) = uVar7;
        *(undefined4 *)(param_2 + 7) = 0;
        return CONCAT31((int3)((uint)uVar7 >> 8),1);
      case 0x1a:
        *param_2 = 0x14;
        bVar3 = *(byte *)(param_1 + 1);
        param_2[1] = (ushort)bVar3;
        return CONCAT31((int3)(CONCAT22(sVar4 >> 0xf,(ushort)bVar3) >> 8),1);
      case 0x1b:
        *param_2 = 0x6e;
        return CONCAT31(iVar8,1);
      case 0x1c:
        *param_2 = 0x73;
        uVar7 = *(undefined4 *)(param_1 + 1);
        *(undefined4 *)(param_2 + 1) = uVar7;
        *(undefined4 *)(param_2 + 3) = *(undefined4 *)(param_1 + 3);
        *(undefined4 *)(param_2 + 5) = *(undefined4 *)(param_1 + 5);
        return CONCAT31((int3)((uint)uVar7 >> 8),1);
      case 0x1d:
        *param_2 = 100;
        uVar7 = *(undefined4 *)(param_1 + 3);
        *(undefined4 *)(param_2 + 1) = uVar7;
        *(undefined4 *)(param_2 + 3) = *(undefined4 *)(param_1 + 1);
        return CONCAT31((int3)((uint)uVar7 >> 8),1);
      case 0x1f:
        *param_2 = 0x76;
        piVar1 = (int *)(param_2 + 5);
        *(undefined4 *)(param_2 + 7) = *(undefined4 *)(param_1 + 2);
        if (*(char **)(param_1 + 2) == (char *)0x0) {
          *piVar1 = 0;
        }
        else {
          uVar6 = 0xffffffff;
          pcVar10 = *(char **)(param_1 + 2);
          do {
            if (uVar6 == 0) break;
            uVar6 = uVar6 - 1;
            cVar2 = *pcVar10;
            pcVar10 = pcVar10 + 1;
          } while (cVar2 != '\0');
          *piVar1 = ~uVar6 - 1;
        }
        if (*(int *)(param_2 + 7) != 0) {
          *(int *)(param_2 + 3) = *piVar1 + 1;
          *(undefined4 *)(param_2 + 1) = param_3;
          return CONCAT31(uVar9,1);
        }
        *(undefined4 *)(param_2 + 1) = param_3;
        *(undefined4 *)(param_2 + 3) = 0;
        return CONCAT31(uVar9,1);
      }
    }
  }
  *param_2 = 1;
  return (uint)(uint3)(int3)cVar2 << 8;
}


