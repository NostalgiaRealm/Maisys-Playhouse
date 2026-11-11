
/* ==== FUN_12004050 @ 12004050 ==== 
 * signature: undefined __fastcall FUN_12004050(int param_1)
 * body: 12004050-1200409c
 */

void __fastcall FUN_12004050(int param_1)

{
  short sVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x28) != 0) {
    sVar1 = *(short *)(param_1 + 0x26);
    iVar2 = *(int *)(param_1 + 0x28);
    while (sVar1 = sVar1 + -1, -1 < sVar1) {
      *(undefined4 *)(iVar2 + 0x14) = 0;
      *(undefined4 *)(iVar2 + 0x10) = 0;
      *(undefined4 *)(iVar2 + 0xc) = 0;
      *(undefined4 *)(iVar2 + 8) = 0;
      *(undefined1 *)(iVar2 + 1) = 0xff;
      *(undefined1 *)(iVar2 + 2) = 0;
      *(undefined1 *)(iVar2 + 3) = 0x7f;
      *(undefined1 *)(iVar2 + 4) = 0x40;
      *(undefined1 *)(iVar2 + 5) = 0;
      *(undefined2 *)(iVar2 + 6) = 0;
      iVar2 = iVar2 + 0x18;
    }
  }
  return;
}


