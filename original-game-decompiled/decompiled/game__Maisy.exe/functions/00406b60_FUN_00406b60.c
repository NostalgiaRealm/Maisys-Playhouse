
/* ==== FUN_00406b60 @ 00406b60 ==== 
 * signature: undefined __cdecl FUN_00406b60(int param_1, short param_2)
 * body: 00406b60-00406ba6
 */

void __cdecl FUN_00406b60(int param_1,short param_2)

{
  short sVar1;
  int iVar2;
  
  iVar2 = FUN_00430190(param_1);
  sVar1 = *(short *)(param_1 + 0x26);
  for (; param_2 < sVar1; param_2 = param_2 + 1) {
    *(short *)(*(int *)(param_2 * 0x1a + iVar2) + 0x92) = param_2;
  }
  FUN_004301f0(param_1);
  return;
}


