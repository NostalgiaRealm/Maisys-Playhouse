
/* ==== FUN_004bd15b @ 004bd15b ==== 
 * signature: undefined4 __stdcall FUN_004bd15b(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 * body: 004bd15b-004bd1b7
 */

undefined4 FUN_004bd15b(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  SetErrorMode(0x8001);
  iVar1 = FUN_004bafca();
  *(undefined4 *)(iVar1 + 8) = param_1;
  *(undefined4 *)(iVar1 + 0xc) = param_1;
  iVar1 = FUN_004bafca();
  iVar1 = *(int *)(iVar1 + 4);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x60) = param_1;
    *(undefined4 *)(iVar1 + 100) = param_2;
    *(undefined4 *)(iVar1 + 0x68) = param_3;
    *(undefined4 *)(iVar1 + 0x6c) = param_4;
    FUN_004bd1e8(iVar1);
  }
  iVar1 = FUN_004bafca();
  if (*(char *)(iVar1 + 0x14) == '\0') {
    FUN_004a719d();
  }
  return 1;
}


