
/* ==== FUN_11008aa0 @ 11008aa0 ==== 
 * signature: int __cdecl FUN_11008aa0(uint param_1)
 * body: 11008aa0-11008ab2
 */

int __cdecl FUN_11008aa0(uint param_1)

{
  int iVar1;
  
  iVar1 = 0;
  for (; param_1 != 0; param_1 = param_1 >> 1) {
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}


