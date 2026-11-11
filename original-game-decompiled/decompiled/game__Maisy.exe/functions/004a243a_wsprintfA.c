
/* ==== USER32.DLL::wsprintfA @ 004a243a ==== 
 * signature: int __cdecl wsprintfA(LPSTR param_1, LPCSTR param_2, ...)
 * body: 004a243a-004a243f
 * thunk to: USER32.DLL::wsprintfA
 */

int __cdecl wsprintfA(LPSTR param_1,LPCSTR param_2,...)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a243a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = wsprintfA(param_1,param_2);
  return iVar1;
}


