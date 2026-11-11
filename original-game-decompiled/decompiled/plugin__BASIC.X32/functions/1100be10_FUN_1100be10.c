
/* ==== FUN_1100be10 @ 1100be10 ==== 
 * signature: undefined __cdecl FUN_1100be10(undefined4 param_1, int param_2, int param_3, undefined4 param_4, short param_5)
 * body: 1100be10-1100bfb3
 */

void __cdecl
FUN_1100be10(undefined4 param_1,int param_2,int param_3,undefined4 param_4,short param_5)

{
  short *psVar1;
  short *psVar2;
  int *piVar3;
  undefined1 uVar4;
  short sVar5;
  int iVar6;
  short sVar7;
  bool bVar8;
  
  sVar5 = *(short *)(param_2 + 0x3e);
  sVar7 = *(short *)(param_2 + 0x24);
  if (*(short *)(param_2 + 0x1c) == 1) {
    sVar5 = sVar7 - sVar5;
  }
  bVar8 = param_5 != 0;
  if (bVar8) {
    if (*(int *)(param_2 + 0x48) == 0) {
      FUN_1100b730();
    }
    FUN_1100b740(param_1,param_2,param_3);
    if (*(int *)(param_2 + 0x48) == 0) {
      bVar8 = false;
    }
  }
  if (0 < sVar5) {
    if (bVar8) {
      psVar1 = *(short **)(param_3 + 0x14);
      psVar2 = *(short **)(param_3 + 0x1c);
      FUN_1101ea40(*(int *)(param_2 + 0x48),*(int *)(param_2 + 0x50),0,0,psVar2[2] - *psVar2,
                   psVar2[3] - psVar2[1],*(int *)(param_3 + 0x2a),*(int *)(param_3 + 0x32),*psVar1,
                   psVar1[1],psVar1[2] - *psVar1,psVar1[3] - psVar1[1],*(byte **)(param_3 + 0x3a));
    }
    iVar6 = ((int)sVar5 << 8) / (int)sVar7;
    piVar3 = *(int **)(param_3 + 0x3a);
    piVar3[3] = 0x20;
    *piVar3 = iVar6;
    uVar4 = (undefined1)iVar6;
    *(undefined1 *)(piVar3 + 7) = uVar4;
    *(undefined1 *)((int)piVar3 + 0x1d) = uVar4;
    *(undefined1 *)((int)piVar3 + 0x1e) = uVar4;
    if (bVar8) {
      psVar1 = *(short **)(param_3 + 0x1c);
      sVar7 = psVar1[3] - psVar1[1];
      sVar5 = psVar1[2] - *psVar1;
      FUN_1101ea40(*(int *)(param_3 + 0x2e),*(int *)(param_3 + 0x36),*psVar1,psVar1[1],sVar5,sVar7,
                   *(int *)(param_2 + 0x48),*(int *)(param_2 + 0x50),0,0,sVar5,sVar7,
                   *(byte **)(param_3 + 0x3a));
      GlobalUnlock(*(HGLOBAL *)(param_2 + 0x4c));
      *(undefined4 *)(param_2 + 0x50) = 0;
      return;
    }
    psVar1 = *(short **)(param_3 + 0x14);
    psVar2 = *(short **)(param_3 + 0x1c);
    FUN_1101ea40(*(int *)(param_3 + 0x2e),*(int *)(param_3 + 0x36),*psVar2,psVar2[1],
                 psVar2[2] - *psVar2,psVar2[3] - psVar2[1],*(int *)(param_3 + 0x2a),
                 *(int *)(param_3 + 0x32),*psVar1,psVar1[1],psVar1[2] - *psVar1,
                 psVar1[3] - psVar1[1],*(byte **)(param_3 + 0x3a));
  }
  return;
}


