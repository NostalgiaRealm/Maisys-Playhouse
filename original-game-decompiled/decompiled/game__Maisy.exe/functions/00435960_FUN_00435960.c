
/* ==== FUN_00435960 @ 00435960 ==== 
 * signature: undefined __thiscall FUN_00435960(void * this, int param_1)
 * body: 00435960-004359cd
 */

void __thiscall FUN_00435960(void *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  short sVar3;
  
  sVar3 = 0;
  if (0 < *(int *)(param_1 + 0x112)) {
    do {
      iVar1 = sVar3 * 0x80 + *(int *)(param_1 + 0x116);
      if ((*(byte *)(iVar1 + 0x74) & 2) != 0) {
        puVar2 = FUN_00436b80(this,DAT_004dc564,(int *)(iVar1 + 0x14),0,(int *)0x0);
        if (puVar2 != (undefined4 *)0x0) {
          (**(code **)(**(int **)(DAT_004dc564 + 0x92) + 0x2b8))(puVar2,1);
        }
      }
      sVar3 = sVar3 + 1;
    } while ((int)sVar3 < *(int *)(param_1 + 0x112));
  }
  return;
}


