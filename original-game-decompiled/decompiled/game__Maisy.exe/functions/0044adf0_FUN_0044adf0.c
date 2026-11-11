
/* ==== FUN_0044adf0 @ 0044adf0 ==== 
 * signature: undefined4 __cdecl FUN_0044adf0(undefined4 param_1, int param_2, int param_3, undefined4 * param_4)
 * body: 0044adf0-0044ae30
 */

undefined4 __cdecl FUN_0044adf0(undefined4 param_1,int param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  
  piVar2 = (int *)FUN_0048b560(0,param_2);
  if (((*(byte *)(*piVar2 + 0x1e) & 1) != 0) && (iVar1 = *(int *)(*piVar2 + 4), iVar1 != 0)) {
    puVar3 = FUN_0041f760(DAT_004da380,iVar1,param_3);
    *param_4 = puVar3;
    return 0;
  }
  return 0x10000;
}


