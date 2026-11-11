
/* ==== FUN_00468330 @ 00468330 ==== 
 * signature: uint __cdecl FUN_00468330(undefined4 param_1, void * param_2, int param_3, void * param_4)
 * body: 00468330-00468359
 */

uint __cdecl FUN_00468330(undefined4 param_1,void *param_2,int param_3,void *param_4)

{
  undefined4 uVar1;
  
  if (param_2 == (void *)0x0) {
    return 0x10001;
  }
  uVar1 = FUN_00430370(param_2,param_3,param_4);
  return -(uint)((char)uVar1 == '\0') & 0x10000;
}


