
/* ==== FUN_11026e40 @ 11026e40 ==== 
 * signature: undefined __cdecl FUN_11026e40(undefined4 * param_1, int param_2, undefined4 * param_3)
 * body: 11026e40-11026f16
 */

void __cdecl FUN_11026e40(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  char cVar1;
  byte bVar2;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  byte local_10;
  char local_f;
  char local_e;
  char local_d;
  undefined4 local_c;
  undefined4 local_8;
  byte local_4;
  byte local_3;
  
  cVar1 = FUN_11011800(param_1,*param_3,&local_20,0x1e);
  if (cVar1 != '\0') {
    if (local_4 != 0) {
      FUN_11011880(param_1,*param_3,(uint)local_4);
    }
    if (local_3 != 0) {
      FUN_11011880(param_1,*param_3,(uint)local_3);
    }
    *(undefined4 *)(param_2 + 0xc) = local_20;
    *(undefined4 *)(param_2 + 0x10) = local_1c;
    *(undefined4 *)(param_2 + 0x14) = local_18;
    *(undefined4 *)(param_2 + 0x18) = local_14;
    bVar2 = (*(byte *)(param_2 + 0x1c) ^ local_10) & 1 ^ *(byte *)(param_2 + 0x1c);
    *(byte *)(param_2 + 0x1c) = bVar2;
    bVar2 = (local_f * '\x02' ^ bVar2) & 2 ^ bVar2;
    *(byte *)(param_2 + 0x1c) = bVar2;
    bVar2 = (local_e << 2 ^ bVar2) & 4 ^ bVar2;
    *(byte *)(param_2 + 0x1c) = bVar2;
    *(byte *)(param_2 + 0x1c) = (local_d << 3 ^ bVar2) & 8 ^ bVar2;
    *(undefined4 *)(param_2 + 0x1e) = local_c;
    *(undefined4 *)(param_2 + 0x22) = local_8;
    *(undefined1 *)((int)param_3 + 0x12) = 1;
  }
  return;
}


