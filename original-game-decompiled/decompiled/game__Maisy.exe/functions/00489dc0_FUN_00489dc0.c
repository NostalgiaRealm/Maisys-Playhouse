
/* ==== FUN_00489dc0 @ 00489dc0 ==== 
 * signature: undefined __fastcall FUN_00489dc0(int * param_1)
 * body: 00489dc0-00489e0c
 */

void __fastcall FUN_00489dc0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (*param_1 != 0) {
    iVar2 = 0;
    puVar1 = (undefined4 *)FUN_00430190(*param_1);
    if (0 < *(int *)(*param_1 + 0x26)) {
      do {
        if ((LPVOID)*puVar1 != (LPVOID)0x0) {
          FUN_0043ba20((LPVOID)*puVar1);
        }
        puVar1 = puVar1 + 4;
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(*param_1 + 0x26));
    }
    FUN_004301f0(*param_1);
    (**(code **)(*(int *)*param_1 + 4))();
    *param_1 = 0;
  }
  return;
}


