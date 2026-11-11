
/* ==== FUN_140233b0 @ 140233b0 ==== 
 * signature: int __cdecl FUN_140233b0(uchar * param_1, size_t param_2)
 * body: 140233b0-1402340b
 */

int __cdecl FUN_140233b0(uchar *param_1,size_t param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *DAT_140272fc;
  piVar2 = DAT_140272fc;
  while( true ) {
    if (iVar1 == 0) {
      return -((int)piVar2 - (int)DAT_140272fc >> 2);
    }
    iVar1 = __mbsnbicoll(param_1,(uchar *)*piVar2,param_2);
    if ((iVar1 == 0) &&
       ((*(char *)(*piVar2 + param_2) == '=' || (*(char *)(*piVar2 + param_2) == '\0')))) break;
    piVar2 = piVar2 + 1;
    iVar1 = *piVar2;
  }
  return (int)piVar2 - (int)DAT_140272fc >> 2;
}


