
/* ==== FUN_12011570 @ 12011570 ==== 
 * signature: short __cdecl FUN_12011570(undefined4 param_1, char * param_2, uint param_3, undefined4 param_4, short param_5)
 * body: 12011570-120115dd
 */

short __cdecl
FUN_12011570(undefined4 param_1,char *param_2,uint param_3,undefined4 param_4,short param_5)

{
  int iVar1;
  short sVar2;
  char local_36 [54];
  
  sVar2 = 0;
  while ((param_5 < 0x101 && (sVar2 == 0))) {
    FUN_12028238();
    iVar1 = _strncmp(local_36,param_2,param_3 & 0xffff);
    if (iVar1 == 0) {
      sVar2 = param_5;
    }
    param_5 = param_5 + 1;
  }
  return sVar2;
}


