
/* ==== FUN_1100aa10 @ 1100aa10 ==== 
 * signature: undefined __cdecl FUN_1100aa10(undefined4 * param_1, int param_2, undefined4 * param_3)
 * body: 1100aa10-1100aafb
 */

void __cdecl FUN_1100aa10(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  char cVar1;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  byte local_104;
  byte local_103;
  undefined1 local_100 [256];
  
  cVar1 = FUN_11011800(param_1,*param_3,&local_118,0x16);
  if (cVar1 != '\0') {
    if (local_104 != 0) {
      FUN_11011800(param_1,*param_3,local_100,(uint)local_104);
      local_100[local_104] = 0;
      FUN_110046e0(param_1,local_100,&local_114,&local_110);
    }
    if (local_103 != 0) {
      FUN_11011800(param_1,*param_3,local_100,(uint)local_103);
      local_100[local_103] = 0;
      FUN_110046e0(param_1,local_100,&local_10c,&local_108);
    }
    *(undefined4 *)(param_2 + 0xc) = local_118;
    *(undefined4 *)(param_2 + 0x10) = local_114;
    *(undefined4 *)(param_2 + 0x14) = local_110;
    *(undefined4 *)(param_2 + 0x18) = local_10c;
    *(undefined4 *)(param_2 + 0x1c) = local_108;
    *(undefined1 *)((int)param_3 + 0x12) = 1;
  }
  return;
}


