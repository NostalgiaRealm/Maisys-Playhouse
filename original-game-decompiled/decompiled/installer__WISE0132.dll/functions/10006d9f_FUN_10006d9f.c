
/* ==== FUN_10006d9f @ 10006d9f ==== 
 * signature: undefined __cdecl FUN_10006d9f(LPCSTR param_1, int param_2, int param_3)
 * body: 10006d9f-10006e58
 */

void __cdecl FUN_10006d9f(LPCSTR param_1,int param_2,int param_3)

{
  LSTATUS LVar1;
  int iVar2;
  CHAR local_20c [256];
  int local_10c [64];
  char local_c [8];
  
  iVar2 = 0;
  lstrcpyA(local_20c,param_1);
  FUN_10012386(local_20c,1);
  LVar1 = FUN_10004d80((HKEY)0x2,PTR_s_Software_Microsoft_Windows_Curre_1001f050,(LPBYTE)local_10c,
                       local_20c,local_c,0x100,1);
  if (LVar1 == 0) {
    iVar2 = FUN_10016230((byte *)local_10c);
  }
  if (param_3 == 0) {
    if ((param_2 != 0) && (iVar2 == 0)) {
      iVar2 = 1;
    }
    local_10c[0] = iVar2 + 1;
    FUN_10004d00(2,(HKEY)PTR_s_Software_Microsoft_Windows_Curre_1001f050,local_20c,3,
                 (BYTE *)local_10c,4,0);
  }
  else if (0 < iVar2) {
    FUN_10002639(s_Shared_DLL_counter_ignored__1001f674);
  }
  return;
}


