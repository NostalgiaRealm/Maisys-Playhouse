
/* ==== FUN_0043c860 @ 0043c860 ==== 
 * signature: undefined4 __cdecl FUN_0043c860(char * param_1, char * param_2)
 * body: 0043c860-0043c887
 */

undefined4 __cdecl FUN_0043c860(char *param_1,char *param_2)

{
  char cVar1;
  undefined3 uVar2;
  
  if ((param_2[2] == param_1[2]) && (param_2[1] == param_1[1])) {
    cVar1 = *param_1;
    uVar2 = (undefined3)((uint)param_1 >> 8);
    param_1 = (char *)CONCAT31(uVar2,cVar1);
    if (*param_2 == cVar1) {
      return CONCAT31(uVar2,1);
    }
  }
  return (uint)param_1 & 0xffffff00;
}


