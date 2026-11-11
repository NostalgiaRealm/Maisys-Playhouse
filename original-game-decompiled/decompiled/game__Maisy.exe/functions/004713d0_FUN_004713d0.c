
/* ==== FUN_004713d0 @ 004713d0 ==== 
 * signature: undefined4 __cdecl FUN_004713d0(int param_1, int param_2, int param_3, int * param_4)
 * body: 004713d0-004713f9
 */

undefined4 __cdecl FUN_004713d0(int param_1,int param_2,int param_3,int *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)FUN_0048b560(0,param_1);
  iVar2 = FUN_00460400((void *)*puVar1,param_2,param_3);
  *param_4 = iVar2;
  return 0;
}


