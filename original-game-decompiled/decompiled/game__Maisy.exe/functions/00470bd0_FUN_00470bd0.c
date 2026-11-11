
/* ==== FUN_00470bd0 @ 00470bd0 ==== 
 * signature: undefined __fastcall FUN_00470bd0(int param_1)
 * body: 00470bd0-00470c7a
 */

void __fastcall FUN_00470bd0(int param_1)

{
  undefined4 uVar1;
  short sVar2;
  undefined1 local_14 [2];
  undefined4 *local_12;
  LPVOID local_a;
  
  if (*(int *)(param_1 + 0x96) != 0) {
    sVar2 = *(short *)(*(int *)(param_1 + 0x96) + 0x26);
    if (0 < sVar2) {
      do {
        uVar1 = FUN_0042fe50(*(void **)(param_1 + 0x96),local_14);
        if ((char)uVar1 != '\0') {
          if (local_a != (LPVOID)0x0) {
            FUN_0043ba20(local_a);
          }
          if (local_12 != (undefined4 *)0x0) {
            (**(code **)*local_12)(1);
          }
        }
        sVar2 = sVar2 + -1;
      } while (sVar2 != 0);
    }
    if (*(undefined4 **)(param_1 + 0x96) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x96))(1);
    }
    *(undefined4 *)(param_1 + 0x96) = 0;
  }
  if (*(LPVOID *)(param_1 + 0x9a) != (LPVOID)0x0) {
    FUN_0043ba20(*(LPVOID *)(param_1 + 0x9a));
    *(undefined4 *)(param_1 + 0x9a) = 0;
  }
  *(undefined4 *)(param_1 + 0xa2) = 0;
  DAT_004dc57c = 0;
  DAT_004dc574 = 0;
  DAT_004dc578 = 0;
  return;
}


