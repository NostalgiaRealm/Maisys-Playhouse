
/* ==== FUN_10006070 @ 10006070 ==== 
 * signature: undefined __cdecl FUN_10006070(int param_1, int * param_2, int * param_3)
 * body: 10006070-100060a0
 */

void __cdecl FUN_10006070(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  
  *param_2 = param_1;
  *param_3 = param_1 + 0x28;
  if (*(short *)(*param_2 + 0xe) == 8) {
    iVar1 = *(int *)(*param_2 + 0x20);
    if (iVar1 != 0) {
      *param_3 = param_1 + 0x28 + iVar1 * 4;
      return;
    }
    *param_3 = param_1 + 0x428;
  }
  return;
}


