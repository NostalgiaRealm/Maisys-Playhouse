
/* ==== FUN_004905d0 @ 004905d0 ==== 
 * signature: undefined4 __cdecl FUN_004905d0(HANDLE param_1)
 * body: 004905d0-004905f2
 */

undefined4 __cdecl FUN_004905d0(HANDLE param_1)

{
  BOOL BVar1;
  int *piVar2;
  
  BVar1 = FindClose(param_1);
  if (BVar1 == 0) {
    piVar2 = FUN_0048f9d0();
    *piVar2 = 0x16;
    return 0xffffffff;
  }
  return 0;
}


