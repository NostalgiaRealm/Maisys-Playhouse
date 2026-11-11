
/* ==== FUN_00434fb0 @ 00434fb0 ==== 
 * signature: undefined __fastcall FUN_00434fb0(int param_1)
 * body: 00434fb0-004351e7
 */

void __fastcall FUN_00434fb0(int param_1)

{
  HMODULE hLibModule;
  LPVOID pvVar1;
  bool bVar2;
  undefined3 extraout_var;
  int iVar3;
  int *piVar4;
  int iVar5;
  int local_18;
  int local_14;
  int local_c;
  
  if (*(undefined4 **)(param_1 + 0x724c) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x724c))(1);
  }
  *(undefined4 *)(param_1 + 0x724c) = 0;
  if (*(undefined4 **)(param_1 + 0x7250) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x7250))(1);
  }
  *(undefined4 *)(param_1 + 0x7250) = 0;
  FUN_00434e80();
  local_c = 0;
  if (0 < *(int *)(param_1 + 0x7236)) {
    piVar4 = (int *)(param_1 + 0x13c);
    do {
      hLibModule = (HMODULE)piVar4[-3];
      FUN_0043f6d0(*(LPVOID *)((int)piVar4 + -0x116));
      FUN_0043f6d0((LPVOID)piVar4[-0x44]);
      if (*piVar4 != 0) {
        FUN_00434e80();
        local_14 = 0;
        if (0 < piVar4[-1]) {
          iVar5 = 0;
          do {
            bVar2 = FUN_00437430((int *)(*piVar4 + iVar5 + 0x14),(int *)&DAT_004da40c);
            if ((CONCAT31(extraout_var,bVar2) == 0) && (*(int *)(*piVar4 + iVar5 + 0x62) != 0)) {
              local_18 = 0;
              if (-1 < *(short *)(*piVar4 + iVar5 + 0x50)) {
                iVar3 = 0;
                do {
                  pvVar1 = *(LPVOID *)(*(int *)(*piVar4 + 0x62 + iVar5) + iVar3);
                  if (pvVar1 != (LPVOID)0x0) {
                    FUN_00434950(pvVar1);
                    *(undefined4 *)(*(int *)(*piVar4 + 0x62 + iVar5) + iVar3) = 0;
                  }
                  iVar3 = iVar3 + 4;
                  local_18 = local_18 + 1;
                } while (local_18 <= *(short *)(*piVar4 + 0x50 + iVar5));
              }
              FUN_00434950(*(LPVOID *)(*piVar4 + 0x62 + iVar5));
              *(undefined4 *)(*piVar4 + 0x62 + iVar5) = 0;
            }
            pvVar1 = *(LPVOID *)(*piVar4 + 0x66 + iVar5);
            if (pvVar1 != (LPVOID)0x0) {
              FUN_00434950(pvVar1);
              *(undefined4 *)(*piVar4 + 0x66 + iVar5) = 0;
            }
            iVar5 = iVar5 + 0x80;
            local_14 = local_14 + 1;
          } while (local_14 < piVar4[-1]);
        }
        FUN_00434950((LPVOID)*piVar4);
        *piVar4 = 0;
      }
      piVar4[-3] = 0;
      if (hLibModule != (HMODULE)0x0) {
        FreeLibrary(hLibModule);
      }
      piVar4 = piVar4 + 0x49;
      local_c = local_c + 1;
    } while (local_c < *(int *)(param_1 + 0x7236));
  }
  if (((*(int *)(param_1 + 0x7236) != 0) && (param_1 != -0x26)) &&
     (iVar5 = 0, 0 < *(int *)(param_1 + 0x7236))) {
    piVar4 = (int *)(param_1 + 0x146);
    do {
      if ((undefined4 *)*piVar4 != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)*piVar4)(1);
      }
      iVar5 = iVar5 + 1;
      *piVar4 = 0;
      piVar4 = piVar4 + 0x49;
    } while (iVar5 < *(int *)(param_1 + 0x7236));
  }
  if (DAT_004e0210 != (LPVOID)0x0) {
    FUN_00434950(DAT_004e0210);
    DAT_004e0210 = (LPVOID)0x0;
  }
  if (*(undefined4 **)(param_1 + 0x7254) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x7254))(1);
  }
  *(undefined4 *)(param_1 + 0x7254) = 0;
  if (DAT_004dae3c != (undefined4 *)0x0) {
    (**(code **)*DAT_004dae3c)(1);
  }
  DAT_004dae3c = (undefined4 *)0x0;
  return;
}


