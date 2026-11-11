
/* ==== FUN_004a1e40 @ 004a1e40 ==== 
 * signature: int __cdecl FUN_004a1e40(uchar * param_1, size_t param_2)
 * body: 004a1e40-004a1e9b
 */

int __cdecl FUN_004a1e40(uchar *param_1,size_t param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *DAT_004de1c0;
  piVar2 = DAT_004de1c0;
  while( true ) {
    if (iVar1 == 0) {
      return -((int)piVar2 - (int)DAT_004de1c0 >> 2);
    }
    iVar1 = __mbsnbicoll(param_1,(uchar *)*piVar2,param_2);
    if ((iVar1 == 0) &&
       ((*(char *)(*piVar2 + param_2) == '=' || (*(char *)(*piVar2 + param_2) == '\0')))) break;
    piVar2 = piVar2 + 1;
    iVar1 = *piVar2;
  }
  return (int)piVar2 - (int)DAT_004de1c0 >> 2;
}


