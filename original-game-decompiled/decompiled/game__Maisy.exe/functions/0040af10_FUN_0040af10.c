
/* ==== FUN_0040af10 @ 0040af10 ==== 
 * signature: undefined __cdecl FUN_0040af10(char param_1)
 * body: 0040af10-0040af4f
 */

void __cdecl FUN_0040af10(char param_1)

{
  LPVOID pvVar1;
  
  if (DAT_004d95c4 != (LPVOID)0x0) {
    FUN_0043baa0();
    pvVar1 = DAT_004d95c4;
    if (param_1 != '\0') {
      if (DAT_004d95c4 != (LPVOID)0x0) {
        FUN_0043ba80();
        FUN_004a602d(pvVar1);
      }
      DAT_004d95c4 = (LPVOID)0x0;
    }
  }
  return;
}


