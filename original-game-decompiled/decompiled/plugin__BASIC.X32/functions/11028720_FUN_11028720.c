
/* ==== FUN_11028720 @ 11028720 ==== 
 * signature: undefined __cdecl FUN_11028720(undefined4 * param_1, int param_2, undefined4 param_3, int param_4)
 * body: 11028720-11028843
 */

void __cdecl FUN_11028720(undefined4 *param_1,int param_2,undefined4 param_3,int param_4)

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
  sVar1 = *(short *)(param_2 + 0x46);
  local_4b = 0;
  local_48 = 2;
  psVar4 = (short *)(*(int *)((int)param_1 + 0x1a) + 0x24);
  if (sVar1 == 0x1c) {
    local_46 = FUN_11014b50(param_1,*(undefined4 *)(param_2 + 0x50));
    *(undefined4 *)(param_2 + 0x48) = local_46;
    FUN_11024e20(param_1,&local_48,&local_50,param_4 + 0x24,0);
    return;
  }
  if (sVar1 == 0x1f) {
    local_32 = local_14;
    local_2e = local_28;
    local_38 = 10;
    FUN_11014bb0(param_1,*(undefined4 *)(param_2 + 0x4a),&local_38);
    local_46 = local_36;
    FUN_11024e20(param_1,&local_48,local_32,param_4 + 0x24,0);
    return;
  }
  if (sVar1 == 0x1b) {
    if (*psVar4 == 0x1c) {
      local_46 = *(undefined4 *)(*(int *)((int)param_1 + 0x1a) + 0x26);
      FUN_11024e20(param_1,&local_48,&local_50,param_4 + 0x24,0);
      return;
    }
    psVar3 = (short *)(param_4 + 0x24);
    for (iVar2 = 0xb; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined4 *)psVar4 = *(undefined4 *)psVar3;
      psVar3 = psVar3 + 2;
      psVar4 = psVar4 + 2;
    }
    *psVar4 = *psVar3;
  }
  return;
}


