
/* ==== entry @ 004021c5 ==== 
 * signature: undefined4 __stdcall entry(void)
 * body: 004021c5-00402646;0040264a-00402669
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 00402647-00402649
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 entry(void)

{
  char *pcVar1;
  char cVar2;
  ATOM AVar3;
  LONG LVar4;
  undefined2 extraout_var;
  HFILE HVar5;
  HMODULE pHVar6;
  uint uVar7;
  int iVar8;
  char *pcVar9;
  undefined1 local_3b0 [128];
  CHAR local_330 [256];
  undefined1 local_230 [16];
  DWORD local_220;
  CHAR local_19c [128];
  CHAR local_11c [256];
  int local_1c;
  int local_18;
  HFILE local_14;
  HMODULE local_10;
  char *local_c;
  byte local_5;
  
  SetErrorMode(4);
  local_c = GetCommandLineA();
  cVar2 = *local_c;
  if (cVar2 == '\"') {
    cVar2 = local_c[1];
    pcVar9 = local_c;
    while ((local_c = pcVar9 + 1, cVar2 != '\0' && (cVar2 != '\"'))) {
      cVar2 = pcVar9[2];
      pcVar9 = local_c;
    }
    if (*local_c == '\"') {
      local_c = pcVar9 + 2;
    }
  }
  else {
    while ((cVar2 != '\0' && (cVar2 != ' '))) {
      pcVar9 = local_c + 1;
      local_c = local_c + 1;
      cVar2 = *pcVar9;
    }
  }
  cVar2 = *local_c;
  pcVar9 = local_c;
  while (cVar2 == ' ') {
    pcVar9 = pcVar9 + 1;
    cVar2 = *pcVar9;
  }
  local_c = pcVar9;
  local_10 = GetModuleHandleA((LPCSTR)0x0);
  if ((*pcVar9 == '/') && ((pcVar9[1] == 'S' || (pcVar9[1] == 's')))) {
    DAT_004042d0 = 1;
  }
  GetModuleFileNameA(local_10,local_330,0x100);
  cVar2 = *pcVar9;
  while ((cVar2 != '\0' && (cVar2 != '\x7f'))) {
    pcVar1 = pcVar9 + 1;
    pcVar9 = pcVar9 + 1;
    cVar2 = *pcVar1;
  }
  if (*pcVar9 != '\0') {
    *pcVar9 = '\0';
    iVar8 = 0;
    while( true ) {
      cVar2 = pcVar9[1];
      if ((cVar2 == '\0') || (cVar2 == ' ')) break;
      iVar8 = cVar2 + -0x30 + iVar8 * 10;
      pcVar9 = pcVar9 + 1;
    }
    DAT_00404188 = DAT_00404188 + iVar8;
    lstrcpyA(local_330,pcVar9 + 2);
  }
  DAT_004042b8 = _lopen(local_330,0);
  if ((int)DAT_004042b8 < 0) {
LAB_004024c2:
    FUN_00402b7c();
    return 0;
  }
  FUN_00401000();
  _DAT_004042b0 = DAT_00404188;
  DAT_004042a8 = DAT_00404188;
  _llseek(DAT_004042b8,DAT_00404188,0);
  _lread(DAT_004042b8,&local_5,1);
  if (local_5 != 0) {
    _lread(DAT_004042b8,local_11c,(uint)local_5);
    _lread(DAT_004042b8,&local_1c,4);
    local_14 = _lopen(local_11c,0);
    if (local_14 < 0) {
      local_11c[0] = '\0';
    }
    else {
      LVar4 = _llseek(local_14,0,2);
      if (local_1c != LVar4) {
        local_11c[0] = '\0';
      }
      _lclose(local_14);
    }
  }
  _lread(DAT_004042b8,&DAT_004042d4,4);
  _lread(DAT_004042b8,&DAT_00404350,0xc);
  _lread(DAT_004042b8,&DAT_0040431c,8);
  _lread(DAT_004042b8,&DAT_004042e4,0x38);
  if ((DAT_004042d4 & 0x1000) != 0) {
    DAT_004042d8 = 1;
  }
  if ((((DAT_004042d4 & 0x80) != 0) && (DAT_004042d0 == 0)) && (((byte)DAT_004042d4 & 3) != 2)) {
    FUN_00402b95();
  }
  pHVar6 = local_10;
  AVar3 = FUN_0040266a(local_10);
  if (CONCAT22(extraout_var,AVar3) == 0) {
    return 0;
  }
  iVar8 = FUN_004026c9(pHVar6);
  if (iVar8 == 0) {
    return 0;
  }
  _DAT_004042a0 = DAT_0040428c;
  _DAT_004042a4 = pHVar6;
  if (DAT_00404318 != 0) {
    local_14 = _llseek(DAT_004042b8,0,1);
    LVar4 = _llseek(DAT_004042b8,0,2);
    _llseek(DAT_004042b8,local_14,0);
    if (LVar4 != DAT_00404318) goto LAB_004024c2;
  }
  _DAT_00404330 = FUN_00401ef5;
  _DAT_00404334 = FUN_004020b6;
  _DAT_00404324 = GlobalAlloc(2,DAT_004042e4 + 1);
  _DAT_00404328 = GlobalLock(_DAT_00404324);
  DAT_00404344 = _StubFileWrite_12;
  DAT_0040432c = _DAT_00404328;
  FUN_00401ef5(DAT_004042b8,0,DAT_004042e8,(uint *)0x0);
  DAT_0040432c = (LPVOID)0x0;
  if (local_5 == 0) {
    FUN_00402b1b(local_11c);
    HVar5 = _lcreat(local_11c,0);
    _lclose(HVar5);
    HVar5 = _lopen(local_11c,2);
    if (HVar5 < 0) goto LAB_004024c2;
    FUN_00401ef5(DAT_004042b8,HVar5,DAT_004042ec,(uint *)0x0);
    _lclose(HVar5);
  }
  local_18 = 1;
  local_19c[0] = '\0';
  if (DAT_004042c0 == '\0') {
    pHVar6 = LoadLibraryA(local_11c);
    if (pHVar6 != (HMODULE)0x0) {
      DAT_0040435c = GetProcAddress(pHVar6,s_WiseMain_0040424c);
      DAT_00404340 = GetProcAddress(pHVar6,s_UpdateScreen_0040423c);
      DAT_0040433c = GetProcAddress(pHVar6,s_DisplayGraphics_0040422c);
      DAT_00404290 = GetProcAddress(pHVar6,s_DiskPrompt_00404220);
      DAT_00404344 = GetProcAddress(pHVar6,s_FileWrite_00404214);
      DAT_0040434c = GetProcAddress(pHVar6,s_HandleFtp_00404208);
    }
    if (DAT_0040435c == (FARPROC)0x0) {
      pcVar9 = s_Demo_installations_only_run_on_t_004041c4;
      if (local_5 == 0) {
        pcVar9 = s_System_DLLs_corrupt_or_missing__004041a4;
      }
      MessageBoxA(DAT_0040428c,pcVar9,s_Install_0040419c,0);
    }
    else {
      uVar7 = (*DAT_0040435c)(&DAT_004042a0,local_c,&local_18,local_19c,local_3b0);
      local_10 = (HMODULE)(uVar7 & 0xffff);
      FreeLibrary(pHVar6);
    }
  }
  else {
    FUN_00402b7c();
  }
  FUN_00401083();
  if (local_5 == 0) {
    OpenFile(local_11c,(LPOFSTRUCT)(local_230 + 0xc),0x200);
  }
  if (DAT_00404348 != (HGDIOBJ)0x0) {
    DeleteObject(DAT_00404348);
  }
  if (local_18 != 1) {
    local_230._0_4_ = 0x94;
    GetVersionExA((LPOSVERSIONINFOA)local_230);
    ExitWindowsEx(-(uint)(local_220 != 2) & 2,0);
  }
  if (local_19c[0] != '\0') {
    WinExec(local_19c,5);
  }
                    /* WARNING: Subroutine does not return */
  ExitProcess((UINT)local_10);
}


