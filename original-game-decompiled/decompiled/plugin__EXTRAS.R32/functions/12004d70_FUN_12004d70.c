
/* ==== FUN_12004d70 @ 12004d70 ==== 
 * signature: undefined __thiscall FUN_12004d70(void * this, DWORD * param_1, short param_2)
 * body: 12004d70-12004dcd
 */

void __thiscall FUN_12004d70(void *this,DWORD *param_1,short param_2)

{
  uint uVar1;
  DWORD *pDVar2;
  DWORD local_4;
  
  if ((*(char *)((int)this + 4) != '\0') && (param_2 < 5)) {
    local_4 = 0;
    if (0 < param_2) {
      pDVar2 = &local_4;
      for (uVar1 = (uint)(int)param_2 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
        *pDVar2 = *param_1;
        param_1 = param_1 + 1;
        pDVar2 = pDVar2 + 1;
      }
      for (uVar1 = (int)param_2 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
        *(char *)pDVar2 = (char)*param_1;
        param_1 = (DWORD *)((int)param_1 + 1);
        pDVar2 = (DWORD *)((int)pDVar2 + 1);
      }
    }
    midiOutShortMsg(*(HMIDIOUT *)((int)this + 6),local_4);
  }
  return;
}


