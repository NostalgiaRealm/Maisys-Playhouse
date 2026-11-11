
/* ==== FUN_00496d20 @ 00496d20 ==== 
 * signature: undefined8 __cdecl FUN_00496d20(int * param_1)
 * body: 00496d20-00496d34
 */

undefined8 __cdecl FUN_00496d20(int *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  *param_1 = (int)(puVar1 + 1);
  return *puVar1;
}


