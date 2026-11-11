
/* ==== FUN_004834f0 @ 004834f0 ==== 
 * signature: undefined4 __cdecl FUN_004834f0(undefined4 param_1, short * param_2, int param_3, int * param_4, int param_5)
 * body: 004834f0-0048352b
 */

undefined4 __cdecl
FUN_004834f0(undefined4 param_1,short *param_2,int param_3,int *param_4,int param_5)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 local_8;
  
  piVar1 = (int *)FUN_00482af0(param_3,&local_8);
  if (piVar1 == (int *)0x0) {
    return local_8;
  }
  uVar2 = FUN_00483530(param_1,param_2,piVar1,param_4,param_5);
  return uVar2;
}


