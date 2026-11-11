
/* ==== FUN_1001488c @ 1001488c ==== 
 * signature: undefined __cdecl FUN_1001488c(LPSTR param_1, uint * param_2)
 * body: 1001488c-100148be
 */

void __cdecl FUN_1001488c(LPSTR param_1,uint *param_2)

{
  LPCSTR lpsz;
  uint *puVar1;
  
  lpsz = FUN_10014859(param_1,param_2);
  puVar1 = FUN_10016a60(param_2,*lpsz);
  if (puVar1 == (uint *)0x0) {
    lpsz = CharNextA(lpsz);
  }
  *lpsz = '\0';
  return;
}


