
/* ==== FUN_004236b0 @ 004236b0 ==== 
 * signature: undefined __cdecl FUN_004236b0(char * param_1, byte * param_2)
 * body: 004236b0-004236e8
 */

void __cdecl FUN_004236b0(char *param_1,byte *param_2)

{
  int iVar1;
  
  iVar1 = FUN_0043ba40(param_1);
  if (iVar1 < 0xff) {
    iVar1 = FUN_0043ba40(param_1);
    *param_2 = (byte)iVar1;
  }
  else {
    *param_2 = 0xff;
  }
  param_2[*param_2 + 1] = 0;
  return;
}


