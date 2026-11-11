
/* ==== FUN_1101e310 @ 1101e310 ==== 
 * signature: undefined __cdecl FUN_1101e310(undefined4 * param_1, int param_2, undefined4 * param_3)
 * body: 1101e310-1101e4b4
 */

void __cdecl FUN_1101e310(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  short sVar1;
  int iVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined4 local_54 [5];
  undefined2 local_40;
  undefined4 local_3e;
  undefined4 local_3a;
  undefined4 local_36;
  undefined2 local_30;
  undefined2 uStack_2e;
  undefined2 uStack_2c;
  undefined2 uStack_2a;
  undefined2 uStack_28;
  undefined2 local_26;
  undefined2 uStack_24;
  undefined2 local_22;
  undefined2 uStack_20;
  
  uVar4 = FUN_1100fc40((int)param_1);
  iVar2 = *(int *)((int)param_1 + 0x1a);
  FUN_11011900(local_54,0x514,0,uVar4,0);
  if (*(short *)(param_2 + 0x1e) != 0x1c) {
    if (*(short *)(param_2 + 0x1e) != 0x1b) {
      *(undefined2 *)param_3 = 0x16;
      *(undefined4 *)((int)param_3 + 2) = 0;
      *(undefined4 *)((int)param_3 + 6) = 0;
      *(undefined4 *)((int)param_3 + 10) = 0;
      *(undefined4 *)((int)param_3 + 0xe) = 0;
      return;
    }
    bVar3 = *(byte *)(param_2 + 0xc) & 1;
    if (bVar3 == 0) {
      sVar1 = *(short *)(iVar2 + 0x24);
      if ((sVar1 == 0x1c) || (sVar1 == 0x19)) {
        *(undefined1 *)(param_2 + 0x74) = 1;
      }
      else {
        *(undefined1 *)(param_2 + 0x74) = 0;
      }
    }
    if (*(char *)(param_2 + 0x74) == '\0') {
      if (bVar3 == 0) {
        *param_3 = *(undefined4 *)(iVar2 + 0x24);
        param_3[1] = *(undefined4 *)(iVar2 + 0x28);
        param_3[2] = *(undefined4 *)(iVar2 + 0x2c);
        param_3[3] = *(undefined4 *)(iVar2 + 0x30);
        *(undefined2 *)(param_3 + 4) = *(undefined2 *)(iVar2 + 0x34);
        return;
      }
      *param_3 = *(undefined4 *)(param_2 + 0x54);
      param_3[1] = *(undefined4 *)(param_2 + 0x58);
      param_3[2] = *(undefined4 *)(param_2 + 0x5c);
      param_3[3] = *(undefined4 *)(param_2 + 0x60);
      *(undefined2 *)(param_3 + 4) = *(undefined2 *)(param_2 + 100);
      return;
    }
    if (bVar3 == 0) {
      local_3a = *(undefined4 *)(iVar2 + 0x2a);
      local_3e = *(undefined4 *)(iVar2 + 0x26);
      local_36 = *(undefined4 *)(iVar2 + 0x2e);
      goto LAB_1101e3ba;
    }
  }
  local_3a = *(undefined4 *)(param_2 + 0x24);
  local_3e = *(undefined4 *)(param_2 + 0x20);
  local_36 = *(undefined4 *)(param_2 + 0x28);
LAB_1101e3ba:
  local_40 = 9;
  uStack_2e = 0;
  uStack_2c = 0;
  uStack_2a = 0;
  uStack_28 = 0;
  local_26 = 0;
  uStack_24 = 0;
  local_30 = 0x16;
  local_22 = 0;
  uStack_20 = 0;
  FUN_11017cc0(param_1,local_54);
  *param_3 = CONCAT22(uStack_2e,local_30);
  param_3[1] = CONCAT22(uStack_2a,uStack_2c);
  param_3[2] = CONCAT22(local_26,uStack_28);
  param_3[3] = CONCAT22(local_22,uStack_24);
  *(undefined2 *)(param_3 + 4) = uStack_20;
  if ((*(short *)(param_2 + 0x1e) != 0x1c) &&
     ((*(short *)(param_2 + 0x1e) != 0x1b || (*(char *)(param_2 + 0x74) == '\0')))) {
    return;
  }
  *(undefined4 *)(param_2 + 0x20) = local_3e;
  *(undefined4 *)(param_2 + 0x24) = local_3a;
  return;
}


