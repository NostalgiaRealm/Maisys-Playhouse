
/* ==== FUN_00468300 @ 00468300 ==== 
 * signature: uint __cdecl FUN_00468300(undefined4 param_1, void * param_2, int param_3)
 * body: 00468300-00468325
 */

uint __cdecl FUN_00468300(undefined4 param_1,void *param_2,int param_3)

{
  undefined4 uVar1;
  
  if (param_2 == (void *)0x0) {
    return 0x10001;
  }
  uVar1 = FUN_00430090(param_2,param_3);
  return -(uint)((char)uVar1 == '\0') & 0x10000;
}


