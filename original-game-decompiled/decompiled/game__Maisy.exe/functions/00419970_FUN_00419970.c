
/* ==== FUN_00419970 @ 00419970 ==== 
 * signature: byte __fastcall FUN_00419970(int * param_1)
 * body: 00419970-004199d4
 */

byte __fastcall FUN_00419970(int *param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  void *pvVar4;
  
  if (*(short *)((int)param_1 + 0x46) != 3) {
    bVar1 = FUN_00462fe0(param_1);
    return bVar1;
  }
  if ((*(byte *)((int)param_1 + 0x29) & 1) == 0) {
    *(undefined4 *)((int)param_1 + 0x8e) = 2;
    if ((*(byte *)(param_1 + 0x27) & 2) != 0) {
      uVar2 = FUN_00419310(param_1);
      if ((char)uVar2 != '\0') {
        iVar3 = FUN_0040c620(param_1);
        if (*(char *)(iVar3 + 0xaa) == '\0') {
          pvVar4 = (void *)FUN_0040c620(param_1);
          FUN_00407970(pvVar4);
        }
      }
    }
    *(uint *)((int)param_1 + 0x8e) = *(uint *)((int)param_1 + 0x8e) & 0xfffffffd;
  }
  FUN_0046a150(param_1);
  return 1;
}


