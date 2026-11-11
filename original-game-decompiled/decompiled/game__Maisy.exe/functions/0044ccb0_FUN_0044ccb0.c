
/* ==== FUN_0044ccb0 @ 0044ccb0 ==== 
 * signature: int __cdecl FUN_0044ccb0(int param_1)
 * body: 0044ccb0-0044ccd4
 */

int __cdecl FUN_0044ccb0(int param_1)

{
  int *piVar1;
  
  piVar1 = DAT_004dbb0c;
  while( true ) {
    if (piVar1 == (int *)0x0) {
      return 0;
    }
    if (*(int *)(*piVar1 + 0x7e) == param_1) break;
    piVar1 = (int *)piVar1[1];
  }
  return *piVar1;
}


