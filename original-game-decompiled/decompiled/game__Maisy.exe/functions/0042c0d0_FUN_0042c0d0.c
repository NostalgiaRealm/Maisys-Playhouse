
/* ==== FUN_0042c0d0 @ 0042c0d0 ==== 
 * signature: undefined4 __cdecl FUN_0042c0d0(int * param_1, int param_2, int param_3)
 * body: 0042c0d0-0042c12b
 */

undefined4 __cdecl FUN_0042c0d0(int *param_1,int param_2,int param_3)

{
  int iVar1;
  short sVar2;
  short local_28 [3];
  int local_22;
  int local_1e;
  code *local_8;
  
  sVar2 = 1;
  local_8 = *(code **)(*param_1 + 0x274);
  while( true ) {
    local_28[0] = sVar2;
    iVar1 = (*local_8)(local_28,sVar2);
    if (iVar1 != 0) {
      return 0;
    }
    if ((param_2 == local_22) && (param_3 == local_1e)) break;
    sVar2 = sVar2 + 1;
  }
  return 1;
}


