
/* ==== FUN_00433940 @ 00433940 ==== 
 * signature: uint __cdecl FUN_00433940(int * param_1, int * param_2)
 * body: 00433940-0043395c
 */

uint __cdecl FUN_00433940(int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(*param_1 + 0x3a);
  *param_2 = iVar1;
  return -(uint)(iVar1 == 0) & 0x10000;
}


