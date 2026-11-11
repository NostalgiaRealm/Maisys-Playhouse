
/* ==== FUN_004842a0 @ 004842a0 ==== 
 * signature: undefined4 __cdecl FUN_004842a0(undefined4 param_1, int param_2, int * param_3, int * param_4)
 * body: 004842a0-004842e1
 */

undefined4 __cdecl FUN_004842a0(undefined4 param_1,int param_2,int *param_3,int *param_4)

{
  int iVar1;
  
  iVar1 = DAT_004dc564;
  if (param_2 != 0) {
    iVar1 = FUN_0048b550(param_2);
    iVar1 = *(int *)(iVar1 + 4);
  }
  if (iVar1 != 0) {
    FUN_00436b80(DAT_004dae3c,iVar1,param_3,0,param_4);
    return 0;
  }
  return 0x10000;
}


