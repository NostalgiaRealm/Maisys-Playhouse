
/* ==== __break @ 0042facb ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0042facb-0042facb
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


