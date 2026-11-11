
/* ==== FUN_00496d10 @ 00496d10 ==== 
 * signature: undefined4 __cdecl FUN_00496d10(int * param_1)
 * body: 00496d10-00496d1e
 */

undefined4 __cdecl FUN_00496d10(int *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)*param_1;
  *param_1 = (int)(puVar1 + 1);
  return *puVar1;
}


