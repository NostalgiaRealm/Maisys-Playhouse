
/* ==== FUN_004bd1e8 @ 004bd1e8 ==== 
 * signature: undefined __fastcall FUN_004bd1e8(int param_1)
 * body: 004bd1e8-004bd3ad
 */

void __fastcall FUN_004bd1e8(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  HGLOBAL pvVar4;
  char *pcVar5;
  char local_314 [256];
  uchar local_214 [260];
  char local_110 [260];
  int local_c;
  uchar *local_8;
  
  local_c = FUN_004bafca();
  puVar1 = (undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(local_c + 8) = *puVar1;
  *(undefined4 *)(local_c + 0xc) = *puVar1;
  GetModuleFileNameA((HMODULE)*puVar1,(LPSTR)local_214,0x104);
  local_8 = __mbsrchr(local_214,0x2e);
  *local_8 = '\0';
  iVar3 = FUN_004bafca();
  if (*(char *)(iVar3 + 0x14) == '\0') {
    piVar2 = (int *)(param_1 + 0x80);
    AfxGetFileName((char *)local_214,local_110,0x104);
    if (*piVar2 == 0) {
      iVar3 = FUN_00492680(local_110);
      *piVar2 = iVar3;
    }
    if (*(int *)(param_1 + 0x70) != 0) goto LAB_004bd31d;
    iVar3 = AfxLoadString(0xe000,local_314,0x100);
    if (iVar3 == 0) {
      pvVar4 = (HGLOBAL)FUN_00492680((char *)*piVar2);
    }
    else {
      pvVar4 = (HGLOBAL)FUN_00492680(local_314);
    }
  }
  else {
    piVar2 = (int *)(param_1 + 0x80);
    AfxGetFileName((char *)local_214,local_110,0x104);
    if (*piVar2 == 0) {
      pvVar4 = FUN_004bd1b8(local_110);
      *piVar2 = (int)pvVar4;
    }
    if (*(int *)(param_1 + 0x70) != 0) goto LAB_004bd31d;
    iVar3 = AfxLoadString(0xe000,local_314,0x100);
    if (iVar3 == 0) {
      pcVar5 = (char *)*piVar2;
    }
    else {
      pcVar5 = local_314;
    }
    pvVar4 = FUN_004bd1b8(pcVar5);
  }
  *(HGLOBAL *)(param_1 + 0x70) = pvVar4;
LAB_004bd31d:
  *(undefined4 *)(local_c + 0x10) = *(undefined4 *)(param_1 + 0x70);
  if (*(int *)(param_1 + 0x84) == 0) {
    lstrcpyA((LPSTR)local_8,".HLP");
    iVar3 = FUN_004bafca();
    if (*(char *)(iVar3 + 0x14) == '\0') {
      pvVar4 = (HGLOBAL)FUN_00492680((char *)local_214);
    }
    else {
      pvVar4 = FUN_004bd1b8((LPCSTR)local_214);
    }
    *(int *)(param_1 + 0x84) = (int)pvVar4;
    *local_8 = '\0';
  }
  if (*(int *)(param_1 + 0x88) == 0) {
    lstrcatA(local_110,".INI");
    iVar3 = FUN_004bafca();
    if (*(char *)(iVar3 + 0x14) == '\0') {
      pvVar4 = (HGLOBAL)FUN_00492680(local_110);
    }
    else {
      pvVar4 = FUN_004bd1b8(local_110);
    }
    *(int *)(param_1 + 0x88) = (int)pvVar4;
  }
  return;
}


