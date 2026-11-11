
/* ==== FUN_004042d0 @ 004042d0 ==== 
 * signature: undefined __fastcall FUN_004042d0(void * param_1)
 * body: 004042d0-00404444
 */

void __fastcall FUN_004042d0(void *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  byte *pbVar4;
  int iVar5;
  char cVar6;
  undefined4 local_6c [21];
  void *local_18;
  int *local_14;
  int *local_10;
  int *local_c;
  char local_6;
  char local_5;
  
  iVar1 = *(int *)(*(int *)((int)param_1 + 0x7e) + 0x26);
  if (iVar1 != 0) {
    iVar5 = 1;
    if (0 < iVar1) {
      do {
        if (*(int *)((int)param_1 + 0x1d6) <= iVar5) break;
        FUN_00430370(*(void **)((int)param_1 + 0x7e),iVar5,&local_10);
        local_18 = (void *)FUN_0040c620(local_c);
        if ((((local_18 != (void *)0x0) && (local_18 == param_1)) && (local_10 != (int *)0x0)) &&
           (local_c != (int *)0x0)) {
          iVar1 = (**(code **)(*local_10 + 0x16c))();
          if (iVar1 == 0) {
LAB_00404368:
            local_6 = '\0';
          }
          else {
            iVar1 = (**(code **)(*local_10 + 0x16c))();
            if ((*(byte *)(iVar1 + 0x38) & 1) == 0) goto LAB_00404368;
            local_6 = '\x01';
          }
          (**(code **)(*local_10 + 0x104))(local_c);
          FUN_004142c0(local_6c,0xe3,0,0,0);
          pbVar4 = (byte *)((int)local_10 + 0x1e);
          if ((*(uint *)((int)local_10 + 0x1e) & 2) == 0) {
            if ((*(uint *)((int)local_10 + 0x1e) & 0x400) != 0) {
              (**(code **)(*local_10 + 0x1e0))(local_6c);
            }
          }
          else {
            cVar6 = '\x01';
            local_14 = local_10;
            local_5 = '\0';
            piVar2 = (int *)FUN_0046ca10((int)local_c);
            uVar3 = FUN_00403790(local_18,piVar2,cVar6);
            if ((char)uVar3 != '\0') {
              local_5 = '\x01';
            }
            if (local_6 != '\0') {
              iVar1 = FUN_00430cd0(*(void **)((int)param_1 + 0x72),(int)local_10);
              if (iVar1 == 0) {
                FUN_0046c920(local_14,0);
              }
            }
            if ((local_5 == '\x01') && ((*pbVar4 & 4) != 0)) {
              iVar1 = *local_14;
              (**(code **)(iVar1 + 0x40c))();
              (**(code **)(iVar1 + 0x2d8))();
            }
            FUN_0046b770(local_14,(int)local_6c);
          }
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 <= *(int *)(*(int *)((int)param_1 + 0x7e) + 0x26));
    }
    (**(code **)(**(int **)((int)param_1 + 0x7e) + 0xe4))();
  }
  return;
}


