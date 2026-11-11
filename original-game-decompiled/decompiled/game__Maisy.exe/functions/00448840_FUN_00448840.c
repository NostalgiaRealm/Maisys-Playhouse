
/* ==== FUN_00448840 @ 00448840 ==== 
 * signature: undefined __fastcall FUN_00448840(void * param_1)
 * body: 00448840-004488e4
 */

void __fastcall FUN_00448840(void *param_1)

{
  DWORD DVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  DVar1 = timeGetTime();
  if (*(uint *)((int)param_1 + 0x26) <= (DVar1 * 6) / 100) {
    iVar4 = 0;
    piVar2 = (int *)FUN_00430190(*(int *)((int)param_1 + 0x2a));
    iVar5 = *(int *)(*(int *)((int)param_1 + 0x2a) + 0x26);
    if (0 < iVar5) {
      do {
        if ((int *)*piVar2 != (int *)0x0) {
          iVar3 = (**(code **)(*(int *)*piVar2 + 0x84))();
          iVar4 = iVar4 + iVar3;
        }
        piVar2 = piVar2 + 3;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    if (*DAT_004db9d0 < iVar4) {
      FUN_00448610(param_1,iVar4 - *DAT_004db9d0);
    }
    FUN_004301f0(*(int *)((int)param_1 + 0x2a));
    DVar1 = timeGetTime();
    *(uint *)((int)param_1 + 0x26) = (DVar1 * 6) / 100 + 0x1e0;
  }
  return;
}


