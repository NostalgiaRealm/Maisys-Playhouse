
/* ==== FUN_11023a50 @ 11023a50 ==== 
 * signature: undefined __cdecl FUN_11023a50(undefined4 * param_1, int param_2, undefined4 * param_3)
 * body: 11023a50-11023c48
 */

void __cdecl FUN_11023a50(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  short sVar5;
  short local_158;
  short local_156;
  int local_154;
  undefined1 local_150 [2];
  undefined4 local_14e;
  undefined4 local_14a;
  undefined4 local_146;
  undefined4 local_142;
  byte local_13e;
  byte local_13d;
  undefined2 local_13c;
  undefined2 local_13a;
  undefined4 local_134;
  undefined4 local_130;
  undefined2 local_12c;
  undefined4 local_12a;
  undefined2 local_126;
  undefined4 local_124;
  undefined4 local_120;
  undefined2 local_11c;
  undefined4 local_11a;
  undefined4 local_116;
  undefined4 local_112;
  undefined2 local_10e;
  undefined2 local_10c;
  short local_10a;
  undefined4 local_108;
  undefined4 local_104;
  undefined1 local_100 [256];
  
  cVar2 = FUN_11011800(param_1,*param_3,local_150,0x50);
  if (cVar2 != '\0') {
    if (local_13e != 0) {
      FUN_11011800(param_1,*param_3,local_100,(uint)local_13e);
      local_100[local_13e] = 0;
      FUN_110046e0(param_1,local_100,&local_14e,&local_14a);
    }
    if (local_13d != 0) {
      FUN_11011800(param_1,*param_3,local_100,(uint)local_13d);
      local_100[local_13d] = 0;
      FUN_110046e0(param_1,local_100,&local_146,&local_142);
    }
    *(undefined4 *)(param_2 + 0x58) = 0;
    if (local_10a != 0) {
      uVar3 = FUN_110026d0(param_1,(int)local_10a << 3);
      *(undefined4 *)(param_2 + 0x58) = uVar3;
      sVar5 = 0;
      local_154 = FUN_11002840(param_1,uVar3);
      if (0 < local_10a) {
        do {
          FUN_11011800(param_1,*param_3,&local_158,4);
          iVar4 = (int)sVar5;
          sVar5 = sVar5 + 1;
          piVar1 = (int *)(local_154 + iVar4 * 8);
          *piVar1 = (int)local_158;
          piVar1[1] = (int)local_156;
        } while (sVar5 < local_10a);
      }
      FUN_110028a0(param_1,*(undefined4 *)(param_2 + 0x58));
    }
    *(undefined4 *)(param_2 + 0x10) = local_14e;
    *(undefined4 *)(param_2 + 0x14) = local_14a;
    *(undefined4 *)(param_2 + 0x18) = local_146;
    *(undefined4 *)(param_2 + 0x1c) = local_142;
    *(undefined2 *)(param_2 + 0x20) = local_13c;
    *(undefined2 *)(param_2 + 0x22) = local_13a;
    *(undefined4 *)(param_2 + 0x24) = local_134;
    *(undefined4 *)(param_2 + 0x28) = local_130;
    *(undefined4 *)(param_2 + 0x2e) = local_12a;
    *(undefined4 *)(param_2 + 0x34) = local_124;
    *(undefined4 *)(param_2 + 0x38) = local_120;
    *(undefined4 *)(param_2 + 0x3e) = local_11a;
    *(undefined2 *)(param_2 + 0x32) = local_126;
    *(undefined2 *)(param_2 + 0x3c) = local_11c;
    *(undefined2 *)(param_2 + 0x2c) = local_12c;
    *(undefined4 *)(param_2 + 0x42) = local_116;
    *(undefined4 *)(param_2 + 0x46) = local_112;
    *(undefined2 *)(param_2 + 0x4a) = local_10e;
    *(undefined2 *)(param_2 + 0x4c) = local_10c;
    *(undefined4 *)(param_2 + 0x5c) = local_108;
    *(short *)(param_2 + 0x56) = local_10a;
    *(undefined4 *)(param_2 + 0x60) = local_104;
    *(undefined1 *)((int)param_3 + 0x12) = 1;
  }
  return;
}


