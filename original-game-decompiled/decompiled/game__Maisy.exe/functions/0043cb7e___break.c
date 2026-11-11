
/* ==== __break @ 0043cb7e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043cb7e-0043cb7e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


