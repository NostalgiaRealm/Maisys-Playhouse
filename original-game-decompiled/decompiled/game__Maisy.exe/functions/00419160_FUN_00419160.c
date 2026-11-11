
/* ==== FUN_00419160 @ 00419160 ==== 
 * signature: undefined __fastcall FUN_00419160(int param_1)
 * body: 00419160-004191ae
 */

void __fastcall FUN_00419160(int param_1)

{
  int iVar1;
  DWORD DVar2;
  
  if (*(char *)(param_1 + 0x170) != '\0') {
    iVar1 = *(int *)(param_1 + 0x94);
    if (iVar1 != 0) {
      DVar2 = timeGetTime();
      *(DWORD *)(param_1 + 0x98) = DVar2 + (int)(100000000 / (longlong)iVar1);
    }
    DVar2 = timeGetTime();
    *(undefined4 *)(param_1 + 0x16a) = 0;
    *(undefined1 *)(param_1 + 0x170) = 0;
    *(DWORD *)(param_1 + 0x166) = DVar2;
  }
  return;
}


