
/* ==== FUN_004867c0 @ 004867c0 ==== 
 * signature: undefined4 __cdecl FUN_004867c0(int param_1)
 * body: 004867c0-00486807
 */

undefined4 __cdecl FUN_004867c0(int param_1)

{
  code *pcVar1;
  int local_c;
  undefined4 *local_8;
  
  pcVar1 = (code *)FUN_0048b580(param_1,0,2,&local_c);
  DAT_004e34cc = (*pcVar1)(local_c,&local_8);
  FUN_00486ce0((int)local_8);
  if (local_8 != (undefined4 *)0x0) {
    (**(code **)*local_8)(1);
  }
  return 0;
}


