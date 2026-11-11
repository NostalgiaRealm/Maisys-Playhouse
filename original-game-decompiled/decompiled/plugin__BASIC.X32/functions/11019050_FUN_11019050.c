
/* ==== FUN_11019050 @ 11019050 ==== 
 * signature: undefined __cdecl FUN_11019050(undefined4 * param_1, int param_2, char param_3, char param_4, char param_5)
 * body: 11019050-11019304
 */

void __cdecl FUN_11019050(undefined4 *param_1,int param_2,char param_3,char param_4,char param_5)

{
  short sVar1;
  short sVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  short *psVar6;
  short *psVar7;
  undefined4 local_ac;
  undefined4 local_a8 [5];
  undefined2 local_94;
  undefined2 uStack_92;
  undefined2 uStack_90;
  undefined2 uStack_8e;
  undefined4 local_8c;
  undefined4 local_88;
  short local_84 [24];
  undefined4 local_54 [5];
  undefined2 local_40;
  undefined4 local_3e;
  undefined2 local_30;
  int local_2e;
  
  if (*(int *)(param_2 + 0x20) != 0) {
    uVar3 = FUN_1100fc30((int)param_1);
    uVar4 = FUN_1100fc40((int)param_1);
    iVar5 = *(short *)(param_2 + 0x2a) * 0x58 + *(int *)(param_2 + 0x20);
    sVar1 = *(short *)(iVar5 + 4);
    if ((param_3 != '\0') && ((*(uint *)(iVar5 + 8) & 1) == 0)) {
      FUN_11011900(local_54,0x4b0,6,uVar4,0);
      local_3e = 0xc9;
      local_40 = 5;
      local_2e = sVar1 + 1;
      local_30 = 1;
      FUN_11017cc0(param_1,local_54);
    }
    if (*(short *)(param_2 + 0x2a) < *(short *)(param_2 + 0x28)) {
      psVar6 = (short *)(*(short *)(param_2 + 0x2a) * 0x58 + *(int *)(param_2 + 0x20));
      sVar1 = *(short *)(param_2 + 0x30) + *psVar6;
      sVar2 = psVar6[1] + *(short *)(param_2 + 0x32);
      local_ac = CONCAT22(sVar2,sVar1);
      FUN_1101db80(param_1,uVar3,0,(int)sVar1 - (int)*(short *)(param_2 + 0x58),
                   (int)sVar2 - (int)*(short *)(param_2 + 0x5a),0,0);
      *(undefined4 *)(param_2 + 0x58) = local_ac;
      if ((*(int *)(*(int *)(param_2 + 0x20) + 0x10 + *(short *)(param_2 + 0x2a) * 0x58) != 1) &&
         (param_5 != '\0')) {
        FUN_110048a0(param_1,0xe,0,param_2 + 0x34);
        *(undefined4 *)(param_2 + 0x3a) = 0;
        *(undefined4 *)(param_2 + 0x3e) = 0;
        *(undefined4 *)(param_2 + 0x36) = 0;
        *(undefined4 *)(param_2 + 0x42) = 0;
        *(undefined2 *)(param_2 + 0x34) = 0x69;
        iVar5 = *(short *)(param_2 + 0x2a) * 0x58 + *(int *)(param_2 + 0x20);
        FUN_11011900(local_a8,*(undefined4 *)(iVar5 + 0x10),*(undefined4 *)(iVar5 + 0x14),uVar4,
                     *(undefined4 *)(iVar5 + 0xc));
        iVar5 = *(int *)(param_2 + 0x36);
        if ((iVar5 == 0) ||
           (*(short *)(*(int *)(param_2 + 0x20) + 0x18 + *(short *)(param_2 + 0x2a) * 0x58) != 1)) {
          iVar5 = *(short *)(param_2 + 0x2a) * 0x58 + *(int *)(param_2 + 0x20);
          if ((*(short *)(iVar5 + 0x18) == 5) && (*(int *)(iVar5 + 0x1a) == 0xcf)) {
            local_94 = 7;
            uStack_92 = (undefined2)*(undefined4 *)(param_2 + 100);
            uStack_90 = (undefined2)((uint)*(undefined4 *)(param_2 + 100) >> 0x10);
            FUN_1100fb40(param_1,&uStack_92);
          }
          else {
            uVar4 = *(undefined4 *)(iVar5 + 0x18);
            local_94 = (undefined2)uVar4;
            uStack_92 = (undefined2)((uint)uVar4 >> 0x10);
            uStack_90 = (undefined2)*(undefined4 *)(iVar5 + 0x1c);
            uStack_8e = (undefined2)((uint)*(undefined4 *)(iVar5 + 0x1c) >> 0x10);
            local_8c = *(undefined4 *)(iVar5 + 0x20);
            local_88 = *(undefined4 *)(iVar5 + 0x24);
          }
        }
        else {
          local_94 = 7;
          uStack_92 = (undefined2)iVar5;
          uStack_90 = (undefined2)((uint)iVar5 >> 0x10);
        }
        psVar6 = (short *)(*(int *)(param_2 + 0x20) + 0x28 + *(short *)(param_2 + 0x2a) * 0x58);
        if (*psVar6 == 0x1b) {
          psVar6 = (short *)(param_2 + 0x80);
        }
        psVar7 = local_84;
        for (iVar5 = 0xb; iVar5 != 0; iVar5 = iVar5 + -1) {
          *(undefined4 *)psVar7 = *(undefined4 *)psVar6;
          psVar6 = psVar6 + 2;
          psVar7 = psVar7 + 2;
        }
        *psVar7 = *psVar6;
        FUN_11017cc0(param_1,local_a8);
      }
    }
    else {
      *(undefined2 *)(param_2 + 0x2a) = 0;
      FUN_1101db80(param_1,uVar3,1,(int)*(short *)(param_2 + 0x30),(int)*(short *)(param_2 + 0x32),0
                   ,0);
      FUN_11006290((uint *)(param_2 + 0xc),'\0');
    }
    if (param_4 != '\0') {
      FUN_1101db80(param_1,uVar3,4,0,0,0x7fff,0x7fff);
    }
  }
  return;
}


