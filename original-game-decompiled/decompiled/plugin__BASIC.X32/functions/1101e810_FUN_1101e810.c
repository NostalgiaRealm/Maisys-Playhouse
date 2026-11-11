
/* ==== FUN_1101e810 @ 1101e810 ==== 
 * signature: undefined __cdecl FUN_1101e810(undefined4 * param_1, int param_2)
 * body: 1101e810-1101e854
 */

void __cdecl FUN_1101e810(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 local_30;
  undefined2 local_2c;
  undefined2 local_2a;
  
  uVar1 = FUN_1100fc30((int)param_1);
  FUN_1100fc50(param_1,uVar1,&local_30);
  *(undefined2 *)(param_2 + 0x4c) = local_2c;
  *(undefined2 *)(param_2 + 0x4e) = local_2a;
  *(undefined2 *)(param_2 + 0x78) = 0;
  *(undefined2 *)(param_2 + 0x76) = 0;
  return;
}


