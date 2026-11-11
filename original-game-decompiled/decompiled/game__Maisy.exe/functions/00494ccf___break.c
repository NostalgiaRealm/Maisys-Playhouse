
/* ==== __break @ 00494ccf ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00494ccf-00494ccf
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


