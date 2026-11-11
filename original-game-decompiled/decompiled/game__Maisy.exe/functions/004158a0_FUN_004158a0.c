
/* ==== FUN_004158a0 @ 004158a0 ==== 
 * signature: undefined4 __cdecl FUN_004158a0(undefined4 param_1, int param_2, char param_3, char * param_4, undefined4 * param_5)
 * body: 004158a0-004158d4
 */

undefined4 __cdecl
FUN_004158a0(undefined4 param_1,int param_2,char param_3,char *param_4,undefined4 *param_5)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)FUN_0048b560(0,param_2);
    uVar2 = FUN_0048c8e0((int *)*puVar1,param_3,param_4,param_5);
    return uVar2;
  }
  return 0x10000;
}


