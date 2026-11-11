
/* ==== __break @ 0043930f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043930f-0043930f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


