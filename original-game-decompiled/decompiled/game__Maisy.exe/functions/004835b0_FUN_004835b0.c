
/* ==== FUN_004835b0 @ 004835b0 ==== 
 * signature: undefined4 __cdecl FUN_004835b0(undefined4 param_1, short * param_2, int param_3, undefined4 * param_4)
 * body: 004835b0-004835eb
 */

undefined4 __cdecl FUN_004835b0(undefined4 param_1,short *param_2,int param_3,undefined4 *param_4)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 local_8;
  
  piVar1 = (int *)FUN_00482af0(param_3,&local_8);
  if (piVar1 == (int *)0x0) {
    return local_8;
  }
  uVar2 = FUN_004835f0(param_1,param_2,piVar1,(int *)0x0,param_4);
  return uVar2;
}


