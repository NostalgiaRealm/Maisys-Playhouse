
/* ==== __break @ 0043bcce ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043bcce-0043bcce
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


