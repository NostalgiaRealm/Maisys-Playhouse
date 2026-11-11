
/* ==== FUN_1100c1d0 @ 1100c1d0 ==== 
 * signature: undefined __cdecl FUN_1100c1d0(int param_1, int param_2)
 * body: 1100c1d0-1100c340
 */

void __cdecl FUN_1100c1d0(int param_1,int param_2)

{
  uint *puVar1;
  SIZE_T _Size;
  char cVar2;
  void *_Dst;
  uint local_4;
  
  local_4 = *(uint *)(param_1 + 0xc);
  puVar1 = (uint *)(param_2 + 0x10);
  *puVar1 = 0;
  cVar2 = FUN_110062b0(&local_4,'\x03');
  if (cVar2 == '\0') {
    FUN_11006290(puVar1,'\x03');
  }
  else {
    FUN_11006270(puVar1,'\x03');
  }
  cVar2 = FUN_110062b0(&local_4,'\x04');
  if (cVar2 == '\0') {
    FUN_11006290(puVar1,'\x04');
  }
  else {
    FUN_11006270(puVar1,'\x04');
  }
  cVar2 = FUN_110062b0(&local_4,'\x06');
  if (cVar2 == '\0') {
    FUN_11006290(puVar1,'\x06');
  }
  else {
    FUN_11006270(puVar1,'\x06');
  }
  cVar2 = FUN_110062b0(&local_4,'\t');
  if (cVar2 == '\0') {
    FUN_11006290(puVar1,'\t');
  }
  else {
    FUN_11006270(puVar1,'\t');
  }
  cVar2 = FUN_110062b0(&local_4,'\v');
  if (cVar2 == '\0') {
    FUN_11006290(puVar1,'\v');
  }
  else {
    FUN_11006270(puVar1,'\v');
  }
  cVar2 = FUN_110062b0(&local_4,'\f');
  if (cVar2 == '\0') {
    FUN_11006290(puVar1,'\f');
  }
  else {
    FUN_11006270(puVar1,'\f');
  }
  *(undefined4 *)(param_2 + 0x14) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(param_2 + 0x1c) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined2 *)(param_2 + 0x26) = *(undefined2 *)(param_1 + 0x28);
  *(undefined4 *)(param_2 + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(param_2 + 0x2c) = *(undefined4 *)(param_1 + 0x24);
  if (*(int *)(param_1 + 0x20) == 0) {
    *(undefined4 *)(param_2 + 0x28) = 0;
  }
  else {
    _Size = *(short *)(param_1 + 0x28) * 0xc;
    _Dst = (void *)FUN_11029420(_Size);
    *(void **)(param_2 + 0x28) = _Dst;
    if (_Dst != (void *)0x0) {
      FID_conflict__memcpy(_Dst,*(void **)(param_1 + 0x20),_Size);
      return;
    }
  }
  return;
}


