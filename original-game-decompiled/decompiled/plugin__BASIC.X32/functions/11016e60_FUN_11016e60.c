
/* ==== FUN_11016e60 @ 11016e60 ==== 
 * signature: bool __cdecl FUN_11016e60(undefined4 * param_1, int param_2)
 * body: 11016e60-11016ea8
 */

bool __cdecl FUN_11016e60(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)((int)param_1 + 0x1a);
  iVar2 = *(int *)(iVar1 + 0xc);
  if (iVar2 == 0x514) {
    FUN_11016fa0(param_1,param_2,(undefined2 *)(iVar1 + 0x24));
    return false;
  }
  if (iVar2 == 0x4b0) {
    FUN_11016eb0(param_1,param_2,(undefined2 *)(iVar1 + 0x24));
  }
  return iVar2 != 0x4b0;
}


