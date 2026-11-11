
/* ==== FUN_120275d0 @ 120275d0 ==== 
 * signature: undefined __cdecl FUN_120275d0(undefined2 * param_1, undefined2 * param_2)
 * body: 120275d0-12027630
 */

void __cdecl FUN_120275d0(undefined2 *param_1,undefined2 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  FUN_12027680((int)param_1);
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  puVar1 = *(undefined4 **)(param_1 + 7);
  if (puVar1 != (undefined4 *)0x0) {
    if (*(undefined4 **)(param_2 + 7) != (undefined4 *)0x0) {
      iVar2 = 0;
      *puVar1 = **(undefined4 **)(param_2 + 7);
      do {
        iVar2 = iVar2 + 4;
        *(undefined4 *)(*(int *)(param_1 + 7) + iVar2) =
             *(undefined4 *)(*(int *)(param_2 + 7) + iVar2);
      } while (iVar2 < 0x20);
      return;
    }
    iVar2 = 0;
    *puVar1 = 0;
    do {
      iVar2 = iVar2 + 4;
      *(undefined4 *)(*(int *)(param_1 + 7) + iVar2) = 0;
    } while (iVar2 < 0x20);
  }
  return;
}


