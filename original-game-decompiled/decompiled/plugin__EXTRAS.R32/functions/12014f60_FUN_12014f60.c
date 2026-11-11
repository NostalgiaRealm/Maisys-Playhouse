
/* ==== FUN_12014f60 @ 12014f60 ==== 
 * signature: undefined4 __cdecl FUN_12014f60(int param_1, undefined2 * param_2)
 * body: 12014f60-12014fa0
 */

undefined4 __cdecl FUN_12014f60(int param_1,undefined2 *param_2)

{
  char *pcVar1;
  
  for (pcVar1 = *(char **)(param_1 + 0x22) + *(int *)(param_1 + 0x1e);
      ((*(char **)(param_1 + 0x22) < pcVar1 && (*pcVar1 != ':')) && (*pcVar1 != '/'));
      pcVar1 = pcVar1 + -1) {
  }
  if ((*pcVar1 == ':') || (*pcVar1 == '/')) {
    pcVar1 = pcVar1 + 1;
  }
  FUN_12027790(0,param_2,(int)pcVar1);
  return 0;
}


