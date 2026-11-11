
/* ==== FUN_10013192 @ 10013192 ==== 
 * signature: undefined __cdecl FUN_10013192(undefined4 param_1, HANDLE param_2, undefined4 param_3, undefined4 param_4)
 * body: 10013192-10013277
 */

void __cdecl FUN_10013192(undefined4 param_1,HANDLE param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 uVar2;
  bool bVar3;
  INT_PTR IVar4;
  int iVar5;
  
  uVar2 = *(undefined4 *)(DAT_1002392c + 8);
  do {
    SetErrorMode(0);
    (**(code **)(DAT_1002392c + 0x90))(param_1,param_2,param_3,param_4);
    SetErrorMode(0x8000);
    bVar3 = false;
    if (*(char *)(DAT_1002392c + 0x20) == '\x02') {
      if (DAT_100240b8 == 0) {
        FUN_1000b352(PTR_s_Internal_Error_1001f048);
      }
      else {
        IVar4 = FUN_1001277f((HWND)0x0,*(char **)(DAT_100240b8 + 0x94),
                             *(undefined4 *)(DAT_100240b8 + 0x48),0x43);
        if (IVar4 == 3) {
          bVar3 = true;
          *(undefined4 *)(DAT_1002392c + 0x1c) = 0;
          *(undefined1 *)(DAT_1002392c + 0x20) = 0;
          *(undefined4 *)(DAT_1002392c + 8) = uVar2;
          FUN_1000bde0();
        }
      }
      if (param_2 != (HANDLE)0x0) {
        if ((DAT_100238dc._2_1_ & 1) != 0) {
          piVar1 = (int *)(DAT_1002392c + 0x14);
          iVar5 = FUN_10012303(param_2,0,2);
          *piVar1 = *piVar1 - iVar5;
        }
        FUN_10012303(param_2,0,0);
      }
    }
  } while (bVar3);
  return;
}


