
/* ==== FUN_00409769 @ 00409769 ==== 
 * signature: undefined __cdecl FUN_00409769(LPSTR param_1, LPCSTR param_2)
 * body: 00409769-004097b0
 */

void __cdecl FUN_00409769(LPSTR param_1,LPCSTR param_2)

{
  char *pcVar1;
  int iVar2;
  
  do {
    lstrcpyA(param_1,param_2);
    pcVar1 = FUN_004097b1(param_1);
    wsprintfA(pcVar1,s__GLU_04x_TMP_00410e04,(uint)(ushort)DAT_00413870);
    DAT_00413870 = DAT_00413870 + 1;
    iVar2 = FUN_00408bcd(param_1);
  } while (iVar2 == 0);
  return;
}


