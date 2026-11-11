
/* ==== FUN_1000d16b @ 1000d16b ==== 
 * signature: char * __cdecl FUN_1000d16b(char * param_1, LPSTR param_2)
 * body: 1000d16b-1000d241
 */

char * __cdecl FUN_1000d16b(char *param_1,LPSTR param_2)

{
  LPCSTR pCVar1;
  uint *puVar2;
  LPCSTR pCVar3;
  uint uVar4;
  CHAR local_104 [256];
  
  FUN_1001488c(param_2,(uint *)&DAT_1001fa80);
  lstrcpyA(param_1,param_2);
  if (*param_1 != ';') {
    pCVar1 = FUN_100147fa(param_1,0x3b);
    if (pCVar1 != (LPCSTR)0x0) {
      *pCVar1 = '\0';
    }
    pCVar1 = FUN_10014859(param_1,(uint *)&DAT_1001fa80);
    puVar2 = FUN_10016a60((uint *)&DAT_1001fa80,*pCVar1);
    if (puVar2 == (uint *)0x0) {
      pCVar1 = pCVar1 + 1;
    }
    *pCVar1 = '\0';
    for (; param_1 <= pCVar1; pCVar1 = pCVar1 + -1) {
      if (*pCVar1 == '\\') goto LAB_1000d1e1;
    }
    if (*pCVar1 == '\\') {
LAB_1000d1e1:
      pCVar3 = FUN_100147fa(param_1,0x3d);
      if (pCVar3 != (LPCSTR)0x0) {
        lstrcpyA(local_104,pCVar1 + 1);
        lstrcpyA(pCVar3 + 1,local_104);
      }
    }
    while( true ) {
      if (DAT_100200d4 < 2) {
        uVar4 = (byte)PTR_DAT_1001fec8[*param_1 * 2] & 8;
      }
      else {
        uVar4 = FUN_10015ac0((int)*param_1,8);
      }
      if (uVar4 == 0) break;
      param_1 = param_1 + 1;
    }
  }
  return param_1;
}


