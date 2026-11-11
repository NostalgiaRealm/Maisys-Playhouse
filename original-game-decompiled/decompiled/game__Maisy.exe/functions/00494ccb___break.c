
/* ==== __break @ 00494ccb ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00494ccb-00494ccb
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


