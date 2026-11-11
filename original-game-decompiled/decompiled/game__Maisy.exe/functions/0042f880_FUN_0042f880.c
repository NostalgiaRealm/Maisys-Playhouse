
/* ==== FUN_0042f880 @ 0042f880 ==== 
 * signature: undefined4 __cdecl FUN_0042f880(undefined4 param_1, char * param_2, char * param_3, va_list param_4)
 * body: 0042f880-0042f8a7
 */

undefined4 __cdecl FUN_0042f880(undefined4 param_1,char *param_2,char *param_3,va_list param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = _vsprintf(param_2,param_3,param_4);
  uVar2 = 0;
  if (iVar1 < 0) {
    uVar2 = 0x10000;
  }
  return uVar2;
}


