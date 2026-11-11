
/* ==== Ctl3dWinIniChange @ 5f0020a0 ==== 
 * signature: undefined __stdcall Ctl3dWinIniChange(void)
 * body: 5f0020a0-5f00213e
 */

void Ctl3dWinIniChange(void)

{
  int iVar1;
  CHAR local_c [12];
  
                    /* 0x20a0  22  Ctl3dWinIniChange */
  if (DAT_5f00a235 != '\0') {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_5f005110);
    DAT_5f00a234 = 0x1e;
    GetProfileStringA(s_windows_5f00c040,s_kanjimenu_5f00c034,s_roman_5f00c020,local_c,9);
    iVar1 = lstrcmpiA(local_c,s_kanji_5f00c010);
    if (iVar1 == 0) {
      DAT_5f00a234 = 0x1f;
    }
    GetProfileStringA(s_windows_5f00c040,s_hangeulmenu_5f00c028,s_english_5f00c018,local_c,9);
    iVar1 = lstrcmpiA(local_c,s_hangeul_5f00c008);
    if (iVar1 == 0) {
      DAT_5f00a234 = 0x1f;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_5f005110);
  }
  return;
}


