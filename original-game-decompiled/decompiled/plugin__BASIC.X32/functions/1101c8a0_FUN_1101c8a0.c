
/* ==== FUN_1101c8a0 @ 1101c8a0 ==== 
 * signature: uint __cdecl FUN_1101c8a0(undefined4 param_1, int param_2, short * param_3)
 * body: 1101c8a0-1101c8d9
 */

uint __cdecl FUN_1101c8a0(undefined4 param_1,int param_2,short *param_3)

{
  uint in_EAX;
  undefined4 *puVar1;
  
  if (*param_3 == 0x1f9) {
    puVar1 = (undefined4 *)(*(int *)(param_3 + 1) * 0xe + *(int *)(param_2 + 0x1c));
    *(undefined4 *)param_3 = *puVar1;
    *(undefined4 *)(param_3 + 2) = puVar1[1];
    in_EAX = puVar1[2];
    *(uint *)(param_3 + 4) = in_EAX;
    param_3[6] = *(short *)(puVar1 + 3);
  }
  return in_EAX & 0xffff0000;
}


