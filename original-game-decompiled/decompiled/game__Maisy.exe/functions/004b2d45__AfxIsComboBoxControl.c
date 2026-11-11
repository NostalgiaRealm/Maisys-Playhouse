
/* ==== _AfxIsComboBoxControl @ 004b2d45 ==== 
 * signature: int __stdcall _AfxIsComboBoxControl(HWND__ * param_1, uint param_2)
 * body: 004b2d45-004b2d96
 * note: Library Function - Single Match  int __stdcall _AfxIsComboBoxControl(struct HWND__ *,unsigned int)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    int __stdcall _AfxIsComboBoxControl(struct HWND__ *,unsigned int)
   
   Library: Visual Studio 1998 Release */

int _AfxIsComboBoxControl(HWND__ *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  CHAR local_10 [12];
  
  if (param_1 == (HWND__ *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar2 = GetWindowLongA(param_1,-0x10);
    uVar1 = 0;
    if ((uVar2 & 0xf) == param_2) {
      GetClassNameA(param_1,local_10,10);
      iVar3 = lstrcmpiA(local_10,"combobox");
      uVar1 = (uint)(iVar3 == 0);
    }
  }
  return uVar1;
}


