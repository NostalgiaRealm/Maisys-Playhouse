
/* ==== FUN_10012ffe @ 10012ffe ==== 
 * signature: undefined4 __cdecl FUN_10012ffe(LPCSTR param_1, DWORD param_2, LPCSTR param_3, LPCSTR param_4, LPCSTR param_5, LPSTR param_6, PUINT param_7, LPSTR param_8, PUINT param_9)
 * body: 10012ffe-1001302e
 */

undefined4 __cdecl
FUN_10012ffe(LPCSTR param_1,DWORD param_2,LPCSTR param_3,LPCSTR param_4,LPCSTR param_5,LPSTR param_6
            ,PUINT param_7,LPSTR param_8,PUINT param_9)

{
  undefined4 uVar1;
  
  uVar1 = FUN_100138b1(param_1);
  VerFindFileA(param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  return uVar1;
}


