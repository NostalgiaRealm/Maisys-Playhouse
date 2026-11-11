
/* ==== FUN_110285c0 @ 110285c0 ==== 
 * signature: undefined __cdecl FUN_110285c0(undefined4 * param_1, int param_2, int param_3)
 * body: 110285c0-11028719
 */

void __cdecl FUN_110285c0(undefined4 *param_1,int param_2,int param_3)

{
  short sVar1;
  int iVar2;
  short *psVar3;
  short *psVar4;
  undefined1 local_50;
  undefined1 local_4f;
  undefined1 local_4e;
  undefined1 local_4d;
  undefined1 local_4c;
  undefined1 local_4b;
  undefined2 local_48;
  undefined4 local_46;
  undefined2 local_38;
  undefined4 local_36;
  undefined1 *local_32;
  undefined1 *local_2e;
  undefined1 local_28 [20];
  undefined1 local_14 [20];
  
  local_50 = 0x76;
  local_4f = 0x61;
  local_4e = 0x6c;
  local_4d = 0x75;
  local_4c = 0x65;
  local_4b = 0;
  sVar1 = *(short *)(param_2 + 0x18);
  psVar3 = (short *)(*(int *)((int)param_1 + 0x1a) + 0x24);
  local_48 = 2;
  if (sVar1 == 0x1c) {
    local_46 = FUN_11014b50(param_1,*(undefined4 *)(param_2 + 0x22));
    *(undefined4 *)(param_2 + 0x1a) = local_46;
    *(undefined2 *)(param_3 + 0x24) = 0x17;
    FUN_11024d70(param_1,&local_48,&local_50,(short *)(param_3 + 0x24),0);
    return;
  }
  if (sVar1 == 0x1f) {
    local_32 = local_28;
    local_2e = local_14;
    local_38 = 10;
    FUN_11014bb0(param_1,*(undefined4 *)(param_2 + 0x1c),&local_38);
    *(undefined2 *)(param_3 + 0x24) = 0x17;
    local_46 = local_36;
    FUN_11024d70(param_1,&local_48,local_28,(short *)(param_3 + 0x24),0);
    return;
  }
  if (sVar1 != 0x1b) {
    psVar3 = (short *)(param_2 + 0x18);
    psVar4 = (short *)(param_3 + 0x24);
    for (iVar2 = 0xb; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined4 *)psVar4 = *(undefined4 *)psVar3;
      psVar3 = psVar3 + 2;
      psVar4 = psVar4 + 2;
    }
    *psVar4 = *psVar3;
    return;
  }
  sVar1 = *psVar3;
  if ((sVar1 != 0x1c) && (sVar1 != 0x19)) {
    psVar4 = (short *)(param_3 + 0x24);
    for (iVar2 = 0xb; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined4 *)psVar4 = *(undefined4 *)psVar3;
      psVar3 = psVar3 + 2;
      psVar4 = psVar4 + 2;
    }
    *psVar4 = *psVar3;
    return;
  }
  local_46 = *(undefined4 *)(*(int *)((int)param_1 + 0x1a) + 0x26);
  *(undefined2 *)(param_3 + 0x24) = 0x17;
  FUN_11024d70(param_1,&local_48,&local_50,(short *)(param_3 + 0x24),0);
  return;
}


