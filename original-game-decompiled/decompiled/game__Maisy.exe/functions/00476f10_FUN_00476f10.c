
/* ==== FUN_00476f10 @ 00476f10 ==== 
 * signature: bool __cdecl FUN_00476f10(int param_1)
 * body: 00476f10-00476f40
 */

bool __cdecl FUN_00476f10(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *(int *)(param_1 + 0x1a);
  piVar2 = FUN_0043ea50(*(int **)(*(int *)(param_1 + 0x16) + 8),(int *)(iVar1 + 6),
                        *(char **)(iVar1 + 10));
  *(int **)(iVar1 + 2) = piVar2;
  return piVar2 == (int *)0x0;
}


