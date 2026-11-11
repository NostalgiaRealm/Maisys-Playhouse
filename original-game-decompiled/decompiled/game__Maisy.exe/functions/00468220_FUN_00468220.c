
/* ==== FUN_00468220 @ 00468220 ==== 
 * signature: uint __cdecl FUN_00468220(undefined4 param_1, void * param_2, void * param_3)
 * body: 00468220-00468245
 */

uint __cdecl FUN_00468220(undefined4 param_1,void *param_2,void *param_3)

{
  undefined4 uVar1;
  
  if (param_2 == (void *)0x0) {
    return 0x10001;
  }
  uVar1 = FUN_0042fe50(param_2,param_3);
  return -(uint)((char)uVar1 == '\0') & 0x10000;
}


