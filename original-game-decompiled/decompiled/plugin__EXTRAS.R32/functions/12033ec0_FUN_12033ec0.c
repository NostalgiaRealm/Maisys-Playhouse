
/* ==== FUN_12033ec0 @ 12033ec0 ==== 
 * signature: int __cdecl FUN_12033ec0(uchar * param_1, size_t param_2)
 * body: 12033ec0-12033f1b
 */

int __cdecl FUN_12033ec0(uchar *param_1,size_t param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *DAT_12037eb4;
  piVar2 = DAT_12037eb4;
  while( true ) {
    if (iVar1 == 0) {
      return -((int)piVar2 - (int)DAT_12037eb4 >> 2);
    }
    iVar1 = __mbsnbicoll(param_1,(uchar *)*piVar2,param_2);
    if ((iVar1 == 0) &&
       ((*(char *)(*piVar2 + param_2) == '=' || (*(char *)(*piVar2 + param_2) == '\0')))) break;
    piVar2 = piVar2 + 1;
    iVar1 = *piVar2;
  }
  return (int)piVar2 - (int)DAT_12037eb4 >> 2;
}


