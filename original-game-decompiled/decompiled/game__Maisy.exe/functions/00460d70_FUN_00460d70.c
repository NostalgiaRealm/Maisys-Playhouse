
/* ==== FUN_00460d70 @ 00460d70 ==== 
 * signature: undefined4 __fastcall FUN_00460d70(int * param_1)
 * body: 00460d70-00460dd1
 */

undefined4 __fastcall FUN_00460d70(int *param_1)

{
  uint in_EAX;
  
  if (((short)param_1[0x4b] == -1) &&
     ((in_EAX = *(uint *)((int)param_1 + 0x142), in_EAX == 0 || (*(short *)(in_EAX + 0xc) < 1)))) {
    in_EAX = (**(code **)(*param_1 + 0x6c))();
    if (((char)in_EAX == '\0') &&
       ((*(int *)((int)param_1 + 0x13a) == 0 ||
        ((((*(short *)((int)param_1 + 0xb2) == 0 && ((short)param_1[0x2d] == 0)) &&
          (*(short *)((int)param_1 + 0xb6) == 0)) && ((short)param_1[0x2e] == 0)))))) {
      return CONCAT31((int3)(in_EAX >> 8),1);
    }
  }
  return in_EAX & 0xffffff00;
}


