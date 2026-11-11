
/* ==== FUN_110188a0 @ 110188a0 ==== 
 * signature: undefined __cdecl FUN_110188a0(int param_1, uint * param_2)
 * body: 110188a0-11018a18
 */

void __cdecl FUN_110188a0(int param_1,uint *param_2)

{
  SIZE_T _Size;
  char cVar1;
  void *_Dst;
  uint local_4;
  
  local_4 = *(uint *)(param_1 + 0xc);
  *param_2 = 0;
  cVar1 = FUN_110062b0(&local_4,'\x03');
  if (cVar1 == '\0') {
    FUN_11006290(param_2,'\x03');
  }
  else {
    FUN_11006270(param_2,'\x03');
  }
  cVar1 = FUN_110062b0(&local_4,'\x04');
  if (cVar1 == '\0') {
    FUN_11006290(param_2,'\x04');
  }
  else {
    FUN_11006270(param_2,'\x04');
  }
  cVar1 = FUN_110062b0(&local_4,'\x06');
  if (cVar1 == '\0') {
    FUN_11006290(param_2,'\x06');
  }
  else {
    FUN_11006270(param_2,'\x06');
  }
  cVar1 = FUN_110062b0(&local_4,'\t');
  if (cVar1 == '\0') {
    FUN_11006290(param_2,'\t');
  }
  else {
    FUN_11006270(param_2,'\t');
  }
  cVar1 = FUN_110062b0(&local_4,'\v');
  if (cVar1 == '\0') {
    FUN_11006290(param_2,'\v');
  }
  else {
    FUN_11006270(param_2,'\v');
  }
  cVar1 = FUN_110062b0(&local_4,'\f');
  if (cVar1 == '\0') {
    FUN_11006290(param_2,'\f');
  }
  else {
    FUN_11006270(param_2,'\f');
  }
  param_2[1] = *(uint *)(param_1 + 0x10);
  param_2[2] = *(uint *)(param_1 + 0x14);
  param_2[3] = *(uint *)(param_1 + 0x18);
  param_2[4] = *(uint *)(param_1 + 0x1c);
  *(undefined2 *)((int)param_2 + 0x16) = *(undefined2 *)(param_1 + 0x28);
  param_2[9] = *(uint *)(param_1 + 0x46);
  param_2[7] = *(uint *)(param_1 + 0x24);
  if (*(int *)(param_1 + 0x20) == 0) {
    param_2[6] = 0;
  }
  else {
    _Size = *(short *)(param_1 + 0x28) * 0x58;
    _Dst = (void *)FUN_11029420(_Size);
    param_2[6] = (uint)_Dst;
    if (_Dst != (void *)0x0) {
      FID_conflict__memcpy(_Dst,*(void **)(param_1 + 0x20),_Size);
      FUN_11018e40(param_1,(int)param_2);
      return;
    }
  }
  return;
}


