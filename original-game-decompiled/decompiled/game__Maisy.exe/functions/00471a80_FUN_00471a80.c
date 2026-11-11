
/* ==== FUN_00471a80 @ 00471a80 ==== 
 * signature: undefined4 __cdecl FUN_00471a80(int param_1, char * param_2)
 * body: 00471a80-00471ab0
 */

undefined4 __cdecl FUN_00471a80(int param_1,char *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  
  puVar1 = (undefined4 *)FUN_0048b560(0,param_1);
  uVar2 = (**(code **)(*(int *)*puVar1 + 0x128))();
  *param_2 = '\x01' - ((uVar2 & 0x8000) == 0);
  return 0;
}


