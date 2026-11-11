
/* ==== FUN_004052a0 @ 004052a0 ==== 
 * signature: undefined __fastcall FUN_004052a0(int param_1)
 * body: 004052a0-00405389
 */

void __fastcall FUN_004052a0(int param_1)

{
  short sVar1;
  int iVar2;
  int *piVar3;
  short sVar4;
  undefined4 unaff_EBP;
  undefined2 local_1c [6];
  int local_10;
  short local_8;
  short local_6;
  undefined2 uStack_4;
  undefined2 uStack_2;
  
  uStack_4 = (undefined2)unaff_EBP;
  uStack_2 = (undefined2)((uint)unaff_EBP >> 0x10);
  if (((*(int *)(param_1 + 0x162) == 0) && (*(char *)(param_1 + 0xa4) != '\0')) &&
     (iVar2 = *(int *)(param_1 + 0x5a), *(short *)(iVar2 + 0xc) != 0)) {
    if (*(short *)(*(int *)(param_1 + 0x62) + 0xc) != 0) {
      FUN_00430680(*(void **)(param_1 + 0x5e),iVar2);
      local_6 = 1;
      local_8 = *(short *)(*(int *)(param_1 + 0x5e) + 0xc);
      sVar1 = *(short *)(*(int *)(param_1 + 0x62) + 0xc);
      if (0 < local_8) {
        do {
          iVar2 = FUN_004308b0(*(void **)(param_1 + 0x5e),local_6);
          if ((iVar2 != 0) && ((*(byte *)(iVar2 + 0x9c) & 2) != 0)) {
            sVar4 = 1;
            local_1c[0] = 0;
            local_10 = iVar2;
            if (0 < sVar1) {
              do {
                piVar3 = (int *)FUN_004308b0(*(void **)(param_1 + 0x62),sVar4);
                if ((piVar3 != (int *)0x0) && ((*(byte *)((int)piVar3 + 0x1e) & 0x10) != 0)) {
                  (**(code **)(*piVar3 + 0x25c))(0x11,local_1c,0x14,0);
                }
                sVar4 = sVar4 + 1;
              } while (sVar4 <= sVar1);
            }
          }
          local_6 = local_6 + 1;
        } while (local_6 <= local_8);
      }
      FUN_00430640(*(int *)(param_1 + 0x5e));
      return;
    }
    FUN_00430640(iVar2);
  }
  return;
}


