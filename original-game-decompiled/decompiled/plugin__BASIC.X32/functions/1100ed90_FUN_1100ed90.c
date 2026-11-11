
/* ==== FUN_1100ed90 @ 1100ed90 ==== 
 * signature: undefined4 __cdecl FUN_1100ed90(int param_1, int param_2, int param_3, int param_4)
 * body: 1100ed90-1100eda8
 */

undefined4 __cdecl FUN_1100ed90(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  
  iVar1 = ((param_2 - param_1) * param_3) / param_4;
  return CONCAT31((int3)((uint)iVar1 >> 8),(char)iVar1 + (char)param_1);
}


