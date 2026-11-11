
/* ==== FUN_1001117c @ 1001117c ==== 
 * signature: undefined __cdecl FUN_1001117c(HWND param_1, HWND param_2)
 * body: 1001117c-100113c2
 */

void __cdecl FUN_1001117c(HWND param_1,HWND param_2)

{
  int iVar1;
  uint uVar2;
  CHAR local_3e8 [8];
  char local_3e0;
  CHAR local_3df [575];
  CHAR local_1a0 [128];
  CHAR local_120 [128];
  CHAR local_a0 [2];
  char local_9e;
  uint local_20;
  uint local_1c;
  DWORD local_18;
  WPARAM local_14;
  WPARAM local_10;
  uint local_c;
  char local_5;
  
  if (param_1 != (HWND)0x0) {
    SendMessageA(param_1,0x14b,0,0);
    SendMessageA(param_2,0x184,0,0);
    SendMessageA(param_2,0x18d,0xc000,0x1001fd14);
    iVar1 = FUN_100164b0();
    local_1c = iVar1 - 1;
    local_20 = SendMessageA(param_2,0x18b,0,0);
    local_10 = 0;
    if (local_20 != 0) {
      do {
        SendMessageA(param_2,0x189,local_10,(LPARAM)local_a0);
        CharLowerA(local_a0);
        uVar2 = (int)local_9e - 0x61;
        local_c = FUN_10011fc8(uVar2);
        if (1 < local_c) {
          wsprintfA(local_120,&DAT_1001fd08,(int)local_9e,&DAT_1001fd10);
          if ((local_c == 3) || (local_c == 6)) {
            wsprintfA(local_a0,s__c______1001f4b4,(int)local_9e);
            iVar1 = FUN_100120c5(local_a0,8,local_3e8);
            if (iVar1 == 0) {
              CharLowerA(local_3e8);
              local_5 = local_3e0;
              local_3e0 = '\0';
              lstrcatA(local_120,local_3e8);
              if ((local_5 == '.') && (iVar1 = lstrlenA(local_3e8), iVar1 == 8)) {
                lstrcatA(local_120,local_3df);
              }
              FUN_1001221a((int)local_3e8);
            }
          }
          if (local_c == 4) {
            local_1a0[0] = '\0';
            local_18 = 0x80;
            wsprintfA(local_a0,&DAT_1001f4cc,(int)local_9e);
            CharUpperA(local_a0);
            WNetGetConnectionA(local_a0,local_1a0,&local_18);
            CharLowerA(local_1a0);
            lstrcatA(local_120,local_1a0);
          }
          local_14 = SendMessageA(param_1,0x143,0,(LPARAM)local_120);
          SendMessageA(param_1,0x151,local_14,local_c << 0x10 | uVar2 & 0xffff);
          if (uVar2 == local_1c) {
            SendMessageA(param_1,0x14e,local_14,0);
          }
        }
        local_10 = local_10 + 1;
      } while (local_10 < local_20);
    }
  }
  return;
}


