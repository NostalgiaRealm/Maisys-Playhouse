
/* ==== FUN_140101b0 @ 140101b0 ==== 
 * signature: undefined __cdecl FUN_140101b0(undefined4 param_1, undefined1 * param_2, short param_3, size_t param_4, undefined4 * param_5, size_t param_6, void * param_7, char param_8)
 * body: 140101b0-14010276
 */

void __cdecl
FUN_140101b0(undefined4 param_1,undefined1 *param_2,short param_3,size_t param_4,undefined4 *param_5
            ,size_t param_6,void *param_7,char param_8)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  
  param_2[1] = (undefined1)param_3;
  *param_2 = param_3._1_1_;
  param_2[5] = (char)param_4;
  param_2[4] = (char)(param_4 >> 8);
  param_2[3] = (char)(param_4 >> 0x10);
  puVar3 = param_2 + 6;
  param_2[2] = (char)(param_4 >> 0x18);
  if (param_8 == '\x01') {
    if (param_4 == 2) {
      uVar1 = *(undefined2 *)param_5;
      param_2[7] = (char)uVar1;
      *puVar3 = (char)((ushort)uVar1 >> 8);
    }
    else if (param_4 == 4) {
      uVar2 = *param_5;
      param_2[9] = (char)uVar2;
      param_2[8] = (char)((uint)uVar2 >> 8);
      param_2[7] = (char)((uint)uVar2 >> 0x10);
      *puVar3 = (char)((uint)uVar2 >> 0x18);
    }
    else if (param_4 == 8) {
      FUN_14010490((int)puVar3,(int)param_5);
    }
  }
  else {
    FID_conflict__memcpy(puVar3,param_5,param_4);
  }
  puVar3 = puVar3 + param_4;
  if ((0x31 < param_3) && (param_3 < 0x3f)) {
    puVar3[1] = (char)param_6;
    *puVar3 = (char)(param_6 >> 8);
    if (0 < (int)param_6) {
      FID_conflict__memcpy(puVar3 + 2,param_7,param_6);
    }
  }
  return;
}


