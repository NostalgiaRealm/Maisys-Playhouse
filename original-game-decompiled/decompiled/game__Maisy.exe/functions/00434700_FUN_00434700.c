
/* ==== FUN_00434700 @ 00434700 ==== 
 * signature: undefined __stdcall FUN_00434700(void)
 * body: 00434700-0043477e
 */

void FUN_00434700(void)

{
  undefined4 *puVar1;
  HGDIOBJ ho;
  LPVOID pvVar2;
  int iVar3;
  short sVar4;
  
  if (DAT_004dae30 != (int *)0x0) {
    sVar4 = 0;
    iVar3 = FUN_00430190((int)DAT_004dae30);
    if (0 < *(int *)((int)DAT_004dae30 + 0x26)) {
      do {
        puVar1 = (undefined4 *)(sVar4 * 0x1a + iVar3);
        ho = (HGDIOBJ)*puVar1;
        if (ho != (HGDIOBJ)0x0) {
          DeleteObject(ho);
        }
        pvVar2 = *(LPVOID *)((int)puVar1 + 0x16);
        if (pvVar2 != (LPVOID)0x0) {
          FUN_0043ba20(pvVar2);
        }
        sVar4 = sVar4 + 1;
      } while ((int)sVar4 < *(int *)((int)DAT_004dae30 + 0x26));
    }
    FUN_004301f0((int)DAT_004dae30);
    (**(code **)(*DAT_004dae30 + 4))();
  }
  return;
}


