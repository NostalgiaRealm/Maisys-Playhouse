
/* ==== FUN_0043c930 @ 0043c930 ==== 
 * signature: undefined __cdecl FUN_0043c930(int param_1)
 * body: 0043c930-0043c96e
 */

void __cdecl FUN_0043c930(int param_1)

{
  int iVar1;
  
  if ((param_1 != 0) && (*(short *)(param_1 + 0xc) != 0)) {
    iVar1 = FUN_00430a30(param_1);
    if (iVar1 != 0) {
      FUN_00488540((int)*(short *)(param_1 + 0xc),FUN_0043c970,FUN_0043c9c0,iVar1);
    }
    FUN_00430a40(param_1);
  }
  return;
}


