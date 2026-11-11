
/* ==== FUN_004140a0 @ 004140a0 ==== 
 * signature: undefined __fastcall FUN_004140a0(int param_1)
 * body: 004140a0-00414188
 */

/* WARNING: Type propagation algorithm not settling */

void __fastcall FUN_004140a0(int param_1)

{
  int iVar1;
  int iVar2;
  HLOCAL local_c;
  short local_8 [2];
  
  if ((*(int *)(param_1 + 0x10) == 0) && (*(int *)(param_1 + 0x14) != 0)) {
    iVar2 = 1;
    iVar1 = FUN_00414260(param_1);
    if (0 < iVar1) {
      do {
        FUN_00430370(*(void **)(param_1 + 8),iVar2,local_8);
        if (local_8[0] == -1) {
          iVar1 = iVar1 + -1;
          FUN_00430370(*(void **)(param_1 + 4),iVar2,&local_c);
          FUN_0043f720(local_c);
          FUN_00430090(*(void **)(param_1 + 4),iVar2);
          FUN_00430090(*(void **)(param_1 + 8),iVar2);
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 <= iVar1);
    }
    iVar2 = FUN_00414270(param_1);
    local_8[1] = 0;
    iVar1 = iVar2;
    if (0 < iVar2) {
      do {
        FUN_00430370(*(void **)(param_1 + 0xc),1,&local_c);
        FUN_00430090(*(void **)(param_1 + 0xc),1);
        (**(code **)(**(int **)(param_1 + 4) + 0xe8))(&local_c);
        (**(code **)(**(int **)(param_1 + 8) + 0xe8))(local_8 + 1);
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    if (iVar2 != 0) {
      if (*(undefined4 **)(param_1 + 0xc) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(param_1 + 0xc))(1);
      }
      *(undefined4 *)(param_1 + 0xc) = 0;
    }
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  return;
}


