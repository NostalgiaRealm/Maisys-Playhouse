
/* ==== FUN_0045a250 @ 0045a250 ==== 
 * signature: undefined __fastcall FUN_0045a250(int param_1)
 * body: 0045a250-0045a33d
 */

void __fastcall FUN_0045a250(int param_1)

{
  DWORD DVar1;
  int iVar2;
  void *pvVar3;
  undefined4 *puVar4;
  undefined4 local_5c [21];
  undefined4 local_8;
  
  if (*(int *)(param_1 + 0x92) != 0) {
    FUN_0043c730((short *)&local_8);
    if ((*(short *)(param_1 + 0xb4) != (short)local_8) &&
       (*(short *)(param_1 + 0xb6) != local_8._2_2_)) {
      FUN_0045a200(param_1);
      *(undefined4 *)(param_1 + 0xb4) = local_8;
    }
    DVar1 = timeGetTime();
    if ((((uint)(*(int *)(param_1 + 0x96) + *(int *)(param_1 + 0x92)) < (DVar1 * 6) / 100) &&
        (*(int *)(param_1 + 0x82) != 0)) && (*(char *)(*(int *)(param_1 + 0x82) + 0xa4) != '\0')) {
      FUN_004142c0(local_5c,0x709,0,param_1,0);
      iVar2 = FUN_00409610(*(int *)(param_1 + 0x82));
      if (iVar2 != 0) {
        puVar4 = local_5c;
        pvVar3 = (void *)FUN_00409610(*(int *)(param_1 + 0x82));
        FUN_0046b730(pvVar3,(int)puVar4);
      }
      iVar2 = FUN_00409600(*(int *)(param_1 + 0x82));
      if (iVar2 != 0) {
        puVar4 = local_5c;
        pvVar3 = (void *)FUN_00409600(*(int *)(param_1 + 0x82));
        FUN_0046b730(pvVar3,(int)puVar4);
      }
      FUN_0045a200(param_1);
    }
  }
  return;
}


