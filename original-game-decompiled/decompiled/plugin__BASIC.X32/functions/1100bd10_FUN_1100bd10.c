
/* ==== FUN_1100bd10 @ 1100bd10 ==== 
 * signature: undefined __cdecl FUN_1100bd10(undefined4 param_1, int param_2, int param_3)
 * body: 1100bd10-1100be07
 */

void __cdecl FUN_1100bd10(undefined4 param_1,int param_2,int param_3)

{
  short *psVar1;
  short *psVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  short sVar6;
  int iVar7;
  short sVar8;
  int iVar9;
  int iVar10;
  
  iVar5 = (int)*(short *)(param_2 + 0x24);
  iVar10 = (int)*(short *)(param_2 + 0x3e);
  if (*(short *)(param_2 + 0x1c) == 1) {
    iVar10 = iVar5 - iVar10;
  }
  psVar1 = *(short **)(param_3 + 0x1c);
  iVar9 = (int)*psVar1 + (int)psVar1[2] >> 1;
  iVar7 = (int)psVar1[1] + (int)psVar1[3] >> 1;
  sVar8 = (short)iVar9;
  sVar3 = (short)((((int)*psVar1 - (int)sVar8) * iVar10) / iVar5) + sVar8;
  sVar6 = (short)iVar7;
  sVar4 = (short)((((int)psVar1[1] - (int)sVar6) * iVar10) / iVar5) + sVar6;
  psVar2 = *(short **)(param_3 + 0x14);
  FUN_1101ea40(*(int *)(param_3 + 0x2e),*(int *)(param_3 + 0x36),sVar3,sVar4,
               (short)(iVar9 + (((int)psVar1[2] - (int)sVar8) * iVar10) / iVar5) - sVar3,
               (short)(iVar7 + (((int)psVar1[3] - (int)sVar6) * iVar10) / iVar5) - sVar4,
               *(int *)(param_3 + 0x2a),*(int *)(param_3 + 0x32),*psVar2,psVar2[1],
               psVar2[2] - *psVar2,psVar2[3] - psVar2[1],*(byte **)(param_3 + 0x3a));
  return;
}


