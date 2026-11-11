
/* ==== FUN_00406120 @ 00406120 ==== 
 * signature: undefined __fastcall FUN_00406120(int param_1)
 * body: 00406120-004061dc
 */

void __fastcall FUN_00406120(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  int *piVar3;
  short sVar4;
  undefined4 uVar5;
  
  sVar1 = *(short *)(*(int *)(param_1 + 0x6e) + 0xc);
  *(undefined1 *)(param_1 + 0xb0) = 0;
  if (*(char *)(param_1 + 0xb2) != '\0') {
    FUN_0045f9d0(&DAT_004dffb0,1,0x10,0,param_1 + 0xb8,*(void **)(param_1 + 0x8a));
    piVar3 = *(int **)(param_1 + 0x15c);
    if (piVar3 != (int *)0x0) {
      uVar5 = 0;
      uVar2 = FUN_00458a00(*(int *)(param_1 + 0x2a));
      (**(code **)(*piVar3 + 0x1c8))(uVar2,uVar5);
      *(undefined4 *)(param_1 + 0x15c) = 0;
    }
    *(undefined1 *)(param_1 + 0xb2) = 0;
  }
  if (sVar1 != 0) {
    sVar4 = 1;
    if (0 < sVar1) {
      do {
        piVar3 = (int *)FUN_004308b0(*(void **)(param_1 + 0x6e),sVar4);
        if (piVar3 != (int *)0x0) {
          if ((*(uint *)((int)piVar3 + 0x1e) & 2) == 0) {
            if ((*(uint *)((int)piVar3 + 0x1e) & 0x400) == 0) {
              (**(code **)(*piVar3 + 0x224))();
            }
          }
          else {
            (**(code **)(*piVar3 + 0x2dc))();
          }
        }
        sVar4 = sVar4 + 1;
      } while (sVar4 <= sVar1);
    }
    FUN_00430640(*(int *)(param_1 + 0x6e));
  }
  return;
}


