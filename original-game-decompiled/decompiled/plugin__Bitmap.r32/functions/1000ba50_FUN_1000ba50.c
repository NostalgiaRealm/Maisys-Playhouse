
/* ==== FUN_1000ba50 @ 1000ba50 ==== 
 * signature: undefined __cdecl FUN_1000ba50(int param_1, undefined4 * param_2)
 * body: 1000ba50-1000ba6c
 */

void __cdecl FUN_1000ba50(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1 - (int)param_2;
  iVar2 = 3;
  do {
    *(undefined4 *)((int)param_2 + iVar1) = *param_2;
    param_2 = param_2 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}


