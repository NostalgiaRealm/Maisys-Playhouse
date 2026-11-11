
/* ==== FUN_00401d89 @ 00401d89 ==== 
 * signature: undefined __cdecl FUN_00401d89(int param_1, uint * param_2, int * param_3)
 * body: 00401d89-00401d99
 */

void __cdecl FUN_00401d89(int param_1,uint *param_2,int *param_3)

{
  *param_2 = *param_2 >> ((byte)param_1 & 0x1f);
  *param_3 = *param_3 - param_1;
  return;
}


