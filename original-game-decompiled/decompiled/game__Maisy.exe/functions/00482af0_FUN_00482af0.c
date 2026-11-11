
/* ==== FUN_00482af0 @ 00482af0 ==== 
 * signature: int __cdecl FUN_00482af0(int param_1, undefined4 * param_2)
 * body: 00482af0-00482b73
 */

int __cdecl FUN_00482af0(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  if (param_1 == 0) {
    *param_2 = 0x10001;
    return iVar1;
  }
  if (*(int *)(param_1 + -4) == 0) {
    iVar2 = 0x4261644f;
  }
  else {
    iVar2 = *(int *)(*(int *)(param_1 + -4) + 0xe);
  }
  if (iVar2 == 0x4370704f) {
    *param_2 = 0;
    return param_1;
  }
  if (iVar2 == 0x44656c4f) {
    *param_2 = 0x10002;
    return iVar1;
  }
  if (iVar2 != 0x4d6f6d4f) {
    *param_2 = 0x10002;
    return iVar1;
  }
  iVar1 = FUN_0048b550(param_1);
  if (iVar1 != 0) {
    *param_2 = 0;
    return iVar1;
  }
  *param_2 = 0x10001;
  return 0;
}


