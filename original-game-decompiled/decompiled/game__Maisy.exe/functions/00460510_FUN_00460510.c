
/* ==== FUN_00460510 @ 00460510 ==== 
 * signature: int __fastcall FUN_00460510(int param_1)
 * body: 00460510-00460533
 */

int __fastcall FUN_00460510(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 0xca) != '\0') {
    iVar2 = *(int *)(param_1 + 0xe8);
    iVar1 = FUN_00469a80(param_1);
    return iVar1 + iVar2;
  }
  iVar2 = FUN_00469a80(param_1);
  return iVar2;
}


