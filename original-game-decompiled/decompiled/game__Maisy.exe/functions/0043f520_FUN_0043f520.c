
/* ==== FUN_0043f520 @ 0043f520 ==== 
 * signature: undefined __cdecl FUN_0043f520(int * param_1, undefined4 param_2)
 * body: 0043f520-0043f543
 */

void __cdecl FUN_0043f520(int *param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = FUN_0040af70();
  if (cVar1 != '\0') {
    param_1 = FUN_0042c350(param_1);
  }
  (**(code **)(*param_1 + 0xec))(param_2);
  return;
}


